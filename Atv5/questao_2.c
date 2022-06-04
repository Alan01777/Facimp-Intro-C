#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[10], somaVetor = 0;

  for (int i = 0; i < 10; i++) {
    printf("Insira um valor: ");
    scanf("%d", &vetor[i]);
    somaVetor = somaVetor + vetor[i];
  }

  printf("A soma dos valores do vetor: %d\n\n", somaVetor);
  system("pause");
}