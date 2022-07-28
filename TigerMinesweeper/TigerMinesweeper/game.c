#include "game.h"

//��ʼ��������ɨ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char s)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = s;
		}
	}
	return 0;

}

//��ӡ���̺���
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("********************ɨ����Ϸ*******************\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("********************ɨ����Ϸ*******************\n");

}

//���׺���
void SetMine(char mine[ROWS][COLS], int row, int col, int minenum)
{
	int i = 0;
	int j = 0;
	int count = 0;
	while (count != minenum)
	{
		i = rand() % 9 + 1;
		j = rand() % 9 + 1;
		if (mine[i][j] == '0')
		{
			mine[i][j] = '1';
			count++;
		}
	}
	return 0;
}