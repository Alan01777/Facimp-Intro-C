#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char nome[64], endereco[64];
  int cep;
  system("chcp 1252>null");

  setlocale(LC_ALL, "Portuguese");
  system("chcp 1252>saida.txt");

  printf("Nome: ");
  fgets(nome, 64, stdin);

  printf("Endereço: ");
  fgets(endereco, 64, stdin);

  printf("CEP: ");
  scanf("%d", &cep);

  printf("\n\n");

  printf("Seu nome: %s", nome);
  printf("Seu endereço: %s", endereco);
  printf("Seu CEP: %d\n", cep);

  system("pause");
}