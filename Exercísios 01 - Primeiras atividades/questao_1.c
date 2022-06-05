// calcule a media de seus alunos

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float nota1, nota2, media; // variavel para se calular a media dos alunos
int i;                     // i sera a variavel para a repeticao do programa
char aluno[64];           // String (nao tenho certeza) para conter o nome dos alunos

float main()
{

    printf("------------Calcule a media dos seus alunos-----------"); // Titulo

    do // repeticao do programa
    {

        // Parte principal do programa
        printf("\n\nInsira o Nome do aluno...:"); // Não utilizar a tecla "espaço", para evitar bugs
        scanf("%s", &aluno);
        printf("\nMedia do %s", aluno);
        printf("\ninsira a primeira nota:");
        scanf("%f", &nota1);

        if (nota1 > 10) // Mensagem de erro caso a nota inserida seja maior que 10
        {
            printf("\n\aInsira um valor valido!\n");
            getch();
            system("cls");
            return main();
        }

        printf("insira a segunda nota:");
        scanf("%f", &nota2);

        if (nota2 > 10) // Mensagem de erro caso a nota inserida seja maior que 10
        {
            printf("\n\aInsira um valor valido!\n");
            getch();
            system("cls");
            return main();
        }

        media = (nota1 + nota2) / 2; // Formula para se calcular a media

        printf("\nA media do(a) %s foi: %.2f", aluno, media); // Resultado falara se o aluno foi aprovado ou nao

        if (media <= 3)
        {
            printf("\n%s foi reprovado", aluno);
            printf("\n-----------------------");
        }
        else
        {
            if (media > 3 && media < 7)
            {
                printf("\n%s esta de recuperacao", aluno);
            }
            else
            {
                if (media >= 7)
                {
                    printf("\n%s foi aprovado", aluno);
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