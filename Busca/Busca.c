#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario{
    char nome[81];
    float valor_hora;
    int horas_mes;
}Funcionario;

void registro(struct funcionario *x, int n){
    for(int i = 0; n > i; i++){
        system("clear");
        printf("..:: REGISTRO %d ::..\n", i);
        printf("Digite o nome: ");
        gets((x + i)->nome);
        printf("Digite o valor da hora: ");
        scanf("%f%*c", &(x + i)->valor_hora);
        printf("Digite quantas horas no mes foram trabalhadas: ");
        scanf("%d%*c", &(x + i)->horas_mes);
        system("clear");
    }
}

void info(struct funcionario *x){
    printf("..:: INFORMACOES ::..\n");
    printf("Nome: %s\n", x->nome);
    printf("Valor da hora: %.2f\n", x->valor_hora);
    printf("Horas trabalhadas: %d\n", x->horas_mes);
    for(int i = 0; i < 2000000000; i++){  // CRIANDO DELAY PARA LIMPAR A TELA 
	}
    system("clear");
}

void busca(struct funcionario *x, char *nom, int n, char *stop){
    if(strcmp(nom, stop) != 0){
        for(int i = 0; n > i; i++){
            if(strcmp(nom, (x + i)->nome) == 0){
                printf("Encontrado na posicao %d!\n\n", i);
                info((x + i));
                break;
            }else{
                printf("Nao encontrado na posicao %d!\n", i);
                continue;
            }
        }
    }
}

int main(){
    
    int tam;
    char nome[50];
    char stop[2] = {'0'};

    printf("Digite quantas funcionarios deseja cadastrar: ");
    scanf("%d%*c", &tam);

    Funcionario contratados[tam];

    registro(contratados, tam);

    while(strcmp(nome, stop) != 0){
        printf("\nDigite o nome que deseja procurar ou digite 0 caso queira parar: ");
        gets(nome);
        busca(contratados, nome, tam, stop);
    }

    printf("\nObrigado por utilizar nosso sistema!\n");

    return 0;
}