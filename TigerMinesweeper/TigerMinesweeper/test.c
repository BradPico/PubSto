#include "game.h"

void choice()
{
	printf("******************************\n");
	printf("********   ɨ����Ϸ   ********\n");
	printf("********   1.����Ϸ   ********\n");
	printf("********   0.�˳���Ϸ ********\n");
	printf("******************************\n");

}

void game()
{
	char mine[ROWS][COLS];
	char board[ROWS][COLS];
	//��ʼ������,������ȫ��0��ɨ����ȫ��*
	InitBoard(mine, ROWS,COLS,'0');
	InitBoard(board, ROWS, COLS, '*');
	//�ڲ������ϲ���
	SetMine(mine, ROW, COL,MINENUM);

	//��ӡ����
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
		printf("��ѡ��");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			game();
		}break;
		case 0:
		{
			printf("��Ϸ����\n");
			break;
		}
		default:
			printf("ѡ�����������ѡ��\n");
		}


	} while (n);
	
	return 0;
	
}