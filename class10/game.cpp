#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("+---+---+---+\n");
	for (i = 0; i < row; i++)
	{
		printf("|");
		for (j = 0; j < col; j++)
		{
			printf(" %c |", board[i][j]);
		}
		printf("\n+---+---+---+\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走:请输入>");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y>=1 && y <= col)
		{
			//判断是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else 
			{
				printf("坐标被占用，请重输\n");
			}
		}
		else
		{
			printf("不合法,请重输\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");
	while (1)
	{
		//随机一个坐标
		int x = rand() % row;
		int y = rand() % col;
		
		//判断是否被占用
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

// 0 棋盘未满 1棋盘已满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 1;
		}
	}
	return 0;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int ret = 0;
	//判断行数
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return board[i][1];
	}

	//判断列数
	for (i = 0; i < col; i++)
	{
	    if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
			return board[1][i];
	}

	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ');
	{
		return board[1][1];
	}

	//判断是否棋盘满了
	ret = IsFull(board, ROW, COL);
	if (ret==1)
		return 'Q';
	else
		return 'C';
}