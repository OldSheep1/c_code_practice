#define _CRT_SECURE_NO_WARNINGS 1
//#include "stdio.h"
//int main()
////{
////	int j = 0;
////	int n = 0;
////	int xx = 1;
////	int num = 0;
////
////	for (j = 1; j <= 3; j++)
////	{
////		xx *= j;
////		num += xx;
////	
////	} 
////	printf("%d", num);
////	return 0;
////
////}
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);//������/��һ����=��Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	int mid=0;
//	
//	while (left<=right)
//	{
//	
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//
//			
//		}
//
//
//
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c)
//	{
//		max = a;
//	}
//	else if (b > a && b > c)
//	{
//		max = b;
//	}
//	else (max=c);
//
//	printf("%d", max);
//
//	return 0;
//}
//00000000000000000000���������������ֵ0000000000000000000000
//#include "stdio.h"
//int main()
//{
//
//	char grade = 0;
//	scanf("%c", &grade);
//	switch (grade)
//	{
//	case 'A':
//		printf("80~100");
//		break;
//	default:
//		printf("error");
//		break;
//	}
//
//	return 0;
//}
////}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	int left = 0;
//    int sz = sizeof arr / sizeof arr[0];
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left+right)/2;
//
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d", mid);
//			break;
//		}
//			
//		
//	}
//	return 0;
//
//}
//000000000000000000000���������ҵ�һ�������±�00000000000000000000000
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int net = 1;
//	for (a = 1; a <= 3; a++)
//	{
//		net *= a;
//
//		sum += net;
//	}
//
//
//	printf("%d", sum);
//	return 0;
//}
//000000000000000000000000000000000000001~3�Ľ׳����0000000000000000000000000000000000000000000000000000
//#include "stdio.h"
//#include "string.h"
//#include "windows.h"
//int main()
//{
//	char a[] = "123456789";
//	char b[] = "###########";
//	
//		int left = 0;
//		int right = strlen(a)-1;//�����һ���±����ֵ
//		while (left <= right)
//		{
//			b[left] = a[left];//��b����ĵ�һ���±������ֵ��a�ĵ�һ����
//			b[right] = a[right] ;//��b��������һ���±������ֵ��a�����һ����
//			Sleep (500);//��ʱ0.5s,��Ҫ����Windowsͷ�ļ�
//			system ("cls");//�����Ļ��
//			left++;
//			right--;
//			printf("%s\n", b);
//
//		}
//
//	return 0;
//}
//000000000000000000����ַ������ƶ����м俿£0000000000000000000000000000000
#include "stdio.h"
int main()
{
    int b;
    int aaa;
    scanf("%d", &aaa);

    //if (aaa = 100)//����һ���Ⱥţ���һ��Ϊ�棬���aaa��ֵΪ90
    if(aaa == 100)
    {
        aaa = 90;
    }
    b = aaa / 10;
    switch (b)
    {
    case 9:
        printf("A");
        break;
    default:
printf("E");
        break;
    }
    return 0;

}
//0000000000000000000����һ��������������ĵȼ�000000000000000000