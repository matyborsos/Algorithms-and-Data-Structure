CC = g++
CFLAGS = -Wall -o
TARGETS = hw1_p1 hw1_p2 hw1_p3 hw1_p4 hw1_p5

all: $(TARGETS)

hw1_p1: Problem1.1.cpp Complex.cpp
	$(CC) $(CFLAGS) hw1_p1 Problem1.1.cpp Complex.cpp

hw1_p2: testStack.cpp Stack.h
	$(CC) $(CFLAGS) hw1_p2 testStack.cpp

hw1_p3: testLinkedList.cpp LinkedList.h
	$(CC) $(CFLAGS) hw1_p3 testLinkedList.cpp

hw1_p4: Vector1.cpp
	$(CC) $(CFLAGS) hw1_p4 Vector1.cpp

hw1_p5: Vector2.cpp
	$(CC) $(CFLAGS) hw1_p5 Vector2.cpp

clean:
	rm $(TARGETS)