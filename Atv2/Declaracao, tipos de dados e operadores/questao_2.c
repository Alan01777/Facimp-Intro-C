// 2. Escreva um programa para calcular os juros simples (ler do usuário qual a quantidade de juros).

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float juros, cap_inicial, temp_aplicacao, taxa, taxa_porcentegem, montante;
    int i;

    printf("insira a taxa(%%):");
    scanf("%f", &taxa);
    printf("Insira o capital inicial:");
    scanf("%f", &cap_inicial);
    printf("Insira o tempo de aplicacao (meses):");
    scanf("%f", &temp_aplicacao);

    taxa_porcentegem = (taxa / 100);

    juros = cap_inicial * taxa_porcentegem * temp_aplicacao;

    montante = juros + cap_inicial;

    printf("\nO juros que voce pagará será R$%.2f\n", juros);
    printf("O montante será de R$%.2f\n\n", montante);

    system("pause");
    return main("");
}