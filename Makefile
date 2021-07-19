.PHONY: clean

main: functions.o main.o
	gcc functions.o main.o -o main

functions.o: functions.c functions.h 
	gcc -c functions.c -o functions.o
	
main.o: main.c
	gcc -c main.c -o main.o

clean: 
	rm *o main