#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���̵����к궨��
#define  ROW  3
#define  COL  3


//��ʼ������
void InitBoard(char Board[ROW][COL], int Row, int Col);

//��ӡ���̺���
void DiaplayBoard(char Board[ROW][COL], int Row, int Col);

//������Ӻ���
void PlayerMove(char Board[ROW][COL],int Row,int Col);

//�������Ӻ���
void ComputerMove(char Board[ROW][COL], int Row, int Col);