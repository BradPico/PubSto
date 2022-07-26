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
	int k = 0;
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
		{
			for (k = 0; k < Row; k++)
			{
				printf("--- ");
			}
			printf("\n");
		}
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

//�ж���Ӯƽ�ֺ���
//1�����Ӯ������'*'
//2������Ӯ������'#'
//3��ƽ�֣�����'Q'
//4������������'C��
char WhoWin(char Board[ROW][COL], int Row, int Col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	//1��ÿһ�ж����
	for (i = 0; i < Row; i++)
	{
		count = 0;
		for (j = 0; j < Col-1; j++)
		{
			if (Board[i][j] == Board[i][j + 1])
				count++;
			else
				break;
		}
		if (count == Col - 1&& Board[i][j] !=' ')
		{
			return Board[i][j];
		}
	}

	//2��ÿһ�����
	for (i = 0; i < Row; i++)
	{
		count = 0;
		for (j = 0; j < Col - 1; j++)
		{
			if (Board[j][i] == Board[j + 1][i])
				count++;
			else
				break;
		}
		if (count == Row - 1 && Board[j-1][i] != ' ')
		{
			return Board[j-1][i];
		}
	}
	//3���Խ������
	count = 0;
	for (i = 0; i < Row; i++)
	{
	
		if (Board[i][i] == Board[i + 1][i + 1])
			count++;
		else
			break;
	}
	if (count == Row - 1 && Board[0][0] != ' ')
	{
		return Board[0][0];
	}

	count = 0;
	for (i = 0; i < Row; i++)
	{

		if (Board[Row-1-i][i] == Board[Row -1 - i-1][i + 1])
			count++;
		else
			break;
	}
	if (count == Row - 1 && Board[Row-1][0] != ' ')
	{
		return Board[Row-1][0];
	}

	//ƽ�֣�����Q,��������C
	count = 0;
	for (i = 0; i < Row; i++)
	{
		for (j = 0; j < Col; j++)
		{
			if (Board[i][j] == ' ')
				return 'C';
		}
	}
	return 'Q';
}
