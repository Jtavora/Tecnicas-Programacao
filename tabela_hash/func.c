#include "main.h"

header *cria_header(){
    header *h = (header*)malloc(sizeof(header));
    
    h -> primeiro = NULL;
    h -> ultimo = NULL;
    
    return h;
}

void insere_elemento(header *h, int valor){
    lista *x = (lista*)malloc(sizeof(lista));

    if(h -> primeiro == NULL){
        h -> primeiro = x;
        h -> ultimo = x;
        x -> proximo = NULL;
        x -> anterior = NULL;
        x -> valor = valor;

    }else{
        h -> ultimo -> proximo = x;
        x -> anterior = h -> ultimo;
        h -> ultimo = x;
        x -> proximo = NULL;
        x -> valor = valor;

    }        

}

hash* incicializa_tabela(void){
    hash *tabel = (hash*)malloc(sizeof(hash) * TAM);

    for(int i = 0; i < TAM; i++){
        (tabel + i) -> tabela = cria_header();
    }

    return tabel;
}

int funcao_hash(int chave){
    return chave % TAM;
}

void insere_tabela(hash *tabel, int chave){
    int posicao = funcao_hash(chave);
    insere_elemento((tabel + posicao) -> tabela, chave);

}

void imprime_tabela(hash *tabel){
    for(int i = 0; i < TAM; i++){
        printf("Posicao %d: ", i);
        lista *aux = (tabel + i) -> tabela -> primeiro;
        while(aux != NULL){
            printf("%d ", aux -> valor);
            aux = aux -> proximo;
        }
        printf("\n");
    }
}