//9. Escreva um programa para verificar se o ano digitado é bissexto ou não (if ...else).



#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

float main()
{
    setlocale(LC_ALL,"Portuguese");
    int ano;
    // Descubra se um ano e bissexto

    printf("\nInsira uma ano:");
    scanf("%d", &ano);

    if (ano % 4 == 0)
    {
        printf("O ano � bissexto\n\n");
    }
    else
    {

        printf("O ano n�o � bissexto\n\n");
    }

    getch();
    return main();
}