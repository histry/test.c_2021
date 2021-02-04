#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


//函数的初始化
//将棋盘所有元素都初始化为空格
//空格为不在屏幕上显示其字符的字符(0也是)
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}



void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while (1)
	{
		printf("请输入要下的坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'x';
				break;
			}
			else
				printf("该坐标被占用，请重新输入\n");
		}
		else
			printf("该坐标不存在，请重新输入\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走\n");//三子棋中电脑只要下在空棋盘上即可
	int x = 0;
	int y = 0;
	x = rand() % row;//将电脑走的随机值控制在棋盘中
	y = rand() % col;
	while (1)
	{
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'o';
				break;
			}
		}
	}
}

//判断输赢
//4种状态
//1.玩家赢了---'x'
//2.电脑赢了---'o'
//3.平局----'C'
//4.游戏继续---'D'

//返回1，表示棋盘满了
//返回0，表示棋盘还没满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//没满
		}
	}
	return 1;//满了
}
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;

	//横3行
	for (i = 0; i < 3; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	//列3行
	for (i = 0; i < 3; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

	//两个对角线
	if (board[0][1] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	
	//判断是否平局
	if (1 == IsFull(board[ROW][COL], row, col));
		return 'C';

	//继续游戏
	return 'D';
}