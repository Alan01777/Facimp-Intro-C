#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[10], maiorValor = 0, maiorPosicao;

  for (int i = 0; i <= 9; i++) {
    printf("Insira um valor(não repetir valores): ");
    scanf("%d", &vetor[i]);

    if (vetor[i] > maiorValor) {
      maiorValor = vetor[i];
      maiorPosicao = i;
    }
  }

  printf("O maior elemento foi o vetor[%d] com valor: %d.\n\n", maiorPosicao,
         maiorValor);

  system("pause");
}