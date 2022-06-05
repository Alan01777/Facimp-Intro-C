// Escreva um programa para encontrar a área do círculo e a área do retângulo usando a função return tipo.

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int area_circulo(float v1)
{
    float area_circ;
    area_circ = 3.14 * pow(v1, 2);

    return area_circ;
}

int area_triangulo(float v1, float v2)
{
    float area_tri;
    area_tri = (v1 * v2) / 2;

    return area_tri;
}

int main()
{
    float base, altura, area1, area2, raio;

    // calculo da area do triangulo
    printf("Insira a base do triangulo:");
    scanf("%f", &base);
    printf("Insira a altura do triangulo:");
    scanf("%f", &altura);

    area1 = area_triangulo(altura, base);

    printf("A area do triangulo: %.2f", area1);

    // calculo da area do circulo
    printf("\n\nInsira o raio do circulo:");
    scanf("%f", &raio);

    area2 = area_circulo(raio);

    printf("A area do circulo: %.2f", area2);
    getch();
}