/*1. Escreva um programa para declarar todos os tipos de dados como integer,
double, float, long int e valor de impressão no formato especificado.
*/


#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    char n;
    int integer;
    double dub;
    float flo;
    long li;

    printf("i=integer\nd=double\nf=float\nl=long int");
    printf("\nSelecione um tipo de dado:");
    scanf("%c", &n);

    switch (n)
    {
    case 'i':
        printf("Insira um valor:");
        scanf("%i", &integer);

        printf("Valor em integer: %i\n", integer);
        break;
    case 'd':
        printf("Insira um valor:");
        scanf("%lf", &dub);

        printf("Valor em double: %lf\n", dub);
        break;
    case 'f':
        printf("Insira um valor:");
        scanf("%f", &flo);

        printf("Valor em float: %f\n", flo);
        break;
    case 'l':
        printf("Insira um valor:");
        scanf("%ld", &li);

        printf("Valor em long int: %ld\n", li);
        break;
    default:
        putchar('*');
        break;
    }
    getch();
    system("cls");
    return main();
}