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
	char mine[ROWS][COLS] = { 0 };//��Ų����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų��׵���Ϣ
	//mine��ʼ�������ݶ���'0'
	Intboard(mine, ROWS, COLS,'0');
	//show��ʼ�������ݶ���'*'
	Intboard(show, ROWS, COLS, '*');
	//������
	Setmine(mine, ROW, COL);
	//�㿪һƬ�Ĺ���
	autoUncover(mine, show, ROW,COL);
	//��ӡ
	//Display(mine, ROW, COL);
	Display(show, ROW, COL);
	//�Ų���
	Findmine(show, mine, ROW, COL);
}



int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
	return 0;
}




