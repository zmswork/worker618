#pragma once
//ͷ�ļ�����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)
#pragma warning(disable:6031)

//���ŵĶ���
#define ROW 3
#define COL 3

// initBoard ��ʼ������
void InitBoard(char board[ROW][COL], int row,int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[][COL], int row, int col);

//��������
void ComputerMove(char board[][COL], int row, int col);

//�ж��� or Ӯ
// * ���Ӯ # ����Ӯ Q ƽ�� C����
char IsWin(char board[ROW][COL], int row, int col);