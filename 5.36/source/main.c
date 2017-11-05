#include <stdio.h>
#include <stdlib.h>


int hanoi(int, int, int, int);

int main(void)
{
	int i;

	printf("�`�@���h�ֶ�L�n�h?\n");
	scanf_s("%d", &i);
	hanoi(i, 1, 2, 3);
	system("pause");
	return 0;
}

int hanoi(int i, int begin, int mid, int dest)
{
	if (i == 1)
		printf("�N�� %d �ӽL�l�q�� %d �Ӷ𲾨�� %d �Ӷ�\n", i, begin, dest);
	else
	{
		hanoi(i - 1, begin, dest, mid);
		printf("�N�� %d �ӽL�l�q�� %d �Ӷ𲾨�� %d �Ӷ�\n", i, begin, dest);
		hanoi(i - 1, mid, begin, dest);
	}
}