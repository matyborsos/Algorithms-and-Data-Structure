CC = g++
CFLAGS = -Wall -o
TARGETS = Stack Queue BsTtoLL LLtoBsT

all: $(TARGETS)

Stack: 
	$(CC) $(CFLAGS) stack Stack.cpp

Queue: Queue.cpp Stack.h 
	$(CC) $(CFLAGS) queue Queue.cpp

BsTtoLL: 
	$(CC) $(CFLAGS) BsT BsTtoLL.cpp

LLtoBsT: 
	$(CC) $(CFLAGS) LL LLtoBsT.cpp

clean:
	rm $(TARGETS)