/*
20. Escreva um programa em c no seguinte padrão:
*
* *
* * *
* * * *
*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int num, i, c;
    printf("Insira um valor"); // numero de colunas e linhas do padrão
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (c = 1; c <= i; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}