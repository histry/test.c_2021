#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"//��ͷ�ļ�

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
	char board[ROW][COL] = { 0 };//��ά����ĳ�ʼ����û����ô��
	int row = ROW;
	int col = COL;
	//1.��ʼ������
	//һ��Ҫ��ʼ��
	InitBoard(board, ROW, COL);
	//2.��ӡ����
	DisplayBoard(board, ROW, COL);
	//3.����Ϸ����ʼ������
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ��
		ret = Iswin(board, ROW, COL);
		//���������Ϸ��������ô��ֱ������ѭ��
		if (ret != 'D')
		{
			break;
		}

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ��
		ret = Iswin(board, ROW, COL);
		//���������Ϸ��������ô��ֱ������ѭ��
		if (ret != 'D')
		{
			break;
		}
	}
	if (ret == 'X')
		printf("���Ӯ��\n");
	else if (ret == 'O')
		printf("����Ӯ��\n");
	else
		printf("ƽ��\n");
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��������ߵ����ֵ��Χ
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