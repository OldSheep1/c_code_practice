//#include "stdio.h"
//int get_max(int x,int y)
//{
//	int c = 0;
//	if (x > y)
//	{
//		c = x;
//	}
//	else
//		c = y;
//	return c;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = get_max(a,b);
//	printf("%d", max);
//}
#include <stdio.h>
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(1 + str);//ÿ��һ�ξ�1+my_strlen,�ٰ�(1+str)����(char* str)
		//(1+str����ȡstr��ָ���������һλh-->e-->l-->l-->o>>>>str��ʱ��������"hello")
		//�൱�ڵõ�'h'ʱΪ1+my_strlen,�õ�'e'ʱ1+1+my_strlen...��������
	}
	else
		return 0;
}
int main()
{
	char arr[] = "hello";
	printf("%d", my_strlen(arr));
	return 0;
}