#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

//1. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

int main() {
  setlocale(LC_ALL, "Portuguese");
  int matriz[4][4], maior10 = 0;
  int i, j;

  for (i = 0; i < 4; i++) {
    printf("\n");
    for (j = 0; j < 4; j++) {
      matriz[i][j] = rand() % 12;
      printf("[%d]\t", matriz[i][j]);
      if (matriz[i][j] > 10) {
        maior10++;
      }
    }
  }
  printf("\n\nForam lidos %d valores maiores que 10\n\n", maior10);
}