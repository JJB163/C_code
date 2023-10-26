#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include<stdio.h>
#include<assert.h>
//strtok切割字符串的函数
int main()
{
	char email[] = "zhangpengwei@bitejiuyeke.com";
	const char* sep = "@.";
	char cp[30] = { 0 };
	strcpy(cp, email);
	char* ret = NULL;
	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
	{
		printf("%s\n", ret);
	}
	return 0;
}
//各种类型内容的拷贝即memcpy函数的模拟
void* my_memcpy(void* dest, void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;

	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,9,10 };
	int arr2[10] = { 0 };
	my_memcpy(arr1+2, arr1,28);
	return 0;
}