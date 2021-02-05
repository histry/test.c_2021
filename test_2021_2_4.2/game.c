#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


//�����ĳ�ʼ��
//����������Ԫ�ض���ʼ��Ϊ�ո�
//�ո�Ϊ������Ļ����ʾ���ַ����ַ�(0Ҳ��)
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


//��ӡ����
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

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����\n");
	while (1)
	{
		printf("������Ҫ�µ����꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
				printf("�����걻ռ�ã�����������\n");
		}
		else
			printf("�����겻���ڣ�����������\n");
	}
}

//�����������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������\n");//�������е���ֻҪ���ڿ������ϼ���
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;//�������ߵ����ֵ������������
		y = rand() % col;
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'O';
				break;
			}
		}
	}
}


//����1����ʾ��������
//����0����ʾ���̻�û��
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//û��
		}
	}
	return 1;//����
}

//�ж���Ӯ����Ϸ�Ƿ����
//�ж���Ӯ
//4��״̬
//1.���Ӯ��---'X'
//2.����Ӯ��---'O'
//3.ƽ��----'C'
//4.��Ϸ����---'D'

char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;

	//��3��
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][0];//Iswinֱ�ӽ���
		}
	}

	//��3��
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];
		}
	}

	//�����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	
	//�ж��Ƿ�ƽ��
	if (1 == IsFull(board, ROW, COL))
		return 'C';

	//������Ϸ
	return 'D';
}