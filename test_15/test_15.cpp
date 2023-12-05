#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int j = 0;
	int m = 0;
	int i = 0;
	int arr[100] = { 0 };
	int arr1[100] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	for (j = 0; j < n; j++)
	{
		if (j < n - m)
		{
			arr1[j + m] = arr[j];
		}
		else 
		{
			arr1[j+m-n] = arr[j];//注意是arr1[j+m-n]=arr[j]别写错名称，认真点
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}


int main()
{
	int c = 0;
	int i = 0;
	int arr[100] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
	int d = n;
	while (d> 1)
	{
		for (i = 0; i < n; i++)
		{
			if (arr[i] != 0)
			{
				c++;
			}
			if (c == 3)
			{
				arr[i] = 0;
				c = 0;
				d--;
			}
		}
		
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d\n", arr[i]);
		}
	}
	return 0;
}


int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	char arr[100] = { 0 };
	scanf("%d", &n);
	getchar();// 用于清除缓冲区中的换行符，不然enter键会被认为是字符
	for (i = 0; i < n; i++)//最好还是用forgets(arr,n+1,stdin )  n+多出的空间为\0预留一个空间
	{
		scanf("%c", &arr[i]);
	}
	scanf("%d", &m);
	if (m > n)//(防止m>n)要考虑周到
	{
		printf("输入错误\n");
	}
	else
	for (i = m-1; i < n; i++)
	{
		printf("%c", arr[i]);
	}
	
	return 0;
}











