/*Existe uma import�ncia de R$ 940.040,00 ser� dividida entre tr�s ganhadores de um concurso.
Sendo que da quantia total:
a) O primeiro ganhador receber� 46%;
b) O segundo receber� 32%;
c) O terceiro receber� o restante;
Fa�a um algoritmo em C que calcule e imprima a quantia ganha por cada um dos ganhadores.
Envie o c�digo fonte em formato .c (c�digo fonte linguagem C). */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float premio, primeiro, segundo, terceiro;

    premio = 940040.00;

    printf("O pr�mio � de R$940.040,00\n\n");

    primeiro = premio * 0.46;
    segundo = premio * 0.32;
    terceiro = premio * 0.22;

    printf("O primeiro ganhou: R$%.2f\n", primeiro);
    printf("O segundo ganhou: R$%.2f\n", segundo);
    printf("O terceiro ganhou: R$%.2f\n\n\n", terceiro);

    system("pause");
}
