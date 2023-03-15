#include "Pilha.h"

void cria_lista(header *h, int num){
    pilha *x = (pilha*) malloc(sizeof(pilha));

    x -> num = num;
    x -> prox = h -> primeiro;
    h -> primeiro = x;
}

header *cria_header(void){
    header *h = (header*) malloc(sizeof(header));

    h -> primeiro = NULL;

    return h;
}

void binario(header *h, int num){
    int div, rest;

    div = num;

    div = div / 2;
    rest = div % 2;
    cria_lista(h, rest);

    while(div != 0){
        div = div / 2;
        rest = div % 2;
        cria_lista(h, rest);
    }
}

void printa_binario(header *h){
    for(pilha *i = h -> primeiro; i != NULL; i = i -> prox){
        printf("%d", i -> num);
    }

    printf("\n");
}

void libera_pilha(header *h){
    pilha *aux;

    for(pilha *i = h -> primeiro; i != NULL; i = aux){
        aux = i -> prox;
        free(i);
    }

    free(h);
}