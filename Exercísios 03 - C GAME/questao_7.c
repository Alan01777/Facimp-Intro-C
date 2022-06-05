/*Fa�a um programa que calcule quantos litros de gasolina s�o usados em uma viagem,
sabendo que um carro faz 10 km/litro. O usu�rio fornecer� a velocidade do carro e o
per�odo de tempo que viaja nesta velocidade para cada trecho do percurso.
Ent�o, usando as f�rmulas dist�ncia = tempo x velocidade e litros consumidos = dist�ncia / 10,
o programa computar�, para todos os valores n�o-negativos de velocidade, os litros de combust�vel
consumidos. O programa dever� imprimir a dist�ncia e o n�mero de litros de combust�vel gastos naquele trecho.
Dever� imprimir tamb�m o total de litros gastos na viagem. O programa encerra quando o usu�rio
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
            printf("Insira o per�odo de tempo em que ficou nesta velocidade (minutos): ");
            scanf("%f", &tempo);

            tempo = tempo / 60;

            distancia = tempo * velocidade;

            litros = distancia / 10;

            printf("\n\nA dist�ncia percorrida foi de %.2fKm", distancia);
            printf("\nA quantidade de litros de combust�vel consumidos foi de %.2fL", litros);
        }
    }
    system("pause");
}