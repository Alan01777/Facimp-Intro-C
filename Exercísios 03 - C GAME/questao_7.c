/*Faça um programa que calcule quantos litros de gasolina são usados em uma viagem,
sabendo que um carro faz 10 km/litro. O usuário fornecerá a velocidade do carro e o
período de tempo que viaja nesta velocidade para cada trecho do percurso.
Então, usando as fórmulas distância = tempo x velocidade e litros consumidos = distância / 10,
o programa computará, para todos os valores não-negativos de velocidade, os litros de combustível
consumidos. O programa deverá imprimir a distância e o número de litros de combustível gastos naquele trecho.
Deverá imprimir também o total de litros gastos na viagem. O programa encerra quando o usuário
informar um valor negativo de velocidade. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um valor negativo para sair\n");

    float velocidade, tempo, litros, distancia;

    while (velocidade >= 0)
    {
        printf("\n\nInsira a velocidade (kM/H): ");
        scanf("%f", &velocidade);
        if (velocidade >= 0)
        {
            printf("Insira o período de tempo em que ficou nesta velocidade (minutos): ");
            scanf("%f", &tempo);

            tempo = tempo / 60;

            distancia = tempo * velocidade;

            litros = distancia / 10;

            printf("\n\nA distância percorrida foi de %.2fKm", distancia);
            printf("\nA quantidade de litros de combustível consumidos foi de %.2fL", litros);
        }
    }
    system("pause");
}