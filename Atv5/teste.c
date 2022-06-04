#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[4];
  int i, j, aux, cont = 0;
  for (i = 0; i < 4; i++) {
    printf("Insira um valor: ");
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < 4; i++) {
    for (j = i + 1; j < 4; j++) {
      if (vetor[i] > vetor[j]) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
  cont = 1;
  for (i = 0; i < 4; i++) {
    if (vetor[i] == vetor[i + 1]) {
      cont++;
    } else {
      if (cont == 1) {
        printf("O numero a seguir aparecem apenas uma unica vez:%d\n", vetor[i]);
        cont++;
      }
      cont = 1;
    }
  }
  printf("\n\n");
  system("pause");
}