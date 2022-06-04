/*Existe uma importância de R$ 940.040,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
a) O primeiro ganhador receberá 46%;
b) O segundo receberá 32%;
c) O terceiro receberá o restante;
Faça um algoritmo em C que calcule e imprima a quantia ganha por cada um dos ganhadores.
Envie o código fonte em formato .c (código fonte linguagem C). */

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

    printf("O prêmio é de R$940.040,00\n\n");

    primeiro = premio * 0.46;
    segundo = premio * 0.32;
    terceiro = premio * 0.22;

    printf("O primeiro ganhou: R$%.2f\n", primeiro);
    printf("O segundo ganhou: R$%.2f\n", segundo);
    printf("O terceiro ganhou: R$%.2f\n\n\n", terceiro);

    system("pause");
}
