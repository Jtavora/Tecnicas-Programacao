#include "Lista.h"

int main(){
    
    header *h = cria_header();
    float menor = 1000000;
    float valor;
    int quant, cod, quantprod;
    char *nome;

    printf("Digite quantos produtos deseja adicionar: ");
    scanf("%d", &quant);

    for(int i = 0; quant > i; i++){
        nome = (char*) malloc(50 * sizeof(char));
        printf("\n..:: REGISTRANDO PRODUTO ::..\n");
        printf("Digite o nome do produto: ");
        getchar();
        gets(nome);
        printf("Digite o valor do produto: ");
        scanf("%f", &valor);
        printf("Digite a quantidade no estoque: ");
        scanf("%d", &quantprod);
        printf("Digite o codigo: ");
        scanf("%d", &cod);
        cria_lista(h, cod, nome, valor, quantprod);
    }   

    menor_preco(h, &menor);

    busca_printa(h, menor);

    libera_lista(h);

    return 0;
}