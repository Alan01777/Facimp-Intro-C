#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j;
  int matriz[10][10];

  for (i = 0; i < 10; i++) {
    printf("\n");
    for (j = 0; j < 10; j++) {
      if (i != j) {
        printf("\t");
      } else if (i == j) {
        printf("[%d][%d] ", i, j);
      }
    }
  }
  printf("\n\n");
  system("pause");
}