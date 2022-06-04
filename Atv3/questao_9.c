/*Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores
de consumo. Para cada consumidor, são digitados os seguintes dados:
a) número do consumidor
b) quantidade de kWh consumidos durante o mês
c) tipo (código) do consumidor:
1-residencial, preço em reais por kWh = 0,3;
2-comercial, preço em reais por kWh = 0,5;
3-industrial, preço em reais por kWh = 0,7.
Os dados devem ser lidos até que seja encontrado o consumidor com número 0(zero).
O programa deve calcular e imprimir:
a) O custo total para cada consumidor
b) O total de consumo para os três tipos de consumidor
c) A média de consumo dos tipos 1 e 2 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numConsumidor, codConsumidor;
    float consumo, custoConsumidor, somaConsumo = 0;
    float consumoTipo1 = 0, consumoTipo2 = 0, consumoTipo3 = 0, consumoTotal = 0;
    float tipo1 = 0, tipo2 = 0, mediaTipo1, mediaTipo2;

    while (numConsumidor != 0)
    {
        printf("Número do consumidor: ");
        scanf("%d", &numConsumidor);
        if (numConsumidor != 0)
        {
            printf("Consumo (KW/H): ");
            scanf("%f", &consumo);
            printf("Tipo de consumidor:");
            printf("1-residencial\t2-comercial\t3-industrial");
            scanf("%d", &codConsumidor);

            switch (codConsumidor)
            {
            case 1:
                custoConsumidor = consumo * 0.3;
                consumoTipo1 = consumoTipo1 + consumo;
                tipo1++;
                break;
            case 2:
                custoConsumidor = consumo * 0.5;
                consumoTipo2 = consumoTipo2 + consumo;
                tipo2++;
                break;
            case 3:
                custoConsumidor = consumo * 0.7;
                consumoTipo3 = consumoTipo3 + consumo;
                break;
            default:
                printf("Valor inválido!\n");
                system("pause");
                exit(0);
            }

            mediaTipo1 = consumoTipo1 / tipo1;
            mediaTipo2 = consumoTipo2 / tipo2;

            printf("Custo: %.2f\n\n", custoConsumidor);
        }
    }
    printf("\n\nConsumo residencial foi de: %.2fKW/H", consumoTipo1);
    printf("\nConsumo comercial foi de : %.2fKW/H", consumoTipo2);
    printf("\nConsumo industrial foi de: %.2fHW/H", consumoTipo3);

    printf("\n\nA media de consumo residencial foi de: %.2fKW/H", mediaTipo1);
     printf("\nnA media de consumo comercial foi de: %.2fKW/H\n\n", mediaTipo2);


    system("pause");
}
