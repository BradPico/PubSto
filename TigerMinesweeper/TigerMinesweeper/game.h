#pragma once


#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


#define ROW 2
#define COL 2

#define ROWS ROW+2
#define COLS COL+2

#define MINENUM 3

//初始化雷区及扫雷棋盘
void InitBoard(char board[ROWS][COLS],int rows, int cols, char s);

//打印棋盘函数
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布雷函数
void SetMine(char mine[ROWS][COLS],int row,int col,int minenum);

//查找雷函数
void FindMine(char mine[ROWS][COLS], char board[ROWS][COLS], int x, int y);
