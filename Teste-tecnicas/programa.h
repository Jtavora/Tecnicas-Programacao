#include <stdio.h>
#include <stdlib.h>

typedef struct num{
    int total;
    float *vet;
}numeros;

numeros* cria_racional(void);
void aloca_vet(numeros *x);
void pegando_racionais(float *vet, int tam);
void soma_racionais(numeros *x);
void multiplica_racionais(numeros *x);
void testa_iguais(numeros *x);
void printa_racionais(numeros *x);
