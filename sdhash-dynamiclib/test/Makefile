all: test
FLAGS=-Wall -ggdb

main.o: main.c
	gcc $(FLAGS) -c main.c -I/usr/local/include/

test: main.o
	gcc $(FLAGS) -o test main.o -lsdhash -L/usr/local/lib/

.phony: clean


clean:
	rm -rf test main.o
