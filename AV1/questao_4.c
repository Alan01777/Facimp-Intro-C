/*Escreva um algoritmo em C que verifique a validade de uma senha fornecida pelo usuário, 
sendo que a senha válida é o número 1234. Devem ser impressas as seguintes mensagens: 
ACESSO PERMITIDO caso a senha seja válida. 
ACESSO NEGADO caso a senha seja inválida. 
Envie o código fonte em formato .c (código fonte linguagem C). */


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int senha;


    printf("Insira a senha: ");
    scanf("%d", &senha);


    if (senha==1234)
    {
        printf("\nACESSO PERMITIDO\n\n");
    }
    else
    {
        printf("\nACESSO NEGADO\n\n");
        return main();
    }

    system("pause");
}