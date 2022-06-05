// Informe o valor do caractere em Hexadecimal, Octal e decimal de acordo com a tebela ASCII

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int i, caractere;

char main()
{
    printf("Converta seu caracatere para octal, hexadecimal ou decimal");

    do
    {
        printf("\n\nInsira o seu caractere...:");
        scanf("%d", &caractere); // Use "%s" e nao "%c" para evitar bugs na estrutura de repetição
        printf("\nCaratere em decimal..: %d", caractere);
        printf("\nCaratere em hexadecimal..: 0xx%x", caractere);
        printf("\nCaratere em octal..: 0%o", caractere);
        printf("\n--------------------");

        printf("\nDigite 1 para continuar, 2 para limpar a tela e 3 para sair ");
        scanf("%d", &i);
    } while (i == 1);

    if (i == 2)
    {
        system("cls");
        return main();
    }
    else
    {
        if (i == 3)
        {

            printf("\nFIM!");
            getch();
        }
        else
        {
            if (i != 1, 2, 3)
            {
                printf("\nInsira um valor valido!\n\n");
                getch();
                return main();
            }
        }
    }
}
