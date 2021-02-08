#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
    //1.雷的信息存储
    //布置好雷的信息
    char mine[ROWS][COLS] = { 0 };//11*11
 
    //2.排查出的雷的信息
    char show[ROWS][COLS] = { 0 };//11*11
    //初始化棋盘
    InitBoard(show, ROWS, COLS,'*');
    InitBoard(mine, ROWS, COLS, '0');
    //2.打印棋盘
    DisplayBoard(show, ROW, COL);
    //DisplayBoard(mine, ROW, COL);
    //3.布置雷
    SetMine(mine, ROW, COL);
    //DisplayBoard(mine, ROW, COL);
    //4.扫雷
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
        printf("请输入(0/1):");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("扫雷游戏开始\n");
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("输入错误，请重新输入\n");
            break;
        }
    } while (input);
}

int main()
{
	test();
	return 0;
}