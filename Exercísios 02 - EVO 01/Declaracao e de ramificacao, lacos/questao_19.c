// Escreva um programa em c para verificar o número de Armstrong.

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n, soma = 0, resto, result;

    printf("Insira um numero de no minimo tres algarismos:");
    scanf("%d", &n);

    result = n;

    while (n>0)
    {
        resto = n % 10;
        soma = soma + (resto * resto * resto);
        n = n / 10;
    }

    if (result == soma)
    {
        printf("E um numero de Arsmtrong\n\n");
    }
    else
    {
        printf("Nao e um numero de Armstrong\n\n");
    }
    getch();

    return main();
}