#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{

    int n;

    printf("\nInsira um valor:");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        putchar('A');
        break;
    case 3:
        putchar('B');
    case 4:
        putchar('C');
        break;
    case 5:
        putchar('D');

    default:
        putchar('*');
        break;
    }
    putchar('.');
    getch();
    return main();
}