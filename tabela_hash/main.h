#include <stdio.h>
#include <stdlib.h>
#define TAM 11

typedef struct header{
    struct lista *primeiro;
    struct lista *ultimo;

} header;

typedef struct lista{
    int valor;
    struct lista *proximo;
    struct lista *anterior;

} lista;

typedef struct hash{
    header *tabela;

} hash;

header *cria_header();
void insere_elemento(header *h, int valor);
hash* incicializa_tabela(void);
int funcao_hash(int chave);
void insere_tabela(hash *tabel, int chave);
void imprime_tabela(hash *tabel);
