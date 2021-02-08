#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = EASY_COUNT;
	while (count)
	{
		x = rand() % row + 1;//1-8+1//1-9
		y = rand() % col + 1;//1-8+1//1-9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


//'3'-'0'=3
//'4'-'0'=4
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] - 8 * '0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	printf("���������꣨�� �У�:");
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	int win = 0;
	while (win<col*row- EASY_COUNT)
	{
		//����Ϸ�
		if (x > 1 && x <= row && y > 1 && y <= col)
		{
			if (mine[x][y] == '1')//����
			{
				printf("���ź����㱻ը���ˣ���Ϸ����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else//������Χ�˸�λ�õ�����
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count+'0';//������ַ�������ֵ��int
				DisplayBoard(mine, ROW, COL);
				win++;
			}
		}
		//����Ƿ�
		else
			printf("����������꣬����������:\n");
	}
	if (win == col * row - EASY_COUNT)
		printf("��ϲ����Ϸ�ɹ�\n");
}
