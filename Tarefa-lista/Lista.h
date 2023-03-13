#include <stdio.h>
#include <stdlib.h>

typedef struct Header{
    struct Lista *ultimo;
}header;


typedef struct Lista{
    struct Lista *anterior;
    int num;
}lista;

header *cria_header(void);
void cria_lista(header *h, int num);
header *buscar(header *h, int num);
