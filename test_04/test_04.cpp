#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//题：输入123 输出：101 输入：2222 输出：0
int main()
{
	int input = 0;
	int sum = 0;
	scanf("%d", &input);
	int i = 0;
	while (input)
	{
	  int bit = input % 10;
	  if (bit % 2 == 1)
	  {
		  bit = 1;
	  }
	  else
	  {
		  bit = 0;
	  }
	  sum += bit * pow(10, i);
	  i++;
	  input /= 10;
	}
	printf("%d\n", sum);
	return 0;
}


//打印等边直角三角形
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0;j < n; j++)
		{
			if (i + j < n-1)
			{
				printf(" ");
			}
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}

//输入1000.0 11 11   1
//    价格   日期    优惠卷数量
int main()
{
	double price = 0.0;
	int m = 0;
	int d = 0;
	int flag = 0;
	scanf("%lf %d %d %d", &price, &m, &d, &flag);
	if (m == 11 && d == 11)
	{
		price = price * 0.7 - flag * 50;
	}
	else if (m == 12 && d == 12)
	{
		price = price * 0.8 - flag * 50;
	}
	if (price = 0.0)
	{
		printf("%.2lf", 0);
	}
	else
		printf("%.2lf", price);
	return 0;
}
