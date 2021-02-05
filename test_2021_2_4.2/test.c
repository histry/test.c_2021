#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"//引头文件

void mnue()
{
	printf("-------------------------------\n");
	printf("-------------------------------\n");
	printf("----1.play       0.exit--------\n");
	printf("-------------------------------\n");
	printf("-------------------------------\n");
}

void game()
{
	char ret = 0;
	//数组存放棋盘信息
	char board[ROW][COL] = { 0 };//二维数组的初始化并没有这么简单
	int row = ROW;
	int col = COL;
	//1.初始化棋盘
	//一定要初始化
	InitBoard(board, ROW, COL);
	//2.打印棋盘
	DisplayBoard(board, ROW, COL);
	//3.玩游戏，开始下棋了
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢了
		ret = Iswin(board, ROW, COL);
		//如果不是游戏继续，那么就直接跳出循环
		if (ret != 'D')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢了
		ret = Iswin(board, ROW, COL);
		//如果不是游戏继续，那么就直接跳出循环
		if (ret != 'D')
		{
			break;
		}
	}
	if (ret == 'X')
		printf("玩家赢了\n");
	else if (ret == 'O')
		printf("电脑赢了\n");
	else
		printf("平局\n");
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//扩大电脑走的随机值范围
	do
	{
		mnue();
		printf("请输入(0/1):");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		defout:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}