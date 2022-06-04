//Escreva um programa para encontrar números pares e ímpares usando a instrução if else.

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float main()
{
    // Descubra se um numero é impar ou par


    int num;

    printf("\nIsira uma numero:");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("O numero e par\n");
    }
    else
    {

        printf("O numero e impar\n");
    }

    return main();
}