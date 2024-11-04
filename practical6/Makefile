CC = gcc  # C compiler
CFLAGS = -O3
LDFLAGS = -lm

mmc: main.o math_mult.o
	$(CC) -o mmc main.o math_mult.o $(LDFLAGS)

math_mult.o: math_mult.c
	$(CC) -c $(CFLAGS) math_mult.c

main.o: main.c
	$(CC) -c $(CFLAGS) main.c
