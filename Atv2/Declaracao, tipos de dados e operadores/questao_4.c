//4. Escreva um programa para encontrar a média de sete números


#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

float main()
{
    int i;
    float num1, num2, num3, num4, num5, num6, num7, r;

    printf("------------Calcule a media de 7 numeros-----------\n"); // Titulo

    do // repeticao do programa
    {

        printf("\nInsira o primeiro numero:");
        scanf("%f", &num1);

        printf("Insira o segundo numero:");
        scanf("%f", &num2);

        printf("Insira o terceiro numero:");
        scanf("%f", &num3);

        printf("Insira o quarto numero:");
        scanf("%f", &num4);

        printf("Insira o quinto numero:");
        scanf("%f", &num5);

        printf("Insira o sexto numero:");
        scanf("%f", &num6);

        printf("Insira o setimo numero:");
        scanf("%f", &num7);

        r = (num1 + num2 + num3 + num4 + num5 + num6 + num7) / 7;

        printf("\nA media e:%.2f", r);

        printf("\n\nDigite 1 para continuar, 2 para limpar a tela e 3 para sair..."); // Aqui o usuario escolhera se deseja continuar, limpar a tela ou sair
        scanf("%d", &i);
    } while (i == 1); // condicao para repeticao do programa

    if (i == 2) // se o usuario escolheu limpar tela digitando 2
    {
        system("cls");
        return main();
    }
    else
    {
        if (i == 3) // se o usuario escolheu sair digitando 3
        {
            printf("\nFIM!");
            getch();
        }
        else
        {
            if (i != 1, 2, 3) // Mensagem de erro caso o usuario pressione uma tecla nao especificada anteriormente
            {
                printf("\n\aOpcao invalida!\n\n");
                getch();
                return main();
            }
        }
    }
}