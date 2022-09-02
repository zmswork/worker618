#include "game.h"


void menu()
{
	printf("****************\n");
	printf("**** 1.play ****\n");
	printf("**** 0.exit ****\n");
	printf("****************\n");
}

void game()
{
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);

	srand((unsigned int)time(NULL));
	char ret = 0;
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж��� or Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
			break;
	}
	if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == '#')
		printf("����Ӯ��\n");
	else if(ret == 'Q')
		printf("ƽ�� %c\n",ret);
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int input = 0;
	do 
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit!!!\n");
			break;
		default:
			printf("�����������������\n");
			scanf("%d", &input);
		}

	} while (input);
	return 0;
}