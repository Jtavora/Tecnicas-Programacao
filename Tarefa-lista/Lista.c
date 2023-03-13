#include "Lista.h"

int main(){
    int quant, num;
    header *h = cria_header();

    printf("Digite quantos numeros deseja alocar na lista: ");
    scanf("%d", &quant);

    for(int i = 0; quant > i; i++){
        printf("Digite o numero para colocar na lista: ");
        scanf("%d", &num);
        cria_lista(h, num);
    }

    printf("Digite qual numero deseja buscar: ");
    scanf("%d", &num);

    if(buscar(h, num) == h){
        printf("Numero encontrado!\n");
    }else{
        printf("Numero nao encontrado!\n");
    }

    libera(h);

    return 0;
}