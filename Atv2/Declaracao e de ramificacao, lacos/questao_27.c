// Escreva um programa em c para mostrar o uso da variável estática.


#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int gglobal = 10;

int main()
{
    char cha;

    printf("\na=Variaveis globais\tb= Variaveis locais\n\nSelecione:");
    scanf("%c", &cha);

    switch (cha)
    {
    case 'a':
        printf("%.d", gglobal);
        break;
    case 'b':
        varlocal();
        varlocal();
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
    local = local * 2;

    static int estatica= 100;
    estatica = estatica * 2;
    printf("Local: %d\n", local);
    printf("Estatica: %d\n", estatica);
}