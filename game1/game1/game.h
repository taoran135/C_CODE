#pragma once
#define  ROW 3
#define  COL 3
#include <stdio.h>
#include <stdlib.h> //����srand��rand---��������α�����
#include <time.h>

// ��������
void InitBoard(char board[ROW][COL],int row ,int col);
//��ά����int board[ROW][COL]��˵�������˻�Ϊint (*board)[COL]��Ҳ����ָ�����COL�������������ָ�롣
// ��ʱ���������������������������Ƕ��٣���ֻ֪��������COL��
//����Сд��row��col��Ϊ�����������Ϳ��Դ���ͬ��С�����飬����������ROW��COL������Ĺ̶���С
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

// ��������������Ϸ��״̬
// ���Ӯ --- '*'
// ����Ӯ --- '#'
// ƽ��  --- 'Q'
// ����  --- 'C'
char IsWin(char board[ROW][COL], int row, int col);