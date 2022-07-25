
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
	//初始化棋盘
	InitBoard(Board, ROW, COL);

	while (1)
	{
		//初始化棋盘
		DisplayBoard(Board, ROW, COL);
		//玩家下子
		PlayerMove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		//电脑下子
		ComputerMove(Board, ROW, COL);
	}

	


}
int main()
{
	int input = 0;
	

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
