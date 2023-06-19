#include <stdio.h>
#include <stdlib.h>
#define tam 29

typedef struct header{
    struct lista *primeiro;
    struct lista *ultimo;

}header;

typedef struct lista{
    struct lista *proximo;
    struct lista *anterior;
    struct aluno *info;

}lista;

typedef struct aluno{
    int matricula;
    char *nome;
    int idade;

}aluno;

typedef struct hash{
    struct header *header;

}hash;

header *cria_header(void);
void insere_lista(header *h, int idade, int matricula, char *nome);
void insere_tabela(hash *table, int idade, int matricula, char *nome);
int funcao_hash(int valor);
hash *inicializa_tabela(void);
void imprime_tabela(hash *tabela);
void imprime_lista(header *h);
