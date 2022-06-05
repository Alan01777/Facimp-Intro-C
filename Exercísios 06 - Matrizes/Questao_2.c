#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// 2. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os
// demais elementos. Escreva ao final a matriz obtida.

int main() {
  int matriz[5][5];
  int i, j;

  printf("Matriz original:");
  for (i = 0; i < 5; i++) {
    printf("\n");
    for (j = 0; j < 5; j++) {
      matriz[i][j] = rand() % 20;
      printf("[%d]\t", matriz[i][j]);
    }
  }
  printf("\n\nMatriz modificada:");
  for (i = 0; i < 5; i++) {
    printf("\n");
    for (j = 0; j < 5; j++) {
      if (i != j) {
        matriz[i][j] = 0;
      } else {
        matriz[i][j] = 1;
      }
      printf("[%d]\t", matriz[i][j]);
    }
  }
  printf("\n\nFim!\n\n");
}