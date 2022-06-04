/*Num frigorífico existem 90 bois. Cada boi traz preso em seu pescoço um cartão
contendo seu número de identificação e seu peso. Faça um programa que imprima a
identificação e o peso do boi mais gordo e do boi mais magro (supondo que não
haja empates). */

#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int numeroBoi, quantidadeBois = 0, idBoigordo, idBoimagro;
  float peso, pesoBoigordo = 0, pesoBoimagro = 0;

  setlocale(LC_ALL, "Portuguese");

  printf("Saiba qual o boi mais pesado e o mais magro\n");
  printf("Digite 0 para sair\n");
  printf("-------------------------------\n\n");

  for (int i = 0; i <= 10000; i++) {  // loop
    printf("Insira a Identificação do boi (a partir de 1): ");
    scanf("%d", &numeroBoi);
    if (numeroBoi == 0) {  // condição para encerramento do programa
      // saidas/outputs do programa
      printf("\nO boi mais pesado foi o #%d e tinha %.2fKG\n", idBoigordo, pesoBoigordo);
      printf("O boi mais leve foi o #%d e tinha %.2fKG\n", idBoimagro, pesoBoimagro);
      printf("Foram contabilizados %d bois\n\n", quantidadeBois);
      system("pause");
      exit(0);  // função para o encerramento do programa
    } else if (numeroBoi != 0) {
      printf("Insira o peso do boi(KG): ");
      scanf("%f", &peso);

      // condições para identificação do peso do boi mais pesado/leve
      if (peso >= pesoBoigordo) {
        pesoBoigordo = peso;
        idBoigordo = numeroBoi;
      }
      if (peso < pesoBoimagro || numeroBoi == 1) {
        pesoBoimagro = peso;
        idBoimagro = numeroBoi;
      }
      quantidadeBois++;
    }
  }
}