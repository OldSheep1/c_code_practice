#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char ch = 'a';
//		//字符类型
//	int age = 10;
//		//整形
//
//	return 0;
//}
//int a= 10;//{}外定义的变量为全局变量//
//int main()
//{
//	int a,sum;
//	scanf("%d", &a);
//		a++;
//		sum = a++;
//	printf("%d\n", sum);
//	//{}内定义的变量为局部变量
//	//两种变量冲突时，优先打印局部变量
////}
int main()
{
	int arr[5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 1; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);
	return 0;

}
//输入五个数求最大指