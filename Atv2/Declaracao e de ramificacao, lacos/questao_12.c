// Escreva um programa em C para ler qualquer número de mês em inteiro e
// exibir o nome do mês em a texto.

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n_mes;

  printf("Insira o numero do mes:");
  scanf("%d", &n_mes);

  if (n_mes == 1) {
    printf("Janeiro");
  } else if (n_mes == 2) {
    printf("Fevereiro");
  } else if (n_mes == 3) {
    printf("Marco");
  } else if (n_mes == 4) {
    printf("Abril");
  } else if (n_mes == 5) {
    printf("Maio");
  } else if (n_mes == 6) {
    printf("Junho");
  } else if (n_mes == 7) {
    printf("Julho");
  } else if (n_mes == 8) {
    printf("Agosto");
  } else if (n_mes == 9) {
    printf("Setembro");
  } else if (n_mes == 10) {
    printf("Outubro");
  } else if (n_mes == 11) {
    printf("Novembro");
  } else if (n_mes == 12) {
    printf("Dezembro");
  }
  getch();
  system("cls");
  return main();
}