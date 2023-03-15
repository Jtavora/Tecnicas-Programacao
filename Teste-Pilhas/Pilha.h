#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Header{
    struct Pilha *ultimo;
}header;

typedef struct Pilha{
    struct Pilha *anterior;
    char num;
}lifo;

header *aloca_header(void);
void cria_pilha(header *h, char num);
void imprime_pilha(header *x);
void libera_pilha(header *x);