#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//棋盘的行列宏定义
#define  ROW  3
#define  COL  3


//初始化棋盘
void InitBoard(char Board[ROW][COL], int Row, int Col);

//打印棋盘函数
void DiaplayBoard(char Board[ROW][COL], int Row, int Col);

//玩家下子函数
void PlayerMove(char Board[ROW][COL],int Row,int Col);

//电脑下子函数
void ComputerMove(char Board[ROW][COL], int Row, int Col);