// Calcular a hipotenusa

#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

#include <math.h>

float cateto_op, cateto_adj, hipotenusa;
int i;

float main() {
  printf("Calcule a hipotenusa"); // Titulo
  printf("\n_________________________________\n");

  do {
    printf("\n\nInsira o valor do cateto adjescente..: ");
    scanf("%f", & cateto_adj);

    printf("insira o valor do cateto oposto...: ");
    scanf("%f", & cateto_op);

    hipotenusa = sqrt(pow(cateto_adj, 2) + pow(cateto_op, 2)); // Formula a ser utilizada

    printf("\n\no valor da hipotenusa e...: %.2f", hipotenusa);

    printf("\nDigite 1 para continuar, 2 para limpar a tela e 3 para sair ");
    scanf("%d", & i);
  } while (i == 1);

  if (i == 2) {
    system("cls");
    return main();
  } else if (i == 3) {
    printf("\nFIM!");
    getch();
  } else if (i != 1, 2, 3) {
    printf("\nInsira um valor valido!\n\n");
    getch();
    return main();

  }
}