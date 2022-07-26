#include "game.h"

//初始化棋盘
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


//打印棋盘函数
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

//玩家下子函数
void PlayerMove(char Board[ROW][COL], int Row, int Col)
{
	int i = 0;
	int j = 0 ;
	while (1)
	{
		printf("玩家下子，请输入坐标：");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
		{ 
			if (Board[i - 1][j - 1] == ' ')
			{
				Board[i - 1][j - 1] = '*';
				break;
			}
			else
				printf("坐标错误，请重新输入\n");
		}

	}

}

void ComputerMove(char Board[ROW][COL], int Row, int Col)
{
	int i = 0;
	int j = 0;
	printf("电脑下子\n");
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

//判断输赢平局函数
//1、玩家赢，返回'*'
//2、电脑赢，返回'#'
//3、平局，返回'Q'
//4、继续，返回'C’
char WhoWin(char Board[ROW][COL], int Row, int Col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	//1、每一行都相等
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

	//2、每一列相等
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
	//3、对角线相等
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

	//平局，返回Q,继续返回C
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
