#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
    //1.�׵���Ϣ�洢
    //���ú��׵���Ϣ
    char mine[ROWS][COLS] = { 0 };//11*11
 
    //2.�Ų�����׵���Ϣ
    char show[ROWS][COLS] = { 0 };//11*11
    //��ʼ������
    InitBoard(show, ROWS, COLS,'*');
    InitBoard(mine, ROWS, COLS, '0');
    //2.��ӡ����
    DisplayBoard(show, ROW, COL);
    //DisplayBoard(mine, ROW, COL);
    //3.������
    SetMine(mine, ROW, COL);
    //DisplayBoard(mine, ROW, COL);
    //4.ɨ��
    FindMine(mine, show, ROW, COL);
}


void mnue()
{
    printf("-------------------------------\n");
    printf("-------------------------------\n");
    printf("----1.play       0.exit--------\n");
    printf("-------------------------------\n");
    printf("-------------------------------\n");
}

void test()
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
            printf("ɨ����Ϸ��ʼ\n");
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("�����������������\n");
            break;
        }
    } while (input);
}

int main()
{
	test();
	return 0;
}