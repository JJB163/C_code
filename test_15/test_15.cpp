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
			arr1[j+m-n] = arr[j];//ע����arr1[j+m-n]=arr[j]��д�����ƣ������
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
	getchar();// ��������������еĻ��з�����Ȼenter���ᱻ��Ϊ���ַ�
	for (i = 0; i < n; i++)//��û�����forgets(arr,n+1,stdin )  n+����Ŀռ�Ϊ\0Ԥ��һ���ռ�
	{
		scanf("%c", &arr[i]);
	}
	scanf("%d", &m);
	if (m > n)//(��ֹm>n)Ҫ�����ܵ�
	{
		printf("�������\n");
	}
	else
	for (i = m-1; i < n; i++)
	{
		printf("%c", arr[i]);
	}
	
	return 0;
}











