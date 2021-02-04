
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//在game.h中包含#include<stdio.h>
//只要引了game.h就引了stdio.h
//所以其他源文件中只需要引game.h就可以了

void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);