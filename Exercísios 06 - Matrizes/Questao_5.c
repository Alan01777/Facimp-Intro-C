#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// 3. Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão
// abaixo da diagonal principal.

int main() {
  int matriz[3][3], soma=0;
  int i, j;

  printf("\n\nMatriz Original:\n");
  for (i = 0; i < 3; i++) {
    printf("\n");
    for (j = 0; j < 3; j++) {
      matriz[i][j] = rand() % 10;
      printf("[%d]\t", matriz[i][j]);
    }
  }
  //printf("\n\nModificada\n\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (j < i) {
        soma += matriz[i][j];
      }
    }
  }
  printf("\n\n\n");
  printf("[%d]", soma);
}