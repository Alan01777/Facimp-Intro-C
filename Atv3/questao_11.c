/*Crie um programa que ajude o DETRAN a saber o total de recursos que foram arrecadados
com a aplica��o de multas de tr�nsito. O algoritmo deve ler as seguintes informa��es
para cada motorista:
A) n�mero da carteira de motorista (de 1 a 4327);
B) n�mero de multas;
C) valor de cada uma das multas.
Ao final imprima:
a) Quantidade de multas.
b) Quantidade total de arrecada��o. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numMotorista, quantidadeMultas, somaQuantidadeMultas = 0;
    int contador;
    float valorMulta, somaValorMultas = 0;

    printf("Insira o valor 0 para encerrar o programa\n\n");
    while (numMotorista != 0)
    {
        printf("N�mero da carteira de motorista (1-4327): ");
        scanf("%d", &numMotorista);
        if (numMotorista > 0 && numMotorista <= 4237)
        {
            printf("Quantidade de multas: ");
            scanf("%d", &quantidadeMultas);

            somaQuantidadeMultas = somaQuantidadeMultas + quantidadeMultas;

            for (contador = 1; contador <= quantidadeMultas; contador++)
            {
                printf("Valor da %d� multa: ", contador);
                scanf("%f", &valorMulta);
                
                somaValorMultas = somaValorMultas + valorMulta;
            }
        }
        else
        {
            if (numMotorista > 4237 || numMotorista < 0)
            {
                printf("Insira um n�mero de carteira de motorista v�lido!\n\n");
                system("pause");
                exit(0);
            }
        }
    }
    printf("\n\nQuantidade de multas: %d", somaQuantidadeMultas);
    printf("\nValor arrecadado: R$%.2f\n\n", somaValorMultas);
    system("pause");
}