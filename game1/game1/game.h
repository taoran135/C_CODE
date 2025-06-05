#pragma once
#define  ROW 3
#define  COL 3
#include <stdio.h>
#include <stdlib.h> //引入srand及rand---用于生成伪随机数
#include <time.h>

// 函数声明
void InitBoard(char board[ROW][COL],int row ,int col);
//二维数组int board[ROW][COL]来说，它会退化为int (*board)[COL]，也就是指向包含COL个整数的数组的指针。
// 此时，函数并不清楚数组的行数具体是多少，它只知道列数是COL。
//采用小写的row和col作为参数，函数就可以处理不同大小的数组，而不局限于ROW和COL所定义的固定大小
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

// 告诉我们四种游戏的状态
// 玩家赢 --- '*'
// 电脑赢 --- '#'
// 平局  --- 'Q'
// 继续  --- 'C'
char IsWin(char board[ROW][COL], int row, int col);