#include <stdlib.h>
#include <stdio.h>

int main()
{
	char s[] = "Francsico Alan Olveira da Costa Alves";
	int i;

	for (i = 0; s[i] != '\0'; ++i);

	printf("Length of the string: %d\n\n\n", i);
	system("pause");
}