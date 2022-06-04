/*Faça um programa que calcule quantos litros de gasolina são usados em uma
viagem, sabendo que um carro faz 10 km/litro. O usuário fornecerá a velocidade
do carro e o período de tempo que viaja nesta velocidade para cada trecho do
percurso. Então, usando as fórmulas distância = tempo x velocidade e litros
consumidos = distância / 10, o programa computará, para todos os valores
não-negativos de velocidade, os litros de combustível consumidos. O programa
deverá imprimir a distância e o número de litros de combustível gastos naquele
trecho. Deverá imprimir também o total de litros gastos na viagem. O programa
encerra quando o usuário informar um valor negativo de velocidade. */

#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  float velocidade, tempo, litros, distancia;

  setlocale(LC_ALL, "Portuguese");

  printf("Saiba seu consumo de combustível\n");
  printf("Insira um valor negativo para sair\n");
  printf("----------------------------------\n\n");

  for (int i = 1; i <= 100000; i++) {  // loop
    printf("\nVelocidade (kM/H): ");
    scanf("%f", &velocidade);
    
    if (velocidade < 0) {  // condição para encerramento do programa
      printf("FIM!\n\n");
      system("pause");
      exit(0);             // função para encerramento do programa
    } else {
      printf("Período de tempo em que ficou nesta velocidade(minutos): ");
      scanf("%f", &tempo);

      // formulas
      tempo = tempo / 60;
      distancia = tempo * velocidade;
      litros = distancia / 10;

      // saidas/outputs do programa
      printf("\nDistância percorrida: %.2fKm", distancia);
      printf("\nLlitros de combustível consumidos: %.2fL", litros);
      printf("\n-----------------------------------------------\n");
    }
  }
}