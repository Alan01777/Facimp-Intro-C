//18. Escreva um programa para converter decimal em binário.


#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num;
    int binario[10];
    int i;

    setlocale(LC_ALL, "Portuguese"); // localiza??o para PT-BR
    printf("Digite o n?mero de base decimal para ser convertido para bin?rio: ");
    scanf("%d", &num);

    for (i = 7; i >= 0; i--)
    {
        if (num % 2 == 0)
            binario[i] = 0;
        else
            binario[i] = 1;
        num = num / 2;
    }

    for (i = 0; i < 8; i++)
        printf("%d", binario[i]);

    printf("\n\n");
    system("pause");
}