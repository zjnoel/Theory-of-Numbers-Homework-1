CC = gcc
CFLAGS = -g -Wall -Werror

all:	conjecture1 conjecture2 conjecture4a

conjecture1:
	$(CC) $(CFLAGS) -o conjecture1 conjecture1.c GCD.c
GCD: GCD.c GCD.h
	$(CC) $(CFLAGS) -o GCD GCD.c
conjecture2:
	$(CC) $(CFLAGS) -o conjecture2 conjecture2.c
conjecture4a:
	$(CC) $(CFLAGS) -o conjecture4a conjecture4a.c

clean:
	rm conjecture1
	rm conjecture2
	rm conjecture4a