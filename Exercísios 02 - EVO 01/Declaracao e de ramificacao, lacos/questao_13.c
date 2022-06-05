/*
13. Escreva um programa para imprimir conforme a tabela abaixo:

SE Por > 80 “A+”
Por >= 65 e por <=80 “A”
Por > =50 e por <=65 “B”
Por >= 42 e por <=50 “C”
Por < 42 "Falha"
*/


#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Insira um valor:");
    scanf("%d", &valor);

    if (valor > 80)
    {
        printf("A+");
    }
    if (valor >= 65 && valor <= 80)
    {
        printf("A");
    }
    if (valor >= 50 && valor <= 65)
    {
        printf("B");
    }
    if (valor >= 42 && valor <= 50)
    {
        printf("C");
    }
    if (valor < 42)
    {
        printf("FALHA");
    }
    getch();
    system("cls");
    return main();
}