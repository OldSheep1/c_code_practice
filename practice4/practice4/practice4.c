#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//#define add = (x,y) // 定义宏
//int main()
//{
//	//typetef 类型重定义
//	//如 typetef unsigned int  u_int
//	//unsigned int = u_int
//	printf("%d\n", (2, 5));
//	return 0;
//}
//int main()
//{
//	int a = 1024; 
//	printf("%p\n", a);
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	scanf("%d%d", &a,& b);
	if (a > b)
	{
		max = a;

	}
	else 
		 max = b;
	printf("%d\n", max);
	return 0;
}