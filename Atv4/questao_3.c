/*No dia da estréia do filme "Procurando Dory", uma grande emissora de TV
realizou uma pesquisa logo após o encerramento do filme. Cada espectador
respondeu a um questionário no qual constava sua idade e a sua opinião em
relação ao filme: excelente - 3; bom - 2; regular - 1. Criar um programa
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
  int idade, mediaIdadeNota3 = 0, somaIdadeNota3 = 0;
  int nota, nota1 = 0, nota2 = 0, nota3 = 0;
  int pessoas = 0;
  float porcentagemBom;

  printf("Avaliação do filme Procurando Dory\n");
  printf("1=ruim\t2=regular\t3=excelente\n");
  printf("Insira um valor negativo para encerrar!\n");
  printf("-----------------------------------------\n\n");

  for (int i = 0; i < 20; i++) {
    printf("Qual a sua idade?");
    scanf("%d", &idade);

    if (idade < 0) {  // condição para encerrar o programa
      printf("----------------------------------\n");
      printf("Media de idade das pessoas que responderam excelente: %d\n", mediaIdadeNota3);
      printf("Pessoas que responderam regular: %d\n", nota1);
      printf("Porcentagem de pessoas que respoderam bom: %%%.1f\n\n", porcentagemBom);
      system("pause");
      exit(0);  // função para encerra o programa
    }

    printf("Qual a sua nota para o filme?");
    scanf("%d", &nota);
    printf("\n");

    if (nota == 1) {
      nota1++;
    } else if (nota == 2) {
      nota2++;
    } else if (nota == 3) {
      nota3++;
      somaIdadeNota3 = somaIdadeNota3 + idade;
    }
    pessoas++; 
    if (somaIdadeNota3 > 0) {  // condição para evitar que a media seja dividida por 0 no inicio do programa
      mediaIdadeNota3 = somaIdadeNota3 / nota3;
    }
    porcentagemBom = (nota2 * 100) / pessoas;
  }
}