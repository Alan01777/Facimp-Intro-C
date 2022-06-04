/*Faça um algoritmo em C que leia um valor inteiro em segundos, e imprima-o em horas,
minutos e segundos. Envie o código fonte em formato .c (código fonte linguagem C). */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int horas, minutos, segundos, restoDivisao;

    printf("Insira um valor em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    restoDivisao = segundos % 3600;
    minutos = restoDivisao / 60;
    segundos = restoDivisao % 60;

    printf("\n\n%dh:%dm:%ds\n\n\n", horas, minutos, segundos);

    system("pause");
}