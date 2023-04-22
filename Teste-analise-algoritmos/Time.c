#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int N = 100000;
  int V[N];
  int i, j, s;

  // Início da medição de tempo
  clock_t start_time = clock();

  for (i = 0; i < N; i++) {
    V[i] = rand() % 100000;
  }
  for (i = 0; i < N; i = i+2) {
    for (j = N-i; j >= 0; j--){
      if (V[i] < V[j]) {
        s = V[i];
      }
    }
  }

  // Fim da medição de tempo
  clock_t end_time = clock();

  // Cálculo do tempo de execução em segundos
  double total_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
  printf("Tempo de execução: %lf segundos\n", total_time);
  return 0;
}