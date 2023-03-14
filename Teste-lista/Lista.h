#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Header{
    struct Lista *ultima;
}header;

typedef struct Produto{
    int codProd; //código do produto
    char *nomeProd; //nome do produto
    float valor; //valor do produto
    int qtdeEstoque; //quantidade disponível em estoque
}produto;

typedef struct Lista{
    produto *prod;
    struct Lista *anterior;
}lista;

header *cria_header(void);
void cria_lista(header *h, int codigo, char *nome, float valor, int quant);
void menor_preco(header *h, float *menor);
void busca_printa(header *h, float num);
void libera_lista(header *x);
