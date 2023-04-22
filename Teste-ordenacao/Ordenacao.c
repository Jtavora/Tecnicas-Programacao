#include <stdio.h>
#include <string.h>

void bubbleSort(char str[], int n) {
    int i, j;
    char temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (str[j] > str[j+1]) {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);
    int n = strlen(str);
    bubbleSort(str, n);
    printf("String ordenada: %s\n", str);
    return 0;
}
