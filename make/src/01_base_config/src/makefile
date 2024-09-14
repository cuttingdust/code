# first_make
# $^ 代表所有的依赖文件（去重）
# $@ 代表目标文件
# @  不显示命令 -命令失败,继续执行下一行命令 

TARGET=first_make

LIBS=-lpthread

OBJS=first_make.o xdata.o

CXXFLAGS=-I../test_gcc/

$(TARGET):$(OBJS)
	@# -@rm test
	@echo "begin build $(TARGET)"
	$(CXX) $^ -o $@ $(LIBS)
	@echo "$(TARGET) build success"


clean:
	$(RM) $(TARGET) $(OBJS)

.PHONY: clean *clean
