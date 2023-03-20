#include <stdio.h>
#include <stdlib.h>

typedef struct Header{
    struct Fila *primeiro;
    struct Fila *ultimo;
}header;

typedef struct Fila{
    int num;
    struct Fila *anterior;
}fila;

header *cria_header(void);
void cria_fila(header *h, int num);
header* intercala(header *f1, header *f2);
void imprime(header *h);
void limpa_fila(header *h);
