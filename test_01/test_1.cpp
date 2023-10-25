#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//比较字符串大小的代码，模拟assert函数
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return *str1 - *str2;
}


int main()
{
	char arr1[] = "zhangsan";
	char arr2[] = "zhangsanfeng";
	int ret = 0;
	ret = my_strcmp(arr1, arr2);
	if (ret > 0)
	{
		printf(">");
	}
	else if (ret < 0)
		printf("<");
	else
		printf("=");

	return 0;
}


//找字符串
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1 = p;//是吧p的值赋给s1而不是把s1的值赋给p不然会死循环
		s2 = str2;
		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return(char*)p;
		}
		p++;
	}
	return NULL;
}

int main()
{
	//找字符串代码模拟
	char emial[] = "abcc";
	char substr[] = "bcc";
	char* ret = my_strstr(emial, substr);
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s", ret);
	}
	return 0;
}
