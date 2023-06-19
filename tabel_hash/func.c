#include "main.h"

header *cria_header(void){
    header *h = (header*) malloc(sizeof(header));

    h -> primeiro = NULL;   
    h -> ultimo = NULL;

    return h;
}

void insere_lista(header *h, int idade, int matricula, char *nome){
    lista *x = (lista*) malloc(sizeof(lista));

    if(h -> primeiro == NULL){
        h -> primeiro = x;
        h -> ultimo = x;
        x -> proximo = NULL;
        x -> anterior = NULL;
        x -> info = (aluno*) malloc(sizeof(aluno));
        x -> info -> matricula = matricula;
        x -> info -> idade = idade;
        x -> info -> nome = nome;

    }else{
        x -> anterior = h -> ultimo;
        x -> proximo = NULL;
        h -> ultimo -> proximo = x;
        h -> ultimo = x;
        x -> info = (aluno*) malloc(sizeof(aluno));
        x -> info -> matricula = matricula;
        x -> info -> idade = idade;
        x -> info -> nome = nome;

    }

}

int funcao_hash(int valor){
    return valor % tam;

}

void insere_tabela(hash *table, int idade, int matricula, char *nome){
    int chave;

    chave = funcao_hash(matricula);

    insere_lista((table + chave) -> header, idade, matricula, nome);

}

hash *inicializa_tabela(void){
    hash *h = (hash*) malloc(sizeof(hash) * tam);

    for(int i = 0; tam > i; i++){
        (h + i) -> header = cria_header();
    }

    return h;
}

void imprime_lista(header *h){
    for(lista *p = h -> primeiro; p != NULL; p = p -> proximo){
        printf("Matricula: %d\n", p -> info -> matricula);
        printf("Nome: %s\n", p -> info -> nome);
        printf("Idade: %d\n\n", p -> info -> idade);

    }
}

void imprime_tabela(hash *tabela){
    for(int i = 0; tam > i; i++){
        if((tabela + i) -> header -> primeiro  == NULL)
            continue;
        imprime_lista((tabela + i) -> header);
    }

}

