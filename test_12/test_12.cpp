#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>


//冒泡排序
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	int ret = 0;
	int n = 0;
	int j = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1-i; j++)
		{

			if (arr[j] > arr[j + 1])
			{
				ret = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ret;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

int main()
{
	int i = 0;
	int j = 0;
	int arr[3][3] = { 0 };
	int ret = 0;
	int sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
			if (i == j)
			{
				ret += arr[i][j];
			}
			if (i + j == 2)
			{
				sum += arr[i][j];
			}
		}
	}
	printf("%d %d\n", ret, sum);

	return 0;
}

//已有一个已正序排好的9个元素的数组，今输入一个数要求按原来排序的规律将它插入数组中。
int main()
{
	int i = 0;
	int arr[4] = { 0 };
	int input = 0;
	int n = 4;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &input);
	for (i = 0; i < n ; i++)
	{
		if (input > arr[i])
		{
			printf("%d\n", arr[i]);
		}
		if (input <= arr[i])
		{
			j = i;
			printf("%d\n", input);
			for (j; j< n; j++)
			{
				printf("%d\n", arr[j]);
			}
			break;
		}
	}


	return 0;
}

int main()
{
	int i = 0;
	int arr[3] = { 0 };
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 2; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//共轭复根
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	double x1 = 0;
	double x2 = 0;
	scanf("%d%d%d", &a, &b, &c);
	double delta = b * b - 4 * a * c;
	if (delta>0)
	{
		x1 = (-b + sqrt(delta)) / (2.0 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);

		printf("x1=%lf x2=%lf\n", x1, x2);
	}
	else if (delta == 0)
	{
		printf("x1=x2=%lf\n",(double) - b / 2 * a);
	}
	else
	{
		double m, n;    //因为是共轭复根，定义两个变量 
		m = (-b) / (2.0 * a);
		n = sqrt(-delta) / (2 * a);
		printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi\n", m, n, m, n);
	}

	return 0;
}







