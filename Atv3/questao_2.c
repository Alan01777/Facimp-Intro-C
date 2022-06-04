// Construa um programa em C que leia v�rios n�meros e informe quantos n�meros
// entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o
// algoritmo dever� cessar sua execu��o. *

#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int num, cem_200 = 0;

  printf("Descubra se um valor est� entre 100 e 200.\n");
  printf("Digite 0 para encerrar o programa\n\n");

  for (int i = 1; i < 10000; i++) {
    printf("Insira um valor: ");
    scanf("%d", &num);
    if (num == 0) {
      printf("\n\nFIM da contagem!");
      printf("\nForam lidos %d valores entre 100 e 200 ao todo.\n\n", cem_200);
      system("pause");
      exit(0);  // saida do programa
    } else if (num >= 100 && num <= 200) {
      cem_200++;
      printf("%d n�meros entre 100 e 200 at� agora.\n", cem_200);
    } else {
      printf("%d n�meros entre 100 e 200 at� agora.\n", cem_200);
    }
  }
}