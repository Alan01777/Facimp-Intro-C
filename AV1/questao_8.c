/*Escreva um algoritmo em C para ler o ano de nascimento de uma pessoa e escrever
uma mensagem que diga se ela poder� ou n�o votar este ano
(n�o � necess�rio considerar o m�s em que ela nasceu).
Envie o c�digo fonte em formato .c (c�digo fonte linguagem C). */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int anoAtual, anoNascimento, idade;

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    printf("Ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    if (idade < 16)
    {
        printf("\nN�o pode votar!\n\n");
    }

    if (idade >= 16)
    {
        printf("\nPode votar!\n\n");
    }

    system("pause");
}