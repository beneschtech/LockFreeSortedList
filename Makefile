OBJS = \
       main.o

EXEC = LFSLDemo
HEADERS = LockFreeSortedList.h

$(EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $(EXEC) $(LDFLAGS)

$(OBJS): $(HEADERS) Makefile

all: $(EXEC)

clean:
	rm -fv $(OBJS) $(EXEC)
