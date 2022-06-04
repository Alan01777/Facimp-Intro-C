#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float main() {
  int i;
  setlocale(LC_ALL, "Portuguese");

  printf("------------             -----------");

  printf("\nDigite 1 para continuar, 2 para limpar a tela e 3 para sair...");
  scanf("%d", &i);

  for (int cont = 0; cont < 1; cont++) {
    if (i == 1) {
      printf("É 1 mesmo!\n");
    } else if (i == 2) {
      printf("É 2 mesmo!\n");
    } else if (i == 3) {
      printf("É 3 mesmo!\n");
    }
  }

  system("Pause");
}