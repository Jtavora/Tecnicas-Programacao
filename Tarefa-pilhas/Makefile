programa: arq.o
	gcc functions.o pilha.o -o programa.exe

arq.o: Pilha.c Pilha.h Functions.c
	gcc -c -g Functions.c -o functions.o
	gcc -c -g Pilha.c -o pilha.o

run: programa
	./programa.exe

clean: 
	rm functions.o pilha.o programa.exe

all: programa run clean
