#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    char op;

    printf("\nExpressao?");
    scanf("%f %c %f", &x, &op, &y);

    switch (op)
    {
    case '+':
        printf("\nValor = %.2f", x + y);
        break;
    case '-':
        printf("\nValor = %.2f", x - y);
        break;
    case '*':
        printf("\nValor = %.2f", x * y);
        break;
    case '/':
        if (y == 0)
        {
            printf("Impossivel dividir por 0!\a");
            break;
        }
        else
        {
            printf("\nValor = %.2f", x / y);
            break;
        }
    default:
        printf("\nOperador Invalido:%c", op);
    }
    getch();
    system("cls");
    return main();
}