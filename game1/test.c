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
	//��ʼ������
	InitBoard(board,ROL,COL);
	//��ӡ����
	Displayboard(board, ROL, COL);
	while (1)
	{
		//�������
		Playermove(board, ROL, COL);
		//�ж���Ӯ
		ret = Iswin(board, ROL, COL);//Ҫ����Iswin�ķ���ֵ������ֵΪ�ַ���������char����
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROL, COL);
		//��������
		Computermove(board, ROL, COL);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROL, COL);
	}
	//�ж���Ӯ
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	Displayboard(board, ROL, COL);
}



int main()
{
	srand((unsigned int)time(NULL));//���������������
	int input = 0;
	//��ӡ�˵�
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}