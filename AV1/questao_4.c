/*Escreva um algoritmo em C que verifique a validade de uma senha fornecida pelo usu�rio, 
sendo que a senha v�lida � o n�mero 1234. Devem ser impressas as seguintes mensagens: 
ACESSO PERMITIDO caso a senha seja v�lida. 
ACESSO NEGADO caso a senha seja inv�lida. 
Envie o c�digo fonte em formato .c (c�digo fonte linguagem C). */


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