#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"
void Intboard(char mine[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			mine[i][j] = set;
		}
	}
}


void Display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------扫雷游戏-------\n");
	for (j = 0; j <= row; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------扫雷游戏-------\n");
}



void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			ret += mine[x+i][y+j]-'0';
		}
	}
		return ret;
}




void Findmine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				Display(mine, ROW, COL);
				break;
			}
			else
			{
				int count = get_mine_count(mine,show, x, y);
				show[x][y] = count + '0';
				Display(show, ROW, COL);
			}

		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
}
void autoUncover(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x < 1 || x > ROW || y < 1 || y > COL || show[x][y] != '*')
		return;

	int i, j;
	int count = 0;

	for (i = -1; i <= 1; i++) 
	{
		for (j = -1; j <= 1; j++) 
		{
			if (mine[x + i][y + j] == '1')
				count++;
		}
	}

	if (count > 0)
	{
		show[x][y] = count + '0';
	}
	else 
	{
		show[x][y] = ' ';
		for (i = -1; i <= 1; i++) 
		{
			for (j = -1; j <= 1; j++) 
			{
				autoUncover(mine, show, x + i, y + j);
			}
		}
	}
}


