
#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��game.h�а���#include<stdio.h>
//ֻҪ����game.h������stdio.h
//��������Դ�ļ���ֻ��Ҫ��game.h�Ϳ�����

void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);