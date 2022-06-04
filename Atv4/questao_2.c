// Construa um programa em C que leia v�rios n�meros e informe quantos n�meros
// entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o
// algoritmo dever� cessar sua execu��o. *

#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int num, numerosEntre100e200 = 0;

  printf("Descubra se um valor est� entre 100 e 200.\n");
  printf("Digite 0 para encerrar o programa\n");
  printf("-----------------------------------------------\n");

  for (int i = 1; i < 10000; i++) { // loop
    printf("Insira um valor: ");
    scanf("%d", &num);
    if (num == 0) {  // se num == 0, o programa se encerra
      // saidas/outputs do programa
      printf("\n\nFIM da contagem!");
      printf("\nForam lidos %d valores entre 100 e 200 ao todo.\n\n", numerosEntre100e200);
      system("pause");
      exit(0);  // fun��o para encerramento do programa

      // condi��es para o incremento da variavel numerosEntre100e200
    } else if (num >= 100 && num <= 200) {
      numerosEntre100e200++;
      printf("%d n�meros entre 100 e 200 at� agora.\n", numerosEntre100e200);
    } else {
      printf("%d n�meros entre 100 e 200 at� agora.\n", numerosEntre100e200);
    }
  }
}