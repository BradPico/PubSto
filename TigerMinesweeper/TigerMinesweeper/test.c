#include "game.h"

void choice()
{
	printf("******************************\n");
	printf("********   扫雷游戏   ********\n");
	printf("********   1.玩游戏   ********\n");
	printf("********   0.退出游戏 ********\n");
	printf("******************************\n");

}

void game()
{
	char mine[ROWS][COLS];
	char board[ROWS][COLS];
	//初始化棋盘,布雷盘全放0，扫雷盘全放*
	InitBoard(mine, ROWS,COLS,'0');
	InitBoard(board, ROWS, COLS, '*');
	//在布雷盘上布雷
	SetMine(mine, ROW, COL,MINENUM);

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(board, ROW, COL);



}

int main()
{
	int n;
	srand((unsigned int)time(NULL));
	do
	{
		choice();
		printf("请选择：");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			game();
		}break;
		case 0:
		{
			printf("游戏结束\n");
			break;
		}
		default:
			printf("选择错误，请重新选择\n");
		}


	} while (n);
	
	return 0;
	
}