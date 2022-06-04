// 11. Escreva um programa para encontrar o maior entre três números.

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float main() {
  // escreva um programa para encontrar o maior entre três números.
  int a, b, c, menor, maior;

  printf("Digite um valor:");
  scanf("%d", &a);

  printf("Digite um valor:");
  scanf("%d", &b);

  printf("Digite um valor:");
  scanf("%d", &c);

  // Maior
  if (a > b) {
    if (a > c) {
      maior = a;
    } else {
      maior = c;
    }
  } else {
    maior = b;
  }

  // Menor
  if (a < b) {
    if (a < c) {
      menor = a;
    } else {
      menor = c;
    }
  } else {
    menor = b;
  }

  printf("Maior:%d\nmenor:%d\n\n\n", maior, menor);
  getch();
  return main();
}