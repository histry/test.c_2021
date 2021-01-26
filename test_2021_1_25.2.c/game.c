#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("############################\n");
	printf("####  1.play  0.exit  ######\n");
	printf("############################\n");
}
void game()
{
	//生成一个随机数
	int ret = 0;
	//拿时间戳来设置来设置随机数
	//time_t time(time_t,*timer)
	//time_t
	//srand(unsigned int (time_t(NULL))
	ret = rand()%100+1;//生成了100以内的随机数
	//printf("%d\n", ret);
	//2.开始猜数字
	int guss = 0;
	while ( 1 )
	{
		printf("请猜数字：");
		scanf("%d", &guss);
		if (guss > ret)
		{
			printf("猜大了\n");
		}
		else if (guss < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜，猜对了\n");
			break;
		}		
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();//菜单
		printf("请输入（1/0）:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		case 1:
		{
			game();//猜数字游戏
			break;
		}
		default:
		{
			printf("选择错误\n");
			break;
		}
		}
	} while (input);
	return 0;
}