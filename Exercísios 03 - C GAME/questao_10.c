/*Uma pesquisa de opini�o realizada em S�o Paulo, teve as seguintes perguntas:
a) Qual o seu time de cora��o? 1-Santos; 2-Palmeiras; 3-S�o Paulo; 4-Corinthians; 5-Outros
b) Onde voc� mora? 1-Capital; 2-Interior ; 3-Outros
c) Qual o seu sal�rio?
Fa�a um programa que imprima:
A) o n�mero de torcedores por clube;
B) a m�dia salarial dos torcedores do Palmeiras;
C) o n�mero de pessoas moradoras de S�o Paulo, torcedores de outros clubes;
D) o n�mero de pessoas do interior torcedoras do S�o Paulo. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int torceSantos = 0, torceSaoPaulo = 0, torcePalmeiras = 0, torceCorinthians = 0, torceOutros = 0, qualTime;
    int capital = 0, interior = 0, outros = 0, deOnde, capitalTorceOutros = 0, interiorTorceSaoPaulo = 0;
    float salario, mediaSalarialPalmeiras = 0, somaSalarioPalmeiras = 0;

    printf("Insira 0 abaixo para encerrar o programa\n\n");
    while (qualTime != 0)
    {
        printf("Para qual time de S�o Paulo voc� torce?\n");
        printf("1-Santos\t2-Palmeiras\t3-S�o Paulo\t4-Corinthians\t5-Outros\n");
        scanf("%d", &qualTime);
        if (qualTime != 0)
        {
            switch (qualTime)
            {
            case 1:
                torceSantos++;
                break;
            case 2:
                torcePalmeiras++;
                printf("\nQual o seu Sal�rio?");
                scanf("%f", &salario);
                printf("\n");
                somaSalarioPalmeiras = somaSalarioPalmeiras + salario;
                break;
            case 3:
                torceSaoPaulo++;
                break;
            case 4:
                torceCorinthians++;
                break;
            case 5:
                torceOutros++;
                break;
            default:
                printf("ERRO!");
                system("pause");
                exit(0);
                break;
            }
            printf("De onde voc� �?");
            printf("\n1-Capital\t2-Interior\t3-Outros\n");
            scanf("%d", &deOnde);
            printf("\n");

            switch (deOnde)
            {
            case 1:
                capital++;
                break;
            case 2:
                interior++;
                break;
            case 3:
                outros++;
                break;
            default:
                printf("ERRO!");
            }
            if (deOnde == 1 && qualTime == 5)
            {
                capitalTorceOutros++;
            }
            if (deOnde == 2 && qualTime == 3)
            {
                interiorTorceSaoPaulo++;
            }
        }
        mediaSalarialPalmeiras = somaSalarioPalmeiras / torcePalmeiras;
    }
    printf("\n\n\aN�mero de pessoas que torcem para o santos: %d\n", torceSantos);
    printf("N�mero de pessoas que torcem para o S�o Paulo: %d\n", torceSaoPaulo);
    printf("N�mero de pessoas que torcem para o Corinthians: %d\n", torceCorinthians);
    printf("N�mero de pessoas que torcem para o Palmeiras: %d\n", torcePalmeiras);
    printf("N�mero de pessoas que torcem para outros times: %d\n\n", torceOutros);
    printf("N�mero de pessoas moradoras de S�o Paulo, torcedores de outros clubes: %d\n", capitalTorceOutros);
    printf("N�mero de pessoas do interior torcedoras do S�o Paulo: %d\n\n", interiorTorceSaoPaulo);

    printf("Media salarial dos torcedores do palmeiras: R$%.2f\n\n", mediaSalarialPalmeiras);

    system("pause");
}