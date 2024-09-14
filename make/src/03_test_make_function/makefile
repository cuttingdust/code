TARGET=test_function_make

SRC:=$(wildcard *.cpp)
OBJS=$(patsubst %.cpp, %.o, $(SRC))

$(TARGET):$(OBJS)
	$(CXX) $^ -o $@


all:
	@echo SRC=$(SRC)

clean:
	$(RM) $(TARGET) $(OBJS)

.PHONY:clean
