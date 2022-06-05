/* Uma transportadora utiliza caminhões que suportam até 10 toneladas de peso,
as caixas transportadas tem tamanho fixo e o caminhão comporta no máximo 200 volumes,
assim, esta transportadora precisa controlar a quantidade e o peso dos volumes para
acomodar nos caminhões. Faça um programa que leia n caixas e seu peso, ao final,
o programa deve imprimir a quantidade de volumes, o peso total dos volumes
e o peso médio dos volumes. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portugruse");

    int qnt_caixas = 0;
    float peso, peso_total, peso_medio;

    printf("Pressione 0 para sair.\n\n");

    while (peso != 0)
    {
        qnt_caixas++;
        printf("%d. Insira o peso da caixa: ", qnt_caixas);
        scanf("%f", &peso);
        if (peso == 0)
        {
            qnt_caixas--;
        }

        peso_total = peso_total + peso;
    }

    peso_medio = (peso_total / qnt_caixas);

    printf("\nQuantide de caixas: %d\n", qnt_caixas);
    printf("Peso total das caixas: %.2f\n", peso_total);
    printf("Peso medio das caixas: %.2f\n", peso_medio);

    system("pause");
}