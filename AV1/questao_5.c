/*Implemente um algoritmo que calcule o ano de nascimento de uma pessoa a partir de sua idade e
do ano atual. Envie o código fonte em formato .c (código fonte linguagem C). */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade, anoNascimento, anoAtual;

    printf("Insira o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    anoNascimento = anoAtual - idade;

    printf("Seu ano de nascimento é aproximadamente: %d\n\n", anoNascimento);


    system("pause");
}