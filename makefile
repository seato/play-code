CC=gcc
CFLAGS=-O3 -g -Wall
OBJS=fun.o
EXECUTABLE=euler
LIBS=-lm

all: $(OBJS)
	$(CC) -o $(EXECUTABLE) $(OBJS) $(LIBS)

fun.o:
	$(CC) -c fun.c

clean:
	rm -f $(EXECUTABLE) *.o *~
