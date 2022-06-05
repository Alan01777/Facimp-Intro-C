/*15. Escreva um programa usando "switch case", 
se o usuário digitar 11, ele terá área do círculo 
e quando o usuário digitar 22, ele terá área de retângulo
e quando o usuário digitar 33, ele dará área do quadrado quando
o usuário digitar 44 dará área do triângulo.
*/

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float area, raio, base, altura;
    int op;

#define PI 3.14

    printf("Escolha qual tipo de operacao deseja realizar\n ");
    printf("Area do circulo 11\n");
    printf("Area do retangulo 22\n");
    printf("Area do quadrado 33\n");
    printf("Area do triangulo 44\n");
    printf("\nSua escolha:");
    scanf("%i", &op);

    switch (op)
    {
    case 11:
        printf("Insira o raio:");
        scanf("%f", &raio);
        area = PI * pow(raio, 2);
        printf("A area do circulo: %.2f", area);
        break;
    case 22:
        printf("Insira a base");
        scanf("%f", &base);
        printf("Insira a altura");
        scanf("%f", &altura);

        area = altura * base;
        printf("A area do retangulo: %.2f", area);
        break;
    case 33:
        printf("Insira o valor de um dos lados do quadrado:");
        scanf("%f", &altura);
        area = pow(altura, 2);

        printf("A area do quadrado: %.2f", area);
        break;
    case 44:
        printf("Insira a base");
        scanf("%f", &base);
        printf("Insira a altura");
        scanf("%f", &altura);

        area = (base * altura) / 2;

        printf("A area do triangulo: %2.f", area);
        break;
    default:
        printf("Valor invalido!");
        break;
    }
    getch();
    system("cls");
    return main();
}