void insertionSort(ListaAlunos* lista) {
    if (lista == NULL || lista->inicio == NULL) {
        return;
    }
    Aluno *i, *j, *aux;
    for (i = lista->inicio->prox; i != NULL; i = i->prox) {
        aux = i;
        for (j = i->ant; j != NULL; j = j->ant) {
            if (j->matricula > aux->matricula) {
                j->prox = aux->prox;
                if (aux->prox != NULL) {
                    aux->prox->ant = j;
                }
                aux->ant = j->ant;
                aux->prox = j;
                if (j->ant != NULL) {
                    j->ant->prox = aux;
                } else {
                    lista->inicio = aux;
                }
                j->ant = aux;
            } else {
                break;
            }
        }
    }
}
