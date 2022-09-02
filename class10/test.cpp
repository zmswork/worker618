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
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);

	srand((unsigned int)time(NULL));
	char ret = 0;
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输 or 赢
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
			break;
	}
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else if(ret == 'Q')
		printf("平局 %c\n",ret);
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int input = 0;
	do 
	{
		menu();
		printf("请输入:>");
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
			printf("输入错误，请重新输入\n");
			scanf("%d", &input);
		}

	} while (input);
	return 0;
}