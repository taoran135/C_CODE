#define _CRT_SECURE_NO_WARNINGS
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

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//1.打印一行的数据
//		printf(" %c | %c | %c \n",board[i][0], board[i][1], board[i][2]);
//		//2.打印分割行
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//		
//	}
//}

//优化
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1.打印一行的数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1) 
			{
				printf("|");

			}		
		}
		printf("\n");
		//2.打印分割行
			if (i < row - 1)
			{
				for (j = 0; j < col; j++)
				{
					printf("---");
					if (j < col - 1)
					{
					    printf("|");

					}		
				}	
			}
			printf("\n");	

	}
}
// 清空输入缓冲区
void clear_input_buffer() {
	while (getchar() != '\n');
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	
	while (1)
	{

		printf("请输入要下的坐标:>");
		if (scanf("%d %d", &x, &y) != 2) 
			//scanf 是 C 语言中用于从标准输入读取格式化数据的函数。
			// 它的返回值是成功匹配并赋值的输入项数量
		{
			// 处理非数字输入
			printf("输入无效，请输入两个整数！\n");
			clear_input_buffer();; // 清除输入缓冲区
			continue;
		}
		//判断x，y坐标的合法性
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}

		}
		else
		{
			printf("坐标非法，请重新输入！\n");

		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	
	while (1)
	{
		x = rand() % row; // 结果 0，1，2
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}
// 返回1，表示棋盘满了
// 返回0，表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col)
{ 
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0; // 没满
			}

		}
	}
		return 1; // 满了
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	// 横三行
	for (i = 0; i < row; i++)
	{
		if ((board[i][0] == board[i][1]) && (board[i][0] == board[i][2]) && (board[i][0] != ' ')) 
		{
			return board[i][0];
		}
	}
	// 竖三列
	for (i = 0; i < col; i++)
	{
		if ((board[0][i] == board[1][i]) && (board[0][i] == board[2][i]) && (board[0][i] != ' '))
		{
			return board[0][i];
		}
	}
	// 两个对角线
	if ((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]) && (board[0][0] != ' '))
	{
		return board[0][0];
	}
	if ((board[2][0] == board[1][1]) && (board[2][0] == board[0][2]) && (board[2][0] != ' '))
	{
		return board[2][0];
	}
	// 判断是否平局
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}