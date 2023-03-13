#include "Lista.h"

header *cria_header(void){
    header *x = (header*) malloc(sizeof(header));

    x -> ultimo = NULL;

    return x;
}

void cria_lista(header *h, int num){
    lista *x = (lista*) malloc(sizeof(lista));

    if(h -> ultimo == NULL){
        h -> ultimo = x;
        x -> num = num;
        x -> anterior = NULL;
    }else{
        x -> num = num;
        x -> anterior = h -> ultimo;
        h -> ultimo = x;
    }
}

header *buscar(header *h, int num){
    for(lista *i = h -> ultimo; i != NULL; i = i -> anterior){
        if(i -> num == num){
            return h;
        }
    }
}

void libera(header *h){
    lista *aux;

    for(lista *i = h -> ultimo; i != NULL; ){
        aux = i -> anterior;
        free(i);
        i = aux;
    }

    free(h);
}