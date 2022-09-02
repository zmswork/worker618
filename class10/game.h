#pragma once
//头文件包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)
#pragma warning(disable:6031)

//符号的定义
#define ROW 3
#define COL 3

// initBoard 初始化棋盘
void InitBoard(char board[ROW][COL], int row,int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[][COL], int row, int col);

//判断输 or 赢
// * 玩家赢 # 电脑赢 Q 平局 C继续
char IsWin(char board[ROW][COL], int row, int col);