#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[10], elementosRepetidos = 0;
  int i, j;

  for (i = 0; i < 10; i++) {
    printf("vetor[%d] = ", i);
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < 10; i++) {
    for (j = i + 1; i < 10; i++) {
      if (vetor[i] == vetor[j]) {
        elementosRepetidos++;
      }
    }
  }
  printf("Foram detectados %d elementos repetidos no vetor.\n\n", elementosRepetidos);
  system("pause");
}