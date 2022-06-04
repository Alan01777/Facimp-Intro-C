#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int contador = 1, aprovados = 0;
    int reprovados = 0, n_alunos;
    float nota1, nota2, media, media_geral, soma;
 
    printf("Insira a quantidade de alunos:");
    scanf("%d", &n_alunos);

    while (contador <= n_alunos)
    {
        printf("\n%d.Nota do aluno:", contador);
        printf("\nNota 1:");
        scanf("%f", &nota1);
        printf("Nota 2:");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        printf("A media foi de: %.2f\n", media);
        if (media < 7)
        {
            printf("Reprovado!\n");
            reprovados++;
        }
        else
        {
            printf("Aprovado!\n");
            aprovados++;
        }

        soma += media;
        contador++;
    }
    media_geral = soma / n_alunos;

    printf("\nA media geral da turma foi %.2f\n", media_geral);
    printf("Fora aprovados %d alunos\n", aprovados);
    printf("Foram reprovados %d alunos\n\n", reprovados);
    system("pause");
}