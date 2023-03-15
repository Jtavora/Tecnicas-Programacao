#include "Pilha.h"

int main(){

    header *h = aloca_header();
    char *frase = (char*) malloc(sizeof(char));

    printf("Digite a frase que deseja empilhar: ");
    scanf("%[^\n]s%*c", frase);

    for(int i = 0; strlen(frase) > i; i++){
        cria_pilha(h, *(i + frase));
    }

    imprime_pilha(h);

    libera_pilha(h);

    return 0;
}