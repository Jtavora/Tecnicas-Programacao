#include <stdio.h>
#include <stdlib.h>
#include "programa.h"

numeros* cria_racional(void){
    numeros *x = (numeros*) malloc(sizeof(numeros));

    if(x == NULL){
        printf("Incapaz de alocar a struct!\n");
    }

    x -> total = 0;
    x -> vet = NULL;
    
    aloca_vet(x);

    return x;
}

void aloca_vet(numeros *x){
    int tam;

    printf("Digite quantos numeros racionais deseja alocar: ");
    scanf("%d", &tam);

    printf("\n");

    x -> total = tam;
    x -> vet = (float*) malloc(tam * sizeof(float));

    if(x == NULL){
        printf("Incapaz de alocar o vetor!\n");
    }

    pegando_racionais(x -> vet, tam);
}

void pegando_racionais(float *vet, int tam){
    for(int i = 0; tam > i; i++){
        printf("Digite o numero racional %d: ", i);
        scanf("%f", (vet + i));
    }
    printf("\n");
}

void soma_racionais(numeros *x){
    int tam = x -> total;
    float conta = 0;

    for(int i = 0; tam > i; i++){
        conta = conta + *((x -> vet) + i);
    }

    printf("..:: SOMA DOS RACIONAIS: %.2f ::..\n\n", conta);
}

void multiplica_racionais(numeros *x){
    int tam = x -> total;
    float conta = 1;

    for(int i = 0; tam > i; i++){
        conta = conta * *((x -> vet) + i);
    }

    printf("..:: MULTIPLICACAO DOS RACIONAIS: %.2f ::..\n\n", conta);
}

void testa_iguais(numeros *x){
    int tam = x -> total;
    float num, aux;
    int cont;

    for(int i = 0; tam > i; i++){
        num = *((x -> vet) + i);
        cont = 0;
        if(i != 0){
            if(aux == num){
                continue;
            }
        }

        for(int i = 0; tam > i; i++){
            if(num == *((x -> vet) + i)){
                cont++;
                if(cont > 1){
                    printf("Encontrado numero igual (Numero = %.2f) %d vezes!\n", num, cont - 1);
                    aux = num;
                }
            }
        }
    }

    printf("\n");
}

void printa_racionais(numeros *x){
    int tam = x -> total;

    printf("Racionais digitados: ");
    for(int i = 0; tam > i; i++){
        printf("%.2f ", *((x -> vet) + i));
    }
    printf("\n\n");

}

