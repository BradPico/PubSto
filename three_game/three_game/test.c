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
	//��ʼ������
	InitBoard(Board, ROW, COL);
	DisplayBoard(Board, ROW, COL);

	while ('C'==Result)
	{
		Result = WhoWin(Board, ROW, COL);
		if (Result != 'C')
		{
			break;
		}
		
		//�������
		PlayerMove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		Result = WhoWin(Board, ROW, COL);
		if (Result != 'C')
		{
			break;
		}
		//��������
		ComputerMove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		
	}
	if ('Q' == Result)
	{
		printf("ƽ��!\n");
	}
	else if ('*' == Result)
	{
		printf("��ϲ�㣬��Ӯ�ˣ�\n");
	}
	else
		printf("����Ӯ�ˣ�\n");

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��>");
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
			printf("�˳���Ϸ����Ϸ����\n");
		}
			break;
		default:
			printf("�����������������\n");
		}
	} while (input);
	
	return 0;
}
