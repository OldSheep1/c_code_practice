#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "string.h"
#include "time.h"//time��Ҫ��ͷ�ļ�
#include "stdlib.h"//sand��Ҫ��ͷ�ļ�
//strcmp�ǱȽ������ַ�����Ҫ�õ��ģ���ʽΪstrcmp��x1,x2��==0,���Ƚ���ȣ��򷵻�ֵ0��0==0��
//��x1 = ######   x2=123456  ,����x1����x1=x2  -> if(strcmp(x1,x2)==0)��Ϊ�� 




//0000000000000000000000000000��������Ϸ0000000000000000000000000000000
void menu()
{
	printf("####################################\n");
	printf("#############1.play#################\n");
	printf("#############0.exit#################\n");
	printf("####################################\n");
	printf("####################################\n");
}
void game()
{
	int ret = rand()%100+1;
	int guess;
	
		while (1)
		{
			printf("���һ����");
			scanf("%d", &guess);
			if (guess < ret)
			{
				printf("С��\n");
			}
			else if (guess > ret)
			{
				printf("����\n");
			}
			else
			{ printf("����");
			  break;
			}
		}
}
int main()
{
	srand((unsigned int)time(NULL));
	int play;
	do {
	     menu();
		 printf("��ѡ��1��0");

		scanf("%d", &play);
		
			switch (play)
			{
			case 1:
				game();

				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("����������\n");
				break;
			}
		} while (play);
	return 0;
}


