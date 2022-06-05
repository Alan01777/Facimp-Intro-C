/* Uma transportadora utiliza caminhões que suportam até 10 toneladas de peso,
as caixas transportadas tem tamanho fixo e o caminhão comporta no máximo 200
volumes, assim, esta transportadora precisa controlar a quantidade e o peso dos
volumes para acomodar nos caminhões. Faça um programa que leia n caixas e seu
peso, ao final, o programa deve imprimir a quantidade de volumes, o peso total
dos volumes e o peso médio dos volumes. */

#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portugruse");

  int quantidadeCaixas = 0;
  float peso, pesoTotal, pesoMedio;

  printf("Saiba a quantidade, peso total e médio das caixas\n");
  printf("Insira o valor 0 para sair.\n");
  printf("------------------------------\n\n");

  for (int i = 1; i <= 100000; i++) {  // loop
    quantidadeCaixas = i;  // quantidade de caixas receberá o valor do contador "i"
    printf("%d. Insira o peso da caixa: ", quantidadeCaixas);
    scanf("%f", &peso);

    if (peso == 0) {  // condição para encerrramento do programa
      quantidadeCaixas--;   // se peso == 0, então 0 não contará como uma caixa
      // saidas/outputs do programa
      printf("\nQuantide de caixas: %d\n", quantidadeCaixas);
      printf("Peso total das caixas: %.2fKG\n", pesoTotal);
      printf("Peso medio das caixas: %.2fKG\n", pesoMedio);
      system("pause");
      exit(0);  // função para encerramento do programa
    } else {    // se peso != o, peso será contabilizado
      pesoTotal = pesoTotal + peso;
      pesoMedio = (pesoTotal / quantidadeCaixas);
    }
  }
}