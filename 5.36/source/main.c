#include <stdio.h>
#include <stdlib.h>


int hanoi(int, int, int, int);

int main(void)
{
	int i;

	printf("總共有多少圓盤要搬?\n");
	scanf_s("%d", &i);
	hanoi(i, 1, 2, 3);
	system("pause");
	return 0;
}

int hanoi(int i, int begin, int mid, int dest)
{
	if (i == 1)
		printf("將第 %d 個盤子從第 %d 個塔移到第 %d 個塔\n", i, begin, dest);
	else
	{
		hanoi(i - 1, begin, dest, mid);
		printf("將第 %d 個盤子從第 %d 個塔移到第 %d 個塔\n", i, begin, dest);
		hanoi(i - 1, mid, begin, dest);
	}
}