TARGET= xserver

OBJS= xserver.o

LDFLAGS=-L../xthread -L../xcom

CXXFLAGS=-I../xthread -I../xcom -std=c++20

LIBS=-lxthread -lpthread -lxcom

$(TARGET): $(OBJS)
	$(CXX) $^ -o $@ $(LDFLAGS) $(LIBS)

clean:
	$(RM) $(TARGET) $(OBJS)

.PHONY: clean
