#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("************************\n");
	printf("******1. piay  0. exit**\n");
	printf("************************\n");

		
}
void game()
{
	char ret = 0;
	char board[ROL][COL] = { 0 };
	//初始化棋盘
	InitBoard(board,ROL,COL);
	//打印棋盘
	Displayboard(board, ROL, COL);
	while (1)
	{
		//玩家下棋
		Playermove(board, ROL, COL);
		//判断输赢
		ret = Iswin(board, ROL, COL);//要利用Iswin的返回值，返回值为字符，所以用char类型
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROL, COL);
		//电脑下棋
		Computermove(board, ROL, COL);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROL, COL);
	}
	//判断输赢
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
	Displayboard(board, ROL, COL);
}



int main()
{
	srand((unsigned int)time(NULL));//设置随机数的生成
	int input = 0;
	//打印菜单
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}