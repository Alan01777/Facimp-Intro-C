/*Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1-feminino 2-masculino)
de uma pessoa, construa um programa que calcule e imprima seu peso ideal, utilizando as
seguintes Fórmulas:
a) para homens: (72.7 * Altura) - 58
b) para mulheres: (62.1 * Altura) - 44.7.
Envie o código fonte em formato .c (código fonte linguagem C). */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int sexo;
    float altura, pesoIdeal;

    printf("Qual o seu sexo?\nMasculino=1\nFeminino=2\n");
    scanf("%d", &sexo);

    switch (sexo)
    {
    case 1:
        printf("Insira sua altura(Metros e com virgula):");
        scanf("%f", &altura);
        pesoIdeal = (72.7 * altura) - 58;
        break;
    case 2:
        printf("Insira sua altura(Metros e com virgula):");
        scanf("%f", &altura);
        pesoIdeal = (62.1 * altura) - 44.7;
        break;
    default:
        printf("\n\nERRO\n\n");
        break;
    }

    printf("\n\nO peso ideal é: %.2fKG\n\n", pesoIdeal);

    system("pause");
}