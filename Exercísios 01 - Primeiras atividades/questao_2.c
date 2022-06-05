// Idincar o consumo médio de um automóvel

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float distancia, litros, cons_medio; // Variaveis a serem utilizadas
int i;                               // variavel para estrutura de repetição

float main() // bloco principal
{

    printf("------------Calcule o seu consumo medio de combustivel!------------\n\n"); // Titulo

    do // Estrutura de rpetição
    {
        printf("\n-------------------------------");
        printf("\n\nQuantos KM voce rodou? ");
        scanf("%f", &distancia);

        printf("Quantos litros seu automovel consumiu? ");
        scanf("%f", &litros);

        cons_medio = distancia / litros; // Formula a ser utilizada

        printf("\nSeu consumo medio foi de...: %.2f KM/L", cons_medio);

        if (cons_medio >= 14) // Se o carro teve um consumo maior que 14KM/L
        {
            printf("\nSeu carro economizou muito combustivel");
            printf("\n-------------------------------");
        }
        else
        {
            if (cons_medio >= 9 && cons_medio < 14) // Se o carro teve um consumo inferior a 14KM/L, mas superior a 9KM/L
            {
                printf("\nSeu carro economizou combustivel");
            }
            else
            {
                if (cons_medio < 9 && cons_medio > 6) // Se o carro teve um consumo inferior a 9KM/L, mas superior a 6KM/L
                {
                    printf("\nSeu carro nao economizou tanto combustivel");
                }
                else
                {
                    if (cons_medio < 6) // Se o carro teve um consumo inferior a 6KM/L
                    {
                        printf("\nSeu carro nao economizou combustivel");
                    }
                }
            }
        }
        printf("\n\nPressione 1 para continuar, 2 para limpar a tela e 3 para sair..."); // Condição para repetição
        scanf("%d", &i);
    } while (i == 1);

    if (i == 2) // Comando para limpar a tela
    {
        system("cls");
        return main();
    }
    else
    {
        if (i == 3) // Comando para encerrar o programa
        {
            printf("\nFIM!");
            getch();
        }
        else
        {
            if (i != 1, 2, 3) // Mensagem de erro caso um numero invalido seja digitado (diferente de 1, 2, 3) para retição
            {
                printf("\n\aOpcao invalida!\n\n");
                getch();
                return main();
            }
        }
    }
}
