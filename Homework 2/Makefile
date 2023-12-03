CC = g++
CFLAGS = -Wall -o
TARGETS = hw2_p1 hw2_p2 hw2_p3 hw2_p4 hw2_p5 hw2_p6

all: $(TARGETS)

hw2_p1: List.cpp 
	$(CC) $(CFLAGS) hw2_p1 List.cpp

hw2_p2: Deque.cpp
	$(CC) $(CFLAGS) hw2_p2 Deque.cpp

hw2_p3: testWindGauge.cpp WindGauge.cpp 
	$(CC) $(CFLAGS) hw2_p3 testWindGauge.cpp WindGauge.cpp 

hw2_p4: Reverse.cpp
	$(CC) $(CFLAGS) hw2_p4 Reverse.cpp

hw2_p5: Lotto.cpp
	$(CC) $(CFLAGS) hw2_p5 Lotto.cpp

hw2_p6: Maps.cpp
	$(CC) $(CFLAGS) hw2_p6 Maps.cpp

clean:
	rm $(TARGETS)