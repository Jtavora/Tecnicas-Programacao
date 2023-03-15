#include <stdio.h>
#include <stdlib.h>

typedef struct header{
    struct Pilha *primeiro;
}header;


typedef struct Pilha{
    int num;
    struct Pilha *prox;
}pilha;

header *cria_header(void);
void cria_lista(header *h, int num);
void binario(header *h, int num);
void printa_binario(header *h);
void libera_pilha(header *h);