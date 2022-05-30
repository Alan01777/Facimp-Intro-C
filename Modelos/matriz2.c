#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j;
  int matriz[10][10];
  int maior = 0, menor = 100, colunaMaior, colunaMenor, linhaMaior, linhaMenor;

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      matriz[i][j] = rand() % 100;
      
    }
  }
  for (i = 0; i < 10; i++) {
      printf("\n");
    for (j = 0; j < 10; j++) {
        printf("[%d]\t", matriz[i][j]);
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
        colunaMaior = i;
        linhaMaior = j;
      } else if (matriz[i][j] < menor) {
        menor = matriz[i][j];
        colunaMenor = i;
        linhaMenor = j;
      }
    }
  }
  printf("\n\nMenor valor: %d\n", menor);
  printf("localizacao menor valor: [%d][%d]\n",colunaMenor, linhaMenor);
  printf("Maior valor: %d\n", maior);
  printf("localizacao menor valor: [%d][%d]\n",colunaMaior, linhaMaior);
  printf("\n\n");
  system("pause");
}