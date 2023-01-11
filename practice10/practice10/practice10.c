#define _CRT_SECURE_NO_WARNINGS 1
//#include "stdio.h"
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <=n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}
//nµÄ½×³Ë.
#include <stdio.h>
int fac(n)
{
	if (n <= 1)
		return 1;
	else
		return n * fac(n-1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
		printf("%d", ret);
	return 0;
}