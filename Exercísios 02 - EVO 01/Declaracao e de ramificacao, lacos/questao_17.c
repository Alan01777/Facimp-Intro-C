// Escreva um programa em c para verificar se o n√£o √© primo ou n√£o.

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, i, contador=0;

    printf("\n\nInsira um valor:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            contador++;
        }
    }
    if (contador == 2)
    {
        printf("%d … um n˙mero primo", num);
    }
    else
    {
        printf("%d N„o È um n˙mero primo", num);
    }

    getch();
    return main();
}