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
		return 1 + my_strlen(1 + str);//每归一次就1+my_strlen,再把(1+str)传给(char* str)
		//(1+str就是取str的指针里往后加一位h-->e-->l-->l-->o>>>>str此时里面存的是"hello")
		//相当于得到'h'时为1+my_strlen,得到'e'时1+1+my_strlen...依此类推
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