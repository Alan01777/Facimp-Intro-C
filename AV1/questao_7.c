/*Uma empresa contrata um profissional em suporte em TI a R$ 80,00 por dia.
Fa�a um algoritmo que solicite o n�mero de dias trabalhados pelo encanador e imprima
a quantia l�quida que dever� ser paga, sabendo-se que s�o descontados 8% para imposto de renda.
Envie o c�digo fonte em formato .c (c�digo fonte linguagem C). */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int diasTrabalhados;
    float pagamentoBruto, pagamentoFinal;


    printf("Valor por dia trabalhado: R$80,00\n\n");
    printf("Dias foram trabalhados: ");
    scanf("%d", &diasTrabalhados);

    pagamentoBruto = diasTrabalhados * 80;
    pagamentoFinal = pagamentoBruto - (pagamentoBruto * 0.08);

    printf("\n\nPagamento recebido (ap�s imposto de renda): R$%.2f\n\n\n", pagamentoFinal);

    system("pause");
}