programa: arq.o
	gcc lista.o functions.o -o programa.exe

arq.o: Lista.h Functions.c Lista.c
	gcc -c -g Lista.c -o lista.o
	gcc -c -g Functions.c -o functions.o

run: programa
	./programa.exe

clean:
	rm functions.o lista.o programa.exe

all: programa run clean