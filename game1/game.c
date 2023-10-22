#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROL][COL], int rol, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rol; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘

void Displayboard(char board[ROL][COL], int rol, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rol; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//打印分割行
		if (i < rol - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}





void Playermove(char board[ROL][COL], int rol, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋:>\n");
	printf("请输入坐标:>\n");
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= rol && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用,不能下棋\n");
			}
		}
		//坐标合法范围的判断
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}




void Computermove(char board[ROL][COL], int rol, int col)
{
	printf("电脑下棋:>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % rol;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROL][COL], int rol, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rol; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}






char Iswin(char board[ROL][COL], int rol, int col)
{
	//行
	int i = 0;
	for (int i = 0; i < rol; i++)
	{
		char firstElement = board[i][0];
		if (firstElement != ' ')
		{
			int j = 0;
			for (j = 1; j < col; j++)
			{
				if (board[i][j] != firstElement)
				{
					break;
				}
			}
			if (j == col)
			{
				return firstElement;
			}
		}
	}
	//列
	int j = 0;
	for (int j = 0; j < col; j++)
	{
		char firstElement = board[0][j];
		if (firstElement != ' ')
		{
			int i = 0;
			for (i = 1; i < rol; i++)
			{
				if (board[i][j] != firstElement)
				{
					break;
				}
			}
			if (i == rol)
			{
				return firstElement;
			}
		}
	}
	//对角线
	char firstElement = board[0][0];
	if (firstElement != ' ')
	{
		int i;
		for (i = 1; i < rol; i++)
		{
			if (board[i][i] != firstElement)
			{
				break;
			}
		}
		if (i == rol)
		{
			return firstElement;
		}
	}

	firstElement = board[0][col - 1];
	if (firstElement != ' ')
	{
		int i;
		for (i = 1; i < rol; i++)
		{
			if (board[i][col - 1 - i] != firstElement)
			{
				break;
			}
		}
		if (i == rol)
		{
			return firstElement;
		}
	}


		
		//没有人赢 平局
		if (IsFull(board, rol, col))
		{
			return 'Q';//平局
		}
		return 'C';//继续
}