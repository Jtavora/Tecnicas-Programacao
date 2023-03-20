#include "Fila.h"

int main(){

    header *h = cria_header();
    header *h2 = cria_header();
    int num;

    printf("Criando primeira fila.\n");
    for(int i = 0; 4 > i; i++){
        printf("Digite o numero que deseja adicionar na lista: ");
        scanf("%d", &num);

        cria_fila(h, num);
    }

    printf("\nCriando segunda fila.\n");
    for(int i = 0; 4 > i; i++){
        printf("Digite o numero que deseja adicionar na lista: ");
        scanf("%d", &num);

        cria_fila(h2, num);
    }

    printf("Primeira fila: \n");
    imprime(h);

    printf("\nSegunda fila.\n");
    imprime(h2);

    header *intercalado = intercala(h, h2);

    printf("\nIntercaladas.\n");
    imprime(intercalado);

    limpa_fila(h);
    limpa_fila(h2);
    limpa_fila(intercalado);

    return 0;
}