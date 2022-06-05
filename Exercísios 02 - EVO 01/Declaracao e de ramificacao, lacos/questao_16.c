//Escreva um programa para encontrar a série de Fibonacci até n vezes.

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int valor, var1 = 0, var2 = 1, num;

    printf("Insira um valor maximo aproximado para a serie de Fibonacci:");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Valor invalido!");
        getch();
        system("cls");
        return main();
    }

   do
    {
        valor = var1 + var2;

        printf("%d\t", valor);
        var1 = var2;
        var2 = valor;
    }  while (valor < num);
    getch();
}