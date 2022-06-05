//5. Escreva um programa para comparar dois números (imprima na tela se são iguais, ou quem é o maior e o menor).



#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float main()
{
    int i;

    printf("------------Compare dois numeros-----------\n"); // Titulo

    do // repeticao do programa
    {
        float num1, num2;

        printf("\nInsirao primeiro numero:");
        scanf("%f", &num1);

        printf("insira o segundo numero:");
        scanf("%f", &num2);

        if (num1 > num2)
        {
            printf("\nO primeiro numero e maior que o segundo");
        }
        else
        {
            if (num1 < num2)
            {
                printf("\nO segundo numero e maior que o primeiro");
            }
            else
            {
                if (num1 == num2)
                {
                    printf("\nOs dois numeros sao iguais");
                }
            }
        }

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