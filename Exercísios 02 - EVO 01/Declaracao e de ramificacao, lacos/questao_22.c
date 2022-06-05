/*
22. Escreva um programa em c para o seguinte padrão:
1
2 3
4 5 6
7 8 9 10
*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int num, i, c, soma;
    printf("Insira um valor"); // numero de colunas e linhas do padrão
    scanf("%d", &num);

    soma=1; // continuação na proxima linha

    for (i = 1; i <= num; i++)
    {
        for (c = 1; c <= i; c++)
        {
            printf("%d ", soma++);
        }
        printf("\n");
    }
    getch();
}