
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
	//��ʼ������
	InitBoard(Board, ROW, COL);

	while (1)
	{
		//��ʼ������
		DisplayBoard(Board, ROW, COL);
		//�������
		PlayerMove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		//��������
		ComputerMove(Board, ROW, COL);
	}

	


}
int main()
{
	int input = 0;
	

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
