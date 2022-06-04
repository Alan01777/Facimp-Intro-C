#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "portuguese");
  system("chcp 1252>null");

  char escolha[6];

  printf("selecione: ");
  scanf("%s", escolha);

  while (strcmp(escolha, "hello") != 0) {
    printf("Denovo mané!\n");
    return main();
  }
  printf("CABO PORRA!!!\n");
  system("pause");
}