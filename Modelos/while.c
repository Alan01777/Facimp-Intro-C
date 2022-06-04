#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned n, d;
    printf("\nDigite um numero:");
    scanf("%u", &n);

    printf("Os seus digitos sao:");

    while (n != 0)
    {
        d = n % 10;
        n = n / 10;
        
        printf("%u ", d);
    }
    system("pause");
}