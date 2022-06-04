/*
24. Escreva um programa no seguinte padrão:
A
A B
A B C
*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int num, i, c, cont=65; // cont=65, onde 65 é o valor decimal de A na tabela ASCII
    printf("Insira um valor"); // numero de colunas e linhas do padrão
    scanf("%d", &num);

    

    for (i = 0; i <= num; i++)
    {
        for (c = 0; c <= i; c++)
        {
            printf("%c ", cont+c); 
            
        }
        printf("\n");
    }
    getch();
}