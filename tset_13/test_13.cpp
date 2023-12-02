#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n = 0;
	int a = 0; 
	int ret = 1;
	scanf("%d", &a);
	if (a<2)
	{
		printf("%d不是素数\n",a);
	}
	else if (a == 2 || a % 2 != 0)
	{
		for (n = 2; n <= a / 2; n++)
		{
			if (a % n == 0)
			{
				ret = 0;
				break;
			}

		}
		if (ret)
		{
			printf("%d是素数\n", a);
		}
		else
		{
			printf("%d不是素数\n", a);
		}
		
	}
	
	return 0;
}

int main()
{
	int arr[3][3] = { 0 };
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}


	

	return 0;
}
// 
// 
// 
//C语言中，有多种函数可以用来读取字符串，例如 scanf()、gets()、fgets()、readline() 等。
//它们各有各的特点和用法，我会简单地介绍一下。
//
//- scanf() 是通用的输入函数，它可以读取多种类型的数据，包括字符串。它的用法是 scanf("%s", str); 
//，其中 str 是一个已经定义好的字符数组名，不用加& 符号，因为数组名本身就代表数组的起始地址。
//scanf() 读取字符串时，以空格为分隔，遇到空格就认为当前字符串结束了，所以无法读取含有空格的字符串。
//- gets() 是专用的字符串输入函数，它的用法是 gets(str); 
//其中 str 也是一个已经定义好的字符数组名。gets() 认为空格也是字符串的一部分，只有遇到回车键时才认为字符串输入结束，
//所以，不管输入了多少个空格，只要不按下回车键，对 gets() 来说就是一个完整的字符串。
//也就是说，gets() 能读取含有空格的字符串，而 scanf() 不能。¹
//- fgets() 也是专用的字符串输入函数，它的用法是 fgets(str, n, stdin); 
//其中 str 是一个已经定义好的字符数组名，n 是一个整数，表示要读取的字符个数，stdin 表示从标准输入读取。
//fgets() 也能读取含有空格的字符串，但是它会把回车键也作为字符串的一部分，存入数组中。
//另外，fgets() 会在读取到 n - 1 个字符或者遇到回车键时停止读取，所以它可以避免数组越界的问题，比 gets() 更安全。
//- readline() 是一个非标准的函数，它的用法是 readline(NULL); 
//它会返回一个指向动态分配的字符串的指针，这个字符串包含了用户输入的内容，不包括回车键。
//readline() 也能读取含有空格的字符串，而且它具有自动补全和历史记录的功能，比较方便。
//但是 readline() 不是 C 语言自带的函数，需要安装 readline 库才能使用，而且使用 readline() 读取的字符串，
//
//需要手动释放内存，否则会造成内存泄漏。⁴



int main()
{
	char ret = 0;
	int left = 0;
	int i = 0;
	char arr[100] = {0};
	scanf("%s", arr);
	int length = strlen(arr);
	int right = length-1;
	while (left < right)
	{
		ret = arr[left];
		arr[left] = arr[right];
		arr[right] = ret;
		left++;
		right--;
	}
	printf("%s\n", arr);
	return 0;
}

int main()
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	scanf("%s", arr1);
	scanf("%s", arr2);
	strcat(arr1, arr2);//将后一个字符串链接到前一个字符串的函数
	puts(arr1);//puts()函数是一个用于输出字符串的函数
	return 0;
}
