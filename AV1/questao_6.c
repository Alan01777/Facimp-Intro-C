/*Escreva um algoritmo em C de ajuda para vendedores em Imperatriz.
A partir de um valor total lido, mostre:
a) o total a pagar com desconto de 10%;
b) o valor de cada parcela, no parcelamento de 3x sem juros;
c) a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
d) a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).
Envie o código fonte em formato .c (código fonte linguagem C). */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float pagamentoTotal, parcela, comissaoParcela, comissaVista, desconto;

    printf("Valor bruto do pagamento(R$): ");
    scanf("%f", &pagamentoTotal);

    desconto = pagamentoTotal - (0.1 * pagamentoTotal);
    parcela = pagamentoTotal / 3;
    comissaVista = desconto * 0.05;
    comissaoParcela = pagamentoTotal * 0.05;

    printf("\nTotal a pagar com desconto de 10%%: R$%.2f\n", desconto);
    printf("Valor de cada parcela, no parcelamento de 3x sem juros: R$%.2f\n", parcela);
    printf("A comissão do vendedor, no caso da venda ser a vista: R$%.2f\n", comissaVista);
    printf("A comissão do vendedor, no caso da venda ser parcelada: R$%.2f\n\n\n", comissaoParcela);

    system("pause");
}