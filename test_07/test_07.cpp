#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}



int main()
{
	char arr[10][10];
	int i = 0;
	int j = 0;
	int n = 0;
	int flag = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);

		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				flag = 0;
				goto end;
			}
		}
	}

end:
	if (flag == 0)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES");
	}

	return 0;
}