// Converter Fahrenheit para Celsius

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float celsius, fahrenheit;
int i;

float main()
{
    printf("Converter fahrenheit para Celsius");

    do
    {
        printf("\n\ninsira a temperatura em fahrenheit..:");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5 / 9;

        printf("\nA temperatura em celsius e de...: %.1f", celsius); // Resultado será arredondado 
        printf("\n--------------------------------------------");

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