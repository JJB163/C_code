#define _CRT_SECURE_NO_WARNINGS 1
#include"contact1.h"

void menu()
{
	printf("********************************\n");
	printf("*****1.add     2.del************\n");
	printf("*****3.search  4.modify*********\n");
	printf("*****5.show    6.sort***********\n");
	printf("*****7.exit    *****************\n");

}

int main()
{
	int input = 0;
	contact con;
	IntContact(&con);
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case1:
			add(&con);
			break;
		case2:
			del(&con);
			break;
		case3:
			search(&con);
			break;
		case4:
			modify(&con);
			break;
		case5:
			showcontact(&con);
			break;
		case6:
			sort(&con);
			break;
		case7:
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}


	} while (input);
	return 0;
}