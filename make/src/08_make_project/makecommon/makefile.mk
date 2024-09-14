#makefile.mk 公共头文件
ifndef TARGET
	TARGET:=$(notdir $(shell pwd))
endif

SRCS:=$(wildcard *.cpp *.cc *.c)
OBJS:=$(patsubst %.cpp, %.o, $(SRCS))
OBJS:=$(patsubst %.cc, %.o, $(OBJS))
OBJS:=$(patsubst %.c, %.o, $(OBJS))

CXXFLAGS:=$(CXXFLAGS) -I../include -std=c++20 						# g++ -c 编译自动推导
LDFLAGS:=$(LDFLAGS) -L../xcom -L../xthread -L../xserver  # 链接库目录 可用于自动推导
LIBS:=$(LIBS) -lpthread																# 链接库 用于自动推导
OUT:=../out

#区分动态库 静态库和可执行程序
ifeq ($(LIBTYPE),.so)#动态库
	TARGET:=lib$(TARGET).so
	LIBS:=$(LIBS) -shared
	CXXFLAGS:=$(CXXFLAGS) -fPIC
endif

ifeq ($(LIBTYPE),.a)#静态库
	TARGET:=lib$(TARGET).a
endif

# 头文件依赖
all:depend $(TARGET)
depend:
	@$(CXX) $(CXXFLAGS) -MM $(SRCS) > .depend

-include .depend


#目标生成
$(TARGET):$(OBJS)
	@echo "$(TARGET) build start"
ifeq ($(LIBTYPE),.a)
	$(AR) -cvr $@ $^		
else
	$(CXX) $(LDFLAGS) $^ -o $@ $(LIBS)
endif
	@echo "$(TARGET) build success"

STARTSH=start_$(TARGET)
STOPSH=stop_$(TARGET)

# $(1) TARGET, $(2) OUT
define Install
	@echo "begin install "$(1)
	-mkdir -p $(2)
	cp $(1) $(2)
	@echo "end install "$(1)
endef

# 生成启动停止脚本，并安装到$(OUT)
# $(1) TARGET, $(2) OUT, $(3) $(PARAS) 
define InstallSH
	@echo "begin make start shell"
	echo "DYLD_LIBRARY_PATH=../lib" >> $(STARTSH)
	echo "export DYLD_LIBRARY_PATH" >> $(STARTSH)
	echo "nohup $(1) $(3) &" >> $(STARTSH)
	chmod +x $(STARTSH)
	cp $(STARTSH) $(2)
	$(RM) $(STARTSH)
	@echo "end make start shell"

	@echo "begin make stop shell"
	echo "killall $(1)" > $(STOPSH)
	chmod +x $(STOPSH)
	cp $(STOPSH) $(2)
	$(RM) $(STOPSH)
	@echo "end make stop shell"
endef


list:
	@echo "TARGET="$(TARGET)
	@echo "SRCS="$(SRCS)
	@echo "OBJS="$(OBJS)
	@echo "LIBTYPE="$(LIBTYPE)

clean:
	$(RM) $(TARGET) $(OBJS)

# 安装程序和库
install:$(TARGET)
ifdef LIBTYPE
	$(call Install, $(TARGET), $(OUT)/lib)
	$(call Install, *.h, $(OUT)/include)
else
	$(call Install, $(TARGET), $(OUT)/bin)
	$(call InstallSH, $(TARGET), $(OUT)/bin)
endif

# 卸载程序和库 
uninstall:clean
ifndef LIBTYPE
	-$(STOPSH)
	$(RM) $(OUT)/bin/$(TARGET)
	$(RM) $(OUT)/bin/$(STARTSH)
	$(RM) $(OUT)/bin/$(STOPSH)
else
	$(RM) $(OUT)/lib/$(TARGET) 
endif

# 伪目标
.PHONY: clean list install uninstall all depend

