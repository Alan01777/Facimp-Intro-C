#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int cont1, cont2, cont3, cont4, num;

  printf("Insira um número:");
  scanf("%d", &num);

  for (cont1 = 1; cont1 <= num; cont1++) {
    for (cont2 = 1; cont2 <= cont1; cont2++) {
      printf("*");
    }
    printf("\n");
  }

  for (cont3 = num; cont3 >= 1; cont3--) {
    for (cont4 = 1; cont4 <= cont3; cont4++) {
      printf("*");
    }
    printf("\n");
  }

  system("pause");
}