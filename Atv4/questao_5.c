/* Uma transportadora utiliza caminh�es que suportam at� 10 toneladas de peso,
as caixas transportadas tem tamanho fixo e o caminh�o comporta no m�ximo 200
volumes, assim, esta transportadora precisa controlar a quantidade e o peso dos
volumes para acomodar nos caminh�es. Fa�a um programa que leia n caixas e seu
peso, ao final, o programa deve imprimir a quantidade de volumes, o peso total
dos volumes e o peso m�dio dos volumes. */

#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portugruse");

  int quantidadeCaixas = 0;
  float peso, pesoTotal, pesoMedio;

  printf("Saiba a quantidade, peso total e m�dio das caixas\n");
  printf("Insira o valor 0 para sair.\n");
  printf("------------------------------\n\n");

  for (int i = 1; i <= 100000; i++) {  // loop
    quantidadeCaixas = i;  // quantidade de caixas receber� o valor do contador "i"
    printf("%d. Insira o peso da caixa: ", quantidadeCaixas);
    scanf("%f", &peso);

    if (peso == 0) {  // condi��o para encerrramento do programa
      quantidadeCaixas--;   // se peso == 0, ent�o 0 n�o contar� como uma caixa
      // saidas/outputs do programa
      printf("\nQuantide de caixas: %d\n", quantidadeCaixas);
      printf("Peso total das caixas: %.2fKG\n", pesoTotal);
      printf("Peso medio das caixas: %.2fKG\n", pesoMedio);
      system("pause");
      exit(0);  // fun��o para encerramento do programa
    } else {    // se peso != o, peso ser� contabilizado
      pesoTotal = pesoTotal + peso;
      pesoMedio = (pesoTotal / quantidadeCaixas);
    }
  }
}