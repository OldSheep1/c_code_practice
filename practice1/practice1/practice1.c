#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char ch = 'a';
//		//�ַ�����
//	int age = 10;
//		//����
//
//	return 0;
//}
//int a= 10;//{}�ⶨ��ı���Ϊȫ�ֱ���//
//int main()
//{
//	int a,sum;
//	scanf("%d", &a);
//		a++;
//		sum = a++;
//	printf("%d\n", sum);
//	//{}�ڶ���ı���Ϊ�ֲ�����
//	//���ֱ�����ͻʱ�����ȴ�ӡ�ֲ�����
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
//��������������ָ