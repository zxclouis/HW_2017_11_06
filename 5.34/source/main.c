#include <stdio.h>
#include <stdlib.h>

int integerpower(int a, int b);
int main(void)
{
	int a;
	int b;
	int c;
	int e=1;
	printf("請輸入a的b次方:\n");
	scanf_s("%d %d", &a, &b);
	printf("Power(%d,%d)=",a,b);
	for (c=b; 1 <= c; c--)
	{
		if (c > e)
		{
			printf("%d*", a);
		}
		else
		{
			printf("%d\n", a);
		}
	}
	printf("Power(%d,%d)=%d\n", a, b, integerpower(a, b));
	system("pause");
}
int integerpower(int a, int b)
{
	int c;
	int d=1;
	for (c = b; 1 <= c ; c--)
	{
		d = d*a;
	}
	return d;
}