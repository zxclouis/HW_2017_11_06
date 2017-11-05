#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b,s,r;
	printf("輸入兩數："); 
	scanf_s("%d %d", &a, &b); 
	s = a * b; 

	while(b!=0)
	{
		r = a%b;
		a = b;
		b = r;
	} 
	printf("最小公倍數LCM：%d\n", s / a);
	system("pause");
	return 0;
}