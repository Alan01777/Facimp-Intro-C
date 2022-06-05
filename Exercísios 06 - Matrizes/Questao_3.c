#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da
// linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.

int main() {
  int matriz[4][4];
  int i, j;

  printf("Matriz original:");
  for (i = 0; i < 4; i++) {
    printf("\n");
    for (j = 0; j < 4; j++) {
      matriz[i][j] = rand() % 20;
      printf("[%d]\t", matriz[i][j]);
    }
  }
  printf("\n\nMatriz modificada:");
  for (i = 0; i < 4; i++) {
    printf("\n");
    for (j = 0; j < 4; j++) {
      matriz[i][j] = i * j;
      printf("[%d]\t", matriz[i][j]);
    }
  }
  printf("\n\nFim!\n\n");
}

