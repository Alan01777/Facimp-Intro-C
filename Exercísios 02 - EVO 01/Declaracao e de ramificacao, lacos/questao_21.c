/*
20. Escreva um programa em c no seguinte padrão:
1
1 2
1 2 3
1 2 3 4
*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int num, i, c, rept;
    printf("Insira um valor"); // numero de colunas e linhas do padrão
    scanf("%d", &num);

    

    for (i = 1; i <= num; i++)
    {
        for (c = 1; c <= i; c++)
        {
            printf("%d ", c);
        }
        printf("\n");
    }
    getch();
}