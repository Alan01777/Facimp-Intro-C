// Fa�a um programa em C que imprima todos os n�meros de 1 at� 100. *

#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
 
  for (int i = 1; i <= 100; i++) {
    printf("%d ", i);
  }
  printf("\n");

  system("pause");
}
