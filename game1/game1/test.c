#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
// 测试三子棋游戏
void menu()
{
	printf("******************\n");
	printf("*****1.play  0.exit******\n");
	printf("******************\n");
}
//游戏的整个算法实现
void game()
{
	char ret = 0;
	//数组 --存放走出的棋盘信息
	char board[ROW][COL] = { 0 }; //全部空格,数值 0 被当作字符看待时，它代表的是空字符 '\0'，
	//而不是字符 '0'，当你使用 printf 函数以字符的形式（%c）来打印数值 0 时，
	// 屏幕上不会显示任何可见字符
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	// 下棋
	while (1)
	{
		// 玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		// 判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// 判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else 
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{

		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}

	}while (input);
}
int main()
{
	test();
	return 0;
}