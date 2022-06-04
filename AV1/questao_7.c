/*Uma empresa contrata um profissional em suporte em TI a R$ 80,00 por dia.
Faça um algoritmo que solicite o número de dias trabalhados pelo encanador e imprima
a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.
Envie o código fonte em formato .c (código fonte linguagem C). */

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

    printf("\n\nPagamento recebido (após imposto de renda): R$%.2f\n\n\n", pagamentoFinal);

    system("pause");
}