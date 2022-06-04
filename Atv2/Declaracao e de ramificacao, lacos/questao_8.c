//Escreva um programa em c para o operador de incremento e decremento.



#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float main()
{
    // Operador de incremento e decremento


    int i, operador, incremento, decremento;

    printf("\n\nDigite 1 para usar o operador de incremento e 2 para usar o operador de decremento.");
    scanf("%d", &operador);

    if (operador == 1) // Operador de Incremento
    {
        for (incremento = 1; incremento <= 10; incremento++)
        {
            printf("%d ", incremento);
            
        }
    }
    else
    {
        if (operador == 2) // Operdor de Decremento
        {
            for (decremento = 10; decremento >= 1; decremento--)
            {
                printf("%d ", decremento);
                
            }
        }
        else
        {
            if (operador != 1, 2) // MSG de erro
            {
                printf("Opcao invalida!\a\n\n\n");
                getch();
                system("cls");
                return main();
            }
        }
    }
    printf("\n\nPressione enter para continuar...");
    getch();
    return main();
}