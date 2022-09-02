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
		printf("�����:������>");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y>=1 && y <= col)
		{
			//�ж��Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else 
			{
				printf("���걻ռ�ã�������\n");
			}
		}
		else
		{
			printf("���Ϸ�,������\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������:>\n");
	while (1)
	{
		//���һ������
		int x = rand() % row;
		int y = rand() % col;
		
		//�ж��Ƿ�ռ��
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

// 0 ����δ�� 1��������
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
	//�ж�����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return board[i][1];
	}

	//�ж�����
	for (i = 0; i < col; i++)
	{
	    if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
			return board[1][i];
	}

	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ');
	{
		return board[1][1];
	}

	//�ж��Ƿ���������
	ret = IsFull(board, ROW, COL);
	if (ret==1)
		return 'Q';
	else
		return 'C';
}