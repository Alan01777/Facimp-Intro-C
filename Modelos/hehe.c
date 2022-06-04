#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, idBoi, idBoiGordo, idBoiMagro;
    float pesoBoi, boiGordo = 0, boiMagro = 0;

    while (idBoi!=0)
    {
        printf("Informe a identificacao do boi: \n");
        scanf("%d", &idBoi);
        printf("Informe o peso do boi: \n");
        scanf("%f", &pesoBoi);

        if (pesoBoi > boiGordo)
        {
            idBoiGordo = idBoi;
            boiGordo = pesoBoi;
        }
        if (pesoBoi < boiMagro || i == 1)
        {
            idBoiMagro = idBoi;
            boiMagro = pesoBoi;
        }
    }
    printf("Identificacao do boi mais gordo: %d \n", idBoiGordo);
    printf("Peso do boi mais gordo: %f \n", boiGordo);
    printf("Identificacao do boi mais magro: %d \n", idBoiMagro);
    printf("Peso do boi mais magro: %f \n", boiMagro);

    system("pause");
}