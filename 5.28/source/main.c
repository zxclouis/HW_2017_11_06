#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char a,b;
	printf("½Ð¿é¤J:");
	scanf_s("%c", &a);
	if ((a <= 90) && (a >= 65))
	{
		a += 32;
	}
	else if ((a <= 122) && (a >= 97))
	{
		a -= 32;
	}
	printf("%c", a);
	printf("\n");
	system("pause");
	return 0;
}