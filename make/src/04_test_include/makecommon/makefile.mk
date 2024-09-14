ifndef TARGET
	TARGET:=test
endif

SRCS:=$(wildcard *.cpp *.cc *.c)
OBJS:=$(patsubst %.cpp, %.o, $(SRCS))
OBJS:=$(patsubst %.cc, %.o, $(OBJS))
OBJS:=$(patsubst %.c, %.o, $(OBJS))

CXXFLAGS:=-I../include -std=c++20

LDFLAGS:=-L../xcom -L../xthread -L../xserver

LIBS:=-lpthread

$(TARGET):$(OBJS)
	@echo "$(TARGET) build start"
	$(CXX) $(LDFLAGS) $^ -o $@ $(LIBS)
	@echo "$(TARGET) build success"


list:
	@echo $(TARGET)
	@echo $(SRCS)
	@echo $(OBJS)


clean:
	$(RM) $(TARGET) $(OBJS)


.PHONY: clean list

