#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//判断是否是有序序列
int main()
{
	int n = 0;
	int arr[50] = { 0 };
	scanf("%d", &n);
	int i = 0;
	int flag1 = 0;
	int flag2 = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] >= arr[i - 1])
			{
				flag1 = 1;
			}
			else
			{
				flag2 = 0;
			}
		}
	}
	if (flag1 + flag2 == 2)
	{
		printf("unsorted\n");
	}
	else
	{
		printf("sorted\n");
	}
	return 0;
}