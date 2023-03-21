#include "Fila.h"

header *cria_header(void){
    header *x = (header*) malloc(sizeof(header));

    x -> primeiro = NULL;
    x -> ultimo = NULL;

    return x;
}

void cria_fila(header *h, int num){
    fila *x = (fila*) malloc(sizeof(fila));

    if(h -> primeiro == NULL){
        x -> num = num;
        h -> primeiro = x;
        h -> ultimo = x;
        x -> anterior = NULL;
    }else{
        x -> num = num;
        h -> ultimo -> anterior = x;
        h -> ultimo = x;
        x -> anterior = NULL;
    }
}

header* intercala(header *f1, header *f2, header *f3){
    header *h = cria_header();
    fila *p, *p2, *p3;

    p = f1 -> primeiro;
    p2 = f2 -> primeiro;
    p3 = f3 -> primeiro; 

    while(p != NULL || p2 != NULL){
        cria_fila(h, p -> num);
        cria_fila(h, p2 -> num);
        cria_fila(h, p3 -> num);
        p = p -> anterior;
        p2 = p2 -> anterior;
        p3 = p3 -> anterior;
    }

    return h;
}

void imprime(header *h){
    
    for(fila *p = h -> primeiro; p != NULL; p = p -> anterior){
        printf("%d\n", p -> num);
    }
    
}

void limpa_fila(header *h){
    fila *aux;
    
    for(fila *p = h -> primeiro; p != NULL; p = aux){
        aux = p -> anterior;
        free(p);
    }
    
    free(h);
}