programa: arq.o
	gcc func.o fila.o -o prog.exe

arq.o: Fila.h Fila.c Functions.c 
	gcc -c -g Fila.c -o fila.o
	gcc -c -g Functions.c -o func.o

run: programa
	./prog.exe

clean:
	rm func.o fila.o prog.exe

all: programa run clean