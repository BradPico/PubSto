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
		i = rand() % row + 1;
		j = rand() % col + 1;
		if (mine[i][j] == '0')
		{
			mine[i][j] = '1';
			count++;
		}
	}
	return 0;
}

static int getmine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
			
}
//�����׺���
void FindMine(char mine[ROWS][COLS], char board[ROWS][COLS], int row, int col)
{
	int x;
	int y;
	int Mine_count = 0;

	while(Mine_count<ROW*COL-MINENUM)
	{
		printf("�������Ų�����꣺>");
		scanf("%d%d", &x, &y);

		if (x > 0 && x <= row && y>0 && y <= col && board[x][y] == '*')
		{
			if (mine[x][y] == '1')
			{
				printf("������˼���㱻ը���ˣ�\n");
				break;
			}
			else 
			{
				int n = getmine(mine, x, y);
				board[x][y] = 48 + n;
				DisplayBoard(board, ROW, COL);
				Mine_count++;
			}
		}
		else
		{
			printf("�����������������\n");
		}
	}
	if (Mine_count == ROW * COL - MINENUM)
	{
		printf("��ϲ�㣬�ҳ������еĵ��ף�\n");
	}
}
