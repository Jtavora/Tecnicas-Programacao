#include "Pilha.h"

header *aloca_header(void){
    header *x = (header*) malloc(sizeof(header));

    x -> ultimo = NULL;

    return x;
}

void cria_pilha(header *h, char num){
    lifo *x = (lifo*) malloc(sizeof(lifo));

    x -> anterior = h -> ultimo;
    h -> ultimo = x;
    x -> num = num;
}

void imprime_pilha(header *x){
    lifo *p = x -> ultimo;

    while(p != NULL){
        printf("%c", (p -> num));
        p = p -> anterior;
    }

    printf("\n");
}

void libera_pilha(header *x){
    lifo *p = x -> ultimo;
    lifo *aux;

    while(p != NULL){
        aux = p -> anterior;
        free(p);
        p = aux;
    }

    free(x);
}