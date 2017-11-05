#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;
	int a=0;
	int b=1;
	int c=1;
	int d;
	int e;
	printf("請選擇功能:\n(1)計算第n個Fibonacci數\n(2)找出你的系統所能印出最大的Fibonacci數\n(3)結束\n");
	scanf_s("%d", &e);
	while (1)
	{
		switch (e)
		{
		case 1:
			a = 0;
			b = 1;
			c = 1;
			printf("計算第n個Fibonacci數:");
			scanf_s("%d", &n);
			if (n == 1)
			{
				
				printf("%d\n", a);
			}
			if (n == 2)
			{
				printf("%d\n", a);
				printf("%d\n", b);
			}
			if (n == 3)
			{
				printf("%d\n", a);
				printf("%d\n", b);
				printf("%d\n", c);
			}
			if (n > 3)
			{
				printf("%d\n", a);
				printf("%d\n", b);
				printf("%d\n", c);
				for (d = 3; d < n; d++)
				{

					a = b;
					b = c;
					c = a + b;
					printf("%d\n", c);
				}
			}
			printf("請選擇功能:\n(1)計算第n個Fibonacci數\n(2)找出你的系統所能印出最大的Fibonacci數\n(3)結束\n");
			scanf_s("%d", &e);
			break;
		case 2:
			a = 0;
			b = 1;
			c = 1;
			printf("Fibonacci數:\n");
			printf("%d\n", a);
			printf("%d\n", b);
			printf("%d\n", c);
			for (d=3; d<=46; d++)
			{
				a = b;
				b = c;
				c = a + b;
				printf("%d\n", c);
			}
				printf("請選擇功能:\n(1)計算第n個Fibonacci數\n(2)找出你的系統所能印出最大的Fibonacci數\n(3)結束\n");
				scanf_s("%d", &e);
			break;
		case 3:
			printf("結束!\n");
			system("pause");
			return 0;
			break;
		default:
			printf("Error enter again\n");
			printf("請選擇功能:");
			scanf_s("%d", &e);
			break;
		}
	}
}