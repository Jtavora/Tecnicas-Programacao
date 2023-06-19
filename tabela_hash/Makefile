programa: arq.o
	gcc func.o git.o -o prog.exe

arq.o: main.h main.c func.c 
	gcc -c -g main.c -o git.o
	gcc -c -g func.c -o func.o

run: programa
	./prog.exe

clean:
	rm func.o git.o prog.exe

all: programa run clean