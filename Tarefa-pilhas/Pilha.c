#include "Pilha.h"

int main(){
    int num = 5;
    header *h;

    while(num >= 0){
        printf("Digite um numero para gerar o binario dele: ");
        scanf("%d", &num);

        if(0 >= num){
            printf("Numero negativo!\n");
            break;
        }

        h = cria_header();
        binario(h, num);
        printa_binario(h);
        libera_pilha(h);
    }

    printf("\nTodos binarios gerados!\n");

    return 0;
}