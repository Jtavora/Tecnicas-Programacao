programa: arq.o
	gcc func.o lista.o -o prog.exe

arq.o: Lista.h Lista.c Functions.c
	gcc -c -g Functions.c -o func.o
	gcc -c -g Lista.c -o lista.o

run: programa
	./prog.exe

clean:
	rm prog.exe func.o lista.o

all: programa run clean