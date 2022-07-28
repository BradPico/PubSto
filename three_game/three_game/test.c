#include "game.h"


void menu(void)
{
	printf("*****************************\n");
	printf("*******     1.play     ******\n");
	printf("*******     0.exit     ******\n");
	printf("*****************************\n");
	return 0;
}
void game(void)
{
	
	char Board[ROW][COL];
	char Result = 'C';
	//初始化棋盘
	InitBoard(Board, ROW, COL);
	DisplayBoard(Board, ROW, COL);

	while ('C'==Result)
	{
		Result = WhoWin(Board, ROW, COL);
		if (Result != 'C')
		{
			break;
		}
		
		//玩家下子
		PlayerMove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		Result = WhoWin(Board, ROW, COL);
		if (Result != 'C')
		{
			break;
		}
		//电脑下子
		ComputerMove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		
	}
	if ('Q' == Result)
	{
		printf("平局!\n");
	}
	else if ('*' == Result)
	{
		printf("恭喜你，你赢了！\n");
	}
	else
		printf("电脑赢了！\n");

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
		{
			game();

		}
			break;
		case 0:
		{
			printf("退出游戏，游戏结束\n");
		}
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);
	
	return 0;
}
