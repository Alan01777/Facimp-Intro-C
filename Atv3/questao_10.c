/*Uma pesquisa de opinião realizada em São Paulo, teve as seguintes perguntas:
a) Qual o seu time de coração? 1-Santos; 2-Palmeiras; 3-São Paulo; 4-Corinthians; 5-Outros
b) Onde você mora? 1-Capital; 2-Interior ; 3-Outros
c) Qual o seu salário?
Faça um programa que imprima:
A) o número de torcedores por clube;
B) a média salarial dos torcedores do Palmeiras;
C) o número de pessoas moradoras de São Paulo, torcedores de outros clubes;
D) o número de pessoas do interior torcedoras do São Paulo. */

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
        printf("Para qual time de São Paulo você torce?\n");
        printf("1-Santos\t2-Palmeiras\t3-São Paulo\t4-Corinthians\t5-Outros\n");
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
                printf("\nQual o seu Salário?");
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
            printf("De onde você é?");
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
    printf("\n\n\aNúmero de pessoas que torcem para o santos: %d\n", torceSantos);
    printf("Número de pessoas que torcem para o São Paulo: %d\n", torceSaoPaulo);
    printf("Número de pessoas que torcem para o Corinthians: %d\n", torceCorinthians);
    printf("Número de pessoas que torcem para o Palmeiras: %d\n", torcePalmeiras);
    printf("Número de pessoas que torcem para outros times: %d\n\n", torceOutros);
    printf("Número de pessoas moradoras de São Paulo, torcedores de outros clubes: %d\n", capitalTorceOutros);
    printf("Número de pessoas do interior torcedoras do São Paulo: %d\n\n", interiorTorceSaoPaulo);

    printf("Media salarial dos torcedores do palmeiras: R$%.2f\n\n", mediaSalarialPalmeiras);

    system("pause");
}