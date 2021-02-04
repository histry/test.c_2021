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
	//������������Ϣ
	char board[ROW][COL] = { 0 };
	int row = ROW;
	int col = COL;
	//1.��ʼ������
	InitBoard(board, row, col);
	//2.��ӡ����
	DisplayBoard(board, row, col);
	//3.����Ϸ����ʼ������
	while (1)
	{
		//�������
		PlayerMove(board, row, col);
		DisplayBoard(board, row, col);
		//�ж�����Ƿ�Ӯ��
		ret = Iswin(board, row, col);
		if (ret != 'D')
		{
			break;
		}

		//��������
		ComputerMove(board, row, col);
		DisplayBoard(board, row, col);
		//�жϵ����Ƿ�Ӯ��
		ret = Iswin(board, row, col);
		if (ret != 'D')
		{
			break;
		}
	}
	if (ret == 'x')
		printf("���Ӯ��\n");
	else if (ret == 'o')
		printf("����Ӯ��\n");
	else if (ret == 'C')
		printf("ƽ��\n");

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		mnue();
		printf("������(0/1):");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		defout:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}