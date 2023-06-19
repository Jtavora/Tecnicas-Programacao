run:
	gcc -c -g main.c -o main.o
	gcc -c -g func.c -o functions.o
	gcc main.o functions.o -o main.exe
	./main.exe
	
clean:
	rm -rf *.o *.exe

all : run clean