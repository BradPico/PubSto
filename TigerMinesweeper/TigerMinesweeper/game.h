#pragma once


#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


#define ROW 2
#define COL 2

#define ROWS ROW+2
#define COLS COL+2

#define MINENUM 3

//��ʼ��������ɨ������
void InitBoard(char board[ROWS][COLS],int rows, int cols, char s);

//��ӡ���̺���
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//���׺���
void SetMine(char mine[ROWS][COLS],int row,int col,int minenum);

//�����׺���
void FindMine(char mine[ROWS][COLS], char board[ROWS][COLS], int x, int y);
