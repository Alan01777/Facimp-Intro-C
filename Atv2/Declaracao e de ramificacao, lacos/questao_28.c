// Calcule o volume através da função.

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    char escolha;

    printf("\na=cilindro\tb=cubo\tc=cone\td=esfera\te=paralelepipedo\nSelecione a sua opcao para calcular o volume:");
    scanf("%c", &escolha);

    switch (escolha)
    {
    case 'a':
        volumecilindro();
        break;
    case 'b':
        volumecubo();
        break;
    case 'c':
        volumecone();
        break;
    case 'd':
        volumeesfera();
        break;
    case 'e':
        volume_paralelepipedo();
        break;
    default:
        printf("*****************");
        break;
    }
    getch();
}

int volumecilindro()
{
    float a, h, b, l, r, volume;

    printf("Insira a altura: ");
    scanf("%f", &h);
    printf("Insira o raio: ");
    scanf("%f", &r);

    volume = 3.14 * pow(r, 2) * h;

    printf("O volume do cilindro é: %.2f cm3", volume);
}

int volumecubo()
{
    float lado, volume;

    printf("Insira a medida de um lado do cubo:");
    scanf("%f", &lado);

    volume = pow(lado, 3);

    printf("O volume do cubo é: %.2f cm3", volume);
}

int volumecone()
{
    float a, h, b, l, r, volume;

    printf("Insira a altura:");
    scanf("%f", &h);
    printf("Insira o raio:");
    scanf("%f", &r);

    volume = (3.14 * pow(r, 2) * h) / 3;

    printf("O volume do cone é: %.2f cm3", volume);
}

int volumeesfera()
{
    float a, h, b, l, r, volume;

    printf("Insira o raio:");
    scanf("%f", &r);

    volume = (4 * 3.14 * pow(r, 3)) / 3;

    printf("O volume do cilindro é: %.2f cm3", volume);
}

int volume_paralelepipedo()
{
    float a, h, b, l, r, volume;

    printf("Insira a altura:");
    scanf("%f", &h);
    printf("Insira o base:");
    scanf("%f", &b);
    printf("Insira a largura:");
    scanf("%f", &l);

    volume = h * b * l;

    printf("O volume do cilindro é: %.2f cm3", volume);
}

