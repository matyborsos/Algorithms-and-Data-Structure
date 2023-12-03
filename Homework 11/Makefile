CC = g++
CFLAGS = -Wall -o
TARGETS = Activity-selection.cpp Hash-Table.cpp

all: $(TARGETS)

Activity-selection.cpp: Activity-selection-use.cpp Activity-selection.cpp Activity-selection.h
	$(CC) $(CFLAGS) activity Activity-selection-use.cpp Activity-selection.cpp

Hash-Table.cpp: Hash-Table-use.cpp Hash-Table.cpp Hash-Table.h
	$(CC) $(CFLAGS) hash Hash-Table-use.cpp Hash-Table.cpp

run: activity hash
	./activity ./hash

clean: