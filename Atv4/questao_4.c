/*Uma pousada estipulou o preço para a diária em R$30,00 e mais uma taxa de
serviços diários de: a) R$15,00, se o número de dias for menor que 10; b)
R$8,00, se o número de dias for maior ou igual a 10; Faça um programa que
imprima o nome, a conta e o número da conta de cada cliente e ao final o total
faturado pela pousada. O programa deverá ler novos clientes até que o usuário
digite 0 (zero) como número da conta. */

#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese");  // função para poder usar acentuação na função "printf"
  system("chcp 1252>null");  // função para o programa poder ler palavras com acentuação

  int numeroConta, quantidadeDias;
  int paga15, paga8;
  float faturamento, faturamentoTotal = 0;
  char nome[64];

  printf("Calcule o valor a ser pago por cliente\n");
  printf("Digite 0 para sair\n");
  printf("---------------------------\n\n");

  for (int i = 1; i <= 10000; i++) {
    printf("\nInsira o número da conta: ");
    scanf("%d", &numeroConta);

    // condição para saida do programa
    if (numeroConta == 0) {
      printf("Faturamento da pousada: R$ %.2f\n\n ", faturamentoTotal);
      system("pause");
      exit(0);  // função que realiza a saido do programa
    } else if (numeroConta != 0) {  // continuidade do programa caso numeroConta != 0
      printf("Insira o primeiro nome do cliente:");
      scanf("%s", &nome);  // leitura do nome completo do cliente
      printf("Quantos dias %s ficou? ", nome);
      scanf("%d", &quantidadeDias);
      printf("\n");

      // codições para os valores de pagamento do cliente
      if (quantidadeDias < 10) {
        paga15 = quantidadeDias;
        faturamento = (paga15 * 15) + (quantidadeDias * 30);
        printf("total a ser pagado: R$%.2f\n\n", faturamento);
      } else if (quantidadeDias >= 10) {
        paga8 = quantidadeDias;
        faturamento = (paga8 * 8) + (quantidadeDias * 30);
        printf("total a ser pagado: R$%.2f\n\n", faturamento);
      }
    }
    faturamentoTotal = faturamentoTotal + faturamento;
  }
}