#include <stdio.h>
#include <stdlib.h>

float media = 0, mediaB = 0, somaB = 0, soma = 0, somaC = 0;
int i, j, k, z, m[3][6];

int main() {
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 6; j++) {
      m[i][j] = rand() % 50;
      // letra a:
      if (j % 2 != 0) {
        soma = m[i][j] + soma;
      }
      // letra b:
      if (j == 1 || j == 3) {
        somaB = m[i][j] + somaB;
      }
    }
    // letra c

    if (j == 1 || j == 2) {
      somaC = m[i][j] + somaC;
    }
    m[i][5] = somaC;
  }
  media = somaB / 6;
  printf("\n Soma é nois: %.2f", soma);
  printf("\n Media da B: %.2f\n\n", mediaB);

  // Mostrando as paradas...

  for (k = 0; k < 3; k++) {
    printf("\n");
    for (z = 0; z < 6; z++) {
      printf("[%d]\t", m[k][z]);
    }
  }
}
