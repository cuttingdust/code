TARGET:=$(notdir $(shell pwd))
SRC:= $(wildcard *.cpp)
OBJS:=$(patsubst %.cpp, %.o, $(SRC))
OUT:=out
CXXFLAGS:=-std=c++20

STARTSH:=start_$(TARGET)
STOPSH:=stop_$(TARGET)
define install #$(1) TARGET $(2) OUT $(3) para1 $(4) para2 $(5) para3 $(6) para4 ...
	@echo $(1) " start install"
	-mkdir -p $(2)
	cp $(1) $(2)
	@echo "begin make start shell"
	@echo "nohup $(1) $(3) $(4) $(5) $(6) &" >$(STARTSH)
	chmod +x $(STARTSH)
	cp $(STARTSH) $(2)
	@echo "end make start shell"
	@echo "begin make stop shell"
	@echo "killall $(1)" > $(STOPSH)
	chmod +x $(STOPSH)
	cp $(STOPSH) $(2)
	@echo "end make stop shell"
	@echo $(1) " install success"
endef



$(TARGET):$(OBJS)
	$(CXX) $^ -o $@

install:$(TARGET)
	$(call install, $(TARGET), $(OUT)/bin, 5)

clean:
	$(RM) $(TARGET) $(OBJS)

.PHONY: install clean
