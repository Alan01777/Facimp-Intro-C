// 30. Escreva um programa em C para ler 10 nÃºmeros do teclado e encontre sua soma e mÃ©dia

#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Usar a codificação ISO 8859-1 para evitar bugs de acentuação
    float num, soma = 0, media;
    int contador = 1;

    while (contador <= 10)
    {
        printf("Insira o n.%d:", contador);
        scanf("%f", &num);
        contador++;
        soma = num + soma;
        printf("A soma temporária dos numeros: %.2f\n", soma);
    }
    printf("\nA soma dos numeros: %.2f\n\n", soma);

    media = soma / 10;

    printf("A media dos numeros: %.2f\n\n\n", media);
    system("pause");
}