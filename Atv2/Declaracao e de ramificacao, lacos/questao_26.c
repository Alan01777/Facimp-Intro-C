/*26. Escreva um programa para diferenciar variáveis ​​locais e globais*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int gglobal = 10;

int main()
{
    char cha;

    printf("a=Variaveis globais\nb= Variaveis locais\nSelecione:");
    scanf("%c", &cha);

    switch (cha)
    {
    case 'a':
        printf("%.3d", gglobal);
        break;
    case 'b':
        varlocal();
        break;

    default:
        printf("*");
        break;
    }
    getch();
}

int varlocal()
{
    int local = 100;
    local = local * 10;
    printf("%d", local);
}