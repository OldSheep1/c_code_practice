#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
			a = b;
			 b= tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;

	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;

	}
	

	printf("%d%d%d", a, b, c);

	return 0;
}
//0000000000000000000000000输入三个数，按从大到小排序输出000000000000000