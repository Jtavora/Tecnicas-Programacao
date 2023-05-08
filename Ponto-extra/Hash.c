#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 3

typedef struct Node {
    char key;
    int value;
    struct Node* next;
} Node;

int hash(char key) {
    return key % TABLE_SIZE;
}

void insert(Node* table[], char key, int value) {
    int index = hash(key);
    Node* node = (Node*)malloc(sizeof(Node));
    node->key = key;
    node->value = value;
    node->next = NULL;

    if (table[index] == NULL) {
        table[index] = node;
    } else {
        Node* ptr = table[index];
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = node;
    }
}

int search(Node* table[], char key) {
    int index = hash(key);
    Node* ptr = table[index];
    while (ptr != NULL) {
        if (ptr->key == key) {
            return ptr->value;
        }
        ptr = ptr->next;
    }
    return -1;
}

int main() {
    Node* table[TABLE_SIZE];
    memset(table, 0, sizeof(table));

    // Inserindo chaves na tabela hash
    insert(table, 'D', 2);
    insert(table, 'Q', 0);
    insert(table, 'B', 0);
    insert(table, 'I', 1);
    insert(table, 'M', 2);
    insert(table, 'H', 0);
    insert(table, 'G', 2);
    insert(table, 'U', 1);
    insert(table, 'A', 2);
    insert(table, 'C', 1);
    insert(table, 'R', 1);
    insert(table, 'S', 2);

    // Buscando chave 'J'
    int result = search(table, 'J');
    if (result != -1) {
        printf("O valor da chave 'J' é %d\n", result);
    } else {
        printf("A chave 'J' não foi encontrada\n");
    }

    return 0;
}
