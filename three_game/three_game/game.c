#include "game.h"

//��ʼ������
void InitBoard(char Board[ROW][COL], int Row, int Col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < Row; i++)
	{
		for (j = 0; j < Col; j++)
		{
			Board[i][j] = ' ';
		}
	}
}


//��ӡ���̺���
void DisplayBoard(char Board[ROW][COL], int Row, int Col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < Row; i++)
	{
		for (j = 0; j < Col; j++)
		{
			printf(" %c ", Board[i][j]);
			if(j<Col-1)
				printf("|");
		}
		printf("\n");
		if (i < Row - 1)
			printf("--- --- ---\n");
	}
}

//������Ӻ���
void PlayerMove(char Board[ROW][COL], int Row, int Col)
{
	int i = 0;
	int j = 0 ;
	while (1)
	{
		printf("������ӣ����������꣺");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
		{
			if (Board[i - 1][j - 1] == ' ')
			{
				Board[i - 1][j - 1] = '*';
				break;
			}
			else
				printf("�����������������\n");
		}

	}

}

void ComputerMove(char Board[ROW][COL], int Row, int Col)
{
	int i = 0;
	int j = 0;
	printf("��������\n");
	while (1)
	{
		i = rand() % ROW;
		j = rand() % COL;
		if (Board[i][j] == ' ')
		{
			Board[i][j] = '#';
			break;
		}
		
	}
}
