TARGET=libxcom

OBJS=xcom.o

ifeq ($(STATIC), 1)
	CXXFLAGS=-std=c++20
	TARGET:=$(TARGET).a

$(TARGET):$(OBJS)
		$(AR) -cvr $@ $^

else
	LDFLAGS=-shared
	
	CXXFLAGS=-fPIC -std=c++20
	
	TARGET:=$(TARGET).so
$(TARGET):$(OBJS)
		$(CXX) $(LDFLAGS) $^ -o $@
endif


clean:
	$(RM) $(TARGET) $(OBJS)

.PHONY:clean

