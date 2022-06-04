/*Fa�a um programa que calcule quantos litros de gasolina s�o usados em uma
viagem, sabendo que um carro faz 10 km/litro. O usu�rio fornecer� a velocidade
do carro e o per�odo de tempo que viaja nesta velocidade para cada trecho do
percurso. Ent�o, usando as f�rmulas dist�ncia = tempo x velocidade e litros
consumidos = dist�ncia / 10, o programa computar�, para todos os valores
n�o-negativos de velocidade, os litros de combust�vel consumidos. O programa
dever� imprimir a dist�ncia e o n�mero de litros de combust�vel gastos naquele
trecho. Dever� imprimir tamb�m o total de litros gastos na viagem. O programa
encerra quando o usu�rio informar um valor negativo de velocidade. */

#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  float velocidade, tempo, litros, distancia;

  setlocale(LC_ALL, "Portuguese");

  printf("Saiba seu consumo de combust�vel\n");
  printf("Insira um valor negativo para sair\n");
  printf("----------------------------------\n\n");

  for (int i = 1; i <= 100000; i++) {  // loop
    printf("\nVelocidade (kM/H): ");
    scanf("%f", &velocidade);
    
    if (velocidade < 0) {  // condi��o para encerramento do programa
      printf("FIM!\n\n");
      system("pause");
      exit(0);             // fun��o para encerramento do programa
    } else {
      printf("Per�odo de tempo em que ficou nesta velocidade(minutos): ");
      scanf("%f", &tempo);

      // formulas
      tempo = tempo / 60;
      distancia = tempo * velocidade;
      litros = distancia / 10;

      // saidas/outputs do programa
      printf("\nDist�ncia percorrida: %.2fKm", distancia);
      printf("\nLlitros de combust�vel consumidos: %.2fL", litros);
      printf("\n-----------------------------------------------\n");
    }
  }
}