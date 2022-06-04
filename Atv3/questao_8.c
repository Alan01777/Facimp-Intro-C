/*Faça um programa em C que permita entrar com a idade de várias pessoas e imprima:
a) total de pessoas com menos de 21 anos
b) total de pessoas com mais de 50 anos */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade, menos21 = 0, mais50 = 0, pessoas = 0;

    printf("Insira um valor negativo para encerrar o programa.\n\n");

    while (idade >= 0)
    {
        printf("Insira a idade: ");
        scanf("%d", &idade);

        if (idade < 21 && idade >= 0)
        {
            menos21++;
        }
        else
        {
            if (idade > 50)
            {
                mais50++;
            }
        }
        pessoas++;

        if (idade < 0)
        {
            pessoas--;
        }
    }
    printf("\n\nA quantidade de pessoas com menos de 21 anos: %d\n", menos21);
    printf("A quantidade de pessoas com mais de 50 anos: %d\n", mais50);
    printf("Foram lidas as idade de %d pessoas.\n\n", pessoas);

    system("pause");
}