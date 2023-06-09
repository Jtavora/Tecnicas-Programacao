#include "Fila.h"

int main(){

    header *h = cria_header();
    header *h2 = cria_header();
    header *h3 = cria_header();
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

    printf("\nCriando terceira fila.\n");
    for(int i = 0; 4 > i; i++){
        printf("Digite o numero que deseja adicionar na lista: ");
        scanf("%d", &num);

        cria_fila(h3, num);
    }

    printf("Primeira fila: \n");
    imprime(h);

    printf("\nSegunda fila.\n");
    imprime(h2);

    printf("\nTerceira fila.\n");
    imprime(h3);

    header *intercalado = intercala(h, h2, h3);

    printf("\nIntercaladas.\n");
    imprime(intercalado);

    limpa_fila(h);
    limpa_fila(h2);
    limpa_fila(h3);
    limpa_fila(intercalado);

    return 0;
}