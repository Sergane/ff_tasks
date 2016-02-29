CC=g++
CFLAGS=-c -Wall

all: rect

rect: main.o rectangle.o
	$(CC) main.o rectangle.o -o rect

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

rectangle.o: rectangle.cpp
	$(CC) $(CFLAGS) rectangle.cpp

clean:
	rm -rf *.o rect
