#include <stdio.h>
#include <stdlib.h>
#include "programa.h"

int main(){

    numeros *x;

    x = cria_racional();

    printa_racionais(x);

    soma_racionais(x);

    multiplica_racionais(x);

    testa_iguais(x);

    return 0;

}