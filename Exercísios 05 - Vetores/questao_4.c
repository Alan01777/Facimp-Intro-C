#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[4], elementosDuplicados = 0;
  int i, j, aux, cont = 0;
  for (i = 0; i < 4; i++) {
    printf("Insira um valor: ");
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < 4; i++) {
    for (j = i + 1; j < 4; j++) {
      if (vetor[i] == vetor[j]) {
        vetor[i] = -1;
        // ordenação dos valores do vetor
      } else if (vetor[i] > vetor[j]) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
  for (i = 0; i < 4; i++) {
    if (vetor[i] >= 0) {
      printf("\nValor do vetor [%d] = %d ", cont, vetor[i]);
      cont++;
    }
  }
  printf("\n\n");
  system("pause");
}