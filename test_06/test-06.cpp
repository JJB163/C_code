#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//×óÐý¶à¸ö×Ö·û
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}
struct point
{
	int x;
	int y;
};

struct point find_num(int arr[3][3], int r, int c, int k)
{
	int x = 0;
	int y = c - 1;
	struct point p = {-1,-1};
	while (x <= r - 1 && y >= 0)
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			p.x = x;
			p.y = y;
			return p;
		}
	}
	return p;
}


int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	struct point ret = find_num(arr, 3, 3, k);
	printf("%d %d\n", ret.x, ret.y);
	return 0;
}