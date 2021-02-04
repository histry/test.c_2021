#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

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
	char board[ROW][COL] = { 0 };
	int row = ROW;
	int col = COL;
	//1.初始化棋盘
	InitBoard(board, row, col);
	//2.打印棋盘
	DisplayBoard(board, row, col);
	//3.玩游戏，开始下棋了
	while (1)
	{
		//玩家下棋
		PlayerMove(board, row, col);
		DisplayBoard(board, row, col);
		//判断玩家是否赢了
		ret = Iswin(board, row, col);
		if (ret != 'D')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board, row, col);
		DisplayBoard(board, row, col);
		//判断电脑是否赢了
		ret = Iswin(board, row, col);
		if (ret != 'D')
		{
			break;
		}
	}
	if (ret == 'x')
		printf("玩家赢了\n");
	else if (ret == 'o')
		printf("电脑赢了\n");
	else if (ret == 'C')
		printf("平局\n");

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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