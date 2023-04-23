void bubbleSort(ListaAlunos* lista) {
    if (lista == NULL || lista->inicio == NULL) {
        return;
    }
    Aluno* i, * j, * aux;
    int trocou = 1;
    while (trocou) {
        trocou = 0;
        for (i = lista->inicio; i != NULL && i->prox != NULL; i = i->prox) {
            j = i->prox;
            if (i->matricula > j->matricula) {
                aux = i->ant;
                if (aux != NULL) {
                    aux->prox = j;
                } else {
                    lista->inicio = j;
                }
                j->ant = aux;
                i->ant = j;
                i->prox = j->prox;
                if (j->prox != NULL) {
                    j->prox->ant = i;
                }
                j->prox = i;
                trocou = 1;
            }
        }
    }
}
