#define _CRT_SECURE_NO_WARNINGS 1
#include "game2.h"

void menu()
{
	printf("*******************\n");
	printf("*****1. play  *****\n");
	printf("*****0. exit  *****\n");
	printf("*******************\n");
}



void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查雷的信息
	//mine初始化的内容都是'0'
	Intboard(mine, ROWS, COLS,'0');
	//show初始化的内容都是'*'
	Intboard(show, ROWS, COLS, '*');
	//布置雷
	Setmine(mine, ROW, COL);
	//点开一片的功能
	autoUncover(mine, show, ROW,COL);
	//打印
	//Display(mine, ROW, COL);
	Display(show, ROW, COL);
	//排查雷
	Findmine(show, mine, ROW, COL);
}



int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
		}
	} while (input);
	return 0;
}




