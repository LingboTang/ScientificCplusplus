CC=g++
EXE=table read ratpow series pi
CFLAGS=-O2 -ansi -pedantic -Wall -Wshadow -lm

all: $(EXE)

table: table.cpp

read: read.cpp

ratpow: ratpow.cpp

series: series.cpp

pi: pi.cpp

.cpp:
	$(CC) -o $@ $@.cpp $(CFLAGS)

clean:
	rm $(EXE)
