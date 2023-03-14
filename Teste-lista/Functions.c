#include "Lista.h"

header *cria_header(void){
    header *h = (header*) malloc(sizeof(header));

    h -> ultima = NULL;

    return h;
}

void cria_lista(header *h, int codigo, char *nome, float valor, int quant){
    lista *x = (lista*) malloc(sizeof(lista));

    x -> anterior = h -> ultima;
    h -> ultima = x;
    x -> prod = (produto*) malloc(sizeof(produto));
    x -> prod -> codProd = codigo;
    x -> prod -> valor = valor;
    x -> prod -> qtdeEstoque = quant;
    x -> prod-> nomeProd = nome;

}

void menor_preco(header *h, float *menor){
    for(lista *i = h -> ultima; i != NULL; i = i -> anterior){
        if(*menor > (i -> prod -> valor)){
            *menor = i -> prod -> valor;
        }
    }
}

void busca_printa(header *h, float num){
    for(lista *i = h -> ultima; i != NULL; i = i -> anterior){
        if(num == i -> prod -> valor){
            printf("\n..:: PRODUTO DE MENOR VALOR ::..\n");
            printf("Nome: %s\n", i -> prod -> nomeProd);
            printf("Valor: %.2f\n", i -> prod -> valor);
            printf("Quantoidade no estoque: %d\n", i -> prod -> qtdeEstoque);
            printf("Codigo: %d\n", i -> prod -> codProd);
            break;
        }
    }
}

void libera_lista(header *x){
    lista *p = x -> ultima;
    lista *aux;

    while(p != NULL){
        aux = p -> anterior;
        free(p);
        p = aux;
    }

    free(x);
}



