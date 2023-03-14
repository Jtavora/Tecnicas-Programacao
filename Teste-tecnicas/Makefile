programa: programa.o functions.o
	gcc programa.o functions.o -o programa.exe

functions.o: functions.c programa.h
	gcc -c functions.c -o functions.o

programa.o: programa.c
	gcc -c programa.c -o programa.o

run: programa
	./programa.exe

clean:
	rm functions.o
	rm programa.o
	rm programa.exe

all: programa run clean