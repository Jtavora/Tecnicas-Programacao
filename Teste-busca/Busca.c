#include <stdio.h>

// Função que realiza a busca de um elemento em um array ordenado utilizando busca binária
int busca_binaria(int arr[], int n, int x) {
    int esq = 0;
    int dir = n - 1;
    while (esq <= dir) {
        int meio = (esq + dir) / 2;
        if (arr[meio] == x) {
            return meio;
        } else if (arr[meio] < x) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 5, 7, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;

    int indice = busca_binaria(arr, n, x);

    if (indice != -1) {
        printf("Elemento %d encontrado no índice %d\n", x, indice);
    } else {
        printf("Elemento %d não encontrado no array\n", x);
    }

    return 0;
}
