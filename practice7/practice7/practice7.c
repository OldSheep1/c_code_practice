#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "string.h"
#include "time.h"//time需要的头文件
#include "stdlib.h"//sand需要的头文件
//strcmp是比较两个字符串需要用到的，格式为strcmp（x1,x2）==0,若比较相等，则返回值0，0==0，
//如x1 = ######   x2=123456  ,输入x1，若x1=x2  -> if(strcmp(x1,x2)==0)则为真 




//0000000000000000000000000000猜数字游戏0000000000000000000000000000000
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
			printf("请猜一个数");
			scanf("%d", &guess);
			if (guess < ret)
			{
				printf("小了\n");
			}
			else if (guess > ret)
			{
				printf("大了\n");
			}
			else
			{ printf("对了");
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
		 printf("请选择1或0");

		scanf("%d", &play);
		
			switch (play)
			{
			case 1:
				game();

				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("请重新输入\n");
				break;
			}
		} while (play);
	return 0;
}


