#include "main.h"

int main(){

    hash *tabel = incicializa_tabela();

    insere_tabela(tabel, 656);
    insere_tabela(tabel, 2453653);
    insere_tabela(tabel, 786);
    insere_tabela(tabel, 52534);
    insere_tabela(tabel, 3424);
    insere_tabela(tabel, 41414);
    insere_tabela(tabel, 124);
    insere_tabela(tabel, 9789);
    insere_tabela(tabel, 23424);
    insere_tabela(tabel, 412323);
    insere_tabela(tabel, 658568);

    imprime_tabela(tabel);

    return 0;
}