#include "main.h"

int main(){
    char *nome;
    int idade, matricula;
    hash *table = inicializa_tabela();

    while(nome != "\n"){
        nome = (char*) malloc(sizeof(char) * 50);

        fflush(stdin);

        printf("Digite a matricula do aluno: ");
        scanf("%d%*c", &matricula);
        
        if(matricula == 0)
            break;

        printf("Digite a idade do aluno: ");
        scanf("%d%*c", &idade);
        printf("Digite o nome do aluno: ");
        scanf("%s%*c", nome);

        insere_tabela(table, idade, matricula, nome);
        printf("\n");
    }

    printf("\n");

    imprime_tabela(table);

    return 0;

}


