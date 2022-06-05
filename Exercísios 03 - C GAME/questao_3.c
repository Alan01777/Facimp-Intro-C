/*No dia da estréia do filme "Procurando Dory", uma grande emissora de TV
realizou uma pesquisa logo após o encerramento do filme. Cada espectador
respondeu a um questionário no qual constava sua idade e a sua opinião em
relação ao filme: excelente - 3; bom - 2; regular - 1 ruim. Criar um programa
que receba a idade e a opinião de 20 espectadores, calcule e imprima: a) A média
das idades das pessoas que responderam excelente; b) A quantidade de pessoas que
responderam regular;
c) A percentagem de pessoas que responderam bom entre todos os expectadores
analisados. */

#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int pessoas = 0, idade, soma_idade = 0, nota, nota1 = 0, nota2 = 0, nota3 = 0,
      media_idade;
  int qnt_pessoas;

  printf("Avaliação do filme Procurando Dory\n1=ruim\t2=regular\t3=excelente\n\n");
  printf("quantas pessoas participaram da avaliação?");
  scanf("%d", &qnt_pessoas);

  while (pessoas < qnt_pessoas) {
    printf("Qual a sua idade?");
    scanf("%d", &idade);
    printf("Qual a sua nota para o filme?");
    scanf("%d", &nota);
    printf("\n");

    if (nota == 1) {
      nota1++;
    } else if (nota == 2) {
      nota2++;
    } else if (nota == 3) {
      nota3++;
    }

    pessoas++;
    soma_idade = soma_idade + idade;
  }
  media_idade = soma_idade / qnt_pessoas;
  printf("\n\n\n%d Pessoas assistiram ao filme\n", pessoas);
  printf("A media da idade das pessoas foi de %d\n", media_idade);
  printf("%d dera nota 1\n", nota1);
  printf("%d dera nota 2\n", nota2);
  printf("%d dera nota 3\n\n\n", nota3);
  system("pause");
}