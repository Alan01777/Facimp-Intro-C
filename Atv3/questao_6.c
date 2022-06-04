/*Num frigor�fico existem 90 bois. Cada boi traz preso em seu pesco�o um cart�o contendo
seu n�mero de identifica��o e seu peso. Fa�a um programa que imprima a identifica��o
e o peso do boi mais gordo e do boi mais magro (supondo que n�o haja empates). */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numeroBoi, quantidadeBois = 0, idBoigordo, idBoimagro;
    float peso, pesoBoigordo = 0, pesoBoimagro = 0;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite 0 para sair\n");

    while (numeroBoi != 0)
    {
        printf("Insira a Identifica��o do boi (a partir de 1): ");
        scanf("%d", &numeroBoi);
        if (numeroBoi != 0)
        {
            printf("Insira o peso do boi(KG): ");
            scanf("%f", &peso);

            if (peso >= pesoBoigordo)
            {
                pesoBoigordo = peso;
                idBoigordo = numeroBoi;
            }

            if (peso < pesoBoimagro || numeroBoi == 1)
            {
                pesoBoimagro = peso;
                idBoimagro = numeroBoi;
            }
            quantidadeBois++;
        }
    }
    printf("\nO boi mais pesado foi o #%d e tinha %.2fKG\n", idBoigordo, pesoBoigordo);
    printf("O boi mais leve foi o #%d e tinha %.2fKG\n", idBoimagro, pesoBoimagro);
    printf("Foram contabilizados %d bois\n\n", quantidadeBois);

    system("pause");
}