
TARGET=libxthread.so

LIBS=-lpthread

OBJS=xthread.o

LDFLAGS=-shared

CXXFLAGS=-fPIC -std=c++20

$(TARGET):$(OBJS)
	@echo "begin build $(TARGET)"
	$(CXX) $(LDFLAGS) $^ -o $@ $(LIBS)
	@echo "build $(TARGET) sucess"


clean:
	$(RM) $(TARGET) $(OBJS)

.PHONY: clean
