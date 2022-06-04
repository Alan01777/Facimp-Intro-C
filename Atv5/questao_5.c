#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[4];
  int vetRepet[4];
  int i, j;

  for (i = 0; i < 4; i++) {
    printf("Insira um valor para vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < 4; i++) {
    for (j = i + 1; j < 4; j++) {
      if (vetor[i] == vetor[j]) {
      }
    }
  }
  printf("\n");
  for (i = 0; i < 4; i++) {
    printf("vetor[%d] se repete %d vezes\n", i);
  }
  system("pause");
}