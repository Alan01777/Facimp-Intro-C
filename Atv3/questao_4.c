/*Uma pousada estipulou o preço para a diária em R$30,00 e mais uma taxa de serviços diários de:
a) R$15,00, se o número de dias for menor que 10;
b) R$8,00, se o número de dias for maior ou igual a 10;
Faça um programa que imprima o nome, a conta e o número da conta de cada cliente e
ao final o total faturado pela pousada. O programa deverá ler novos clientes até que o usuário
digite 0 (zero) como número da conta. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num_conta, qnt_dias;
    int paga15, paga8;
    float faturamento, faturamentoTotal = 0;
    char nome[64];

    printf("Digite 0 para sair\n\n");

    while (num_conta != 0)
    {
        printf("\nInsira o número da conta: ");
        scanf("%d", &num_conta);
        if (num_conta > 0)
        {
            printf("Insira o nome primeiro nome do cliente: ");
            scanf("%s", &nome);
            printf("Quantos dias %s ficou? ", nome);
            scanf("%d", &qnt_dias);
            printf("\n");

            if (qnt_dias < 10)
            {
                paga15 = qnt_dias;
                faturamento = (paga15 * 15) + (qnt_dias * 30);
                printf("total a ser pagado: R$%.2f\n\n", faturamento);
            }
            else
            {
                if (qnt_dias >= 10)
                {
                    paga8 = qnt_dias;
                    faturamento = (paga8 * 8) + (qnt_dias * 30);
                    printf("total a ser pagado: R$%.2f\n\n", faturamento);
                }
            }
            faturamentoTotal = faturamentoTotal + faturamento;
        }
    }
    printf("O faturamento total da pousada foi de R$%.2f\n\n", faturamentoTotal);
    system("pause");
}