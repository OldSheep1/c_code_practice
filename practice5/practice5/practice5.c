#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf(" %d", a);
//		a++;
//		
//	}
//	return 0;
//}

//
//
//
//	}
//	
//int a;
//scanf("%d", &a);
//switch (a)
//{
//default:
//	break;
//case 1:
//	
//case 2:
//	printf("%d\n", 666);
//}
//
//	return 0;
//}
//��whileѭ���У�break�������õ���ֹѭ��
//��whileѭ���У�continue����������������ѭ��continue��ߵĴ��룬ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��

#include "string.h"
#include "stdio.h"
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
	//char a[] = { 'a', '\0'};
	//int len = strlen (a);
	//printf("%s", strlen);
 //   
	//return 0;
//
//int main()
//{
//	int a = 1;
//		do
//	{
//			printf("%d ", a);
//			a++;
//		
//		} while (a <= 10);
//	return 0;
//}
int main()
{
	int a = 0;
	int n = 0;
	int sum = 0;
	int net = 1;
	for (a = 1; a <= 3; a++)
	{
		net *= a;

		sum += net;
	}


	printf("%d", sum);
	return 0;
}
//1~3�Ľ׳����