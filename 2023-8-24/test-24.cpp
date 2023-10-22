#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int k = 0;
//	int ret = 1;
//	int i = 0;
//	int arr[] = { 0 };
//	printf("请输入元素");
//	scanf("%d", &arr);
//	int a = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入k值");
//	scanf("%d", &k);
//
//	for (i = 0; i<3; i++)
//	{
//		ret *= arr[i];
//	}
//	printf("%d\n", ret % k);
//	return 0;
//}

//int main() {
//    int k;
//    int ret = 1;  // 初始值应该为1，因为后面是累乘操作
//    int n;
//
//    scanf("%d %d", &n, &k);
//
//    int arr[n];  // 根据n定义数组
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    for (int i = 0; i < n; i++) {
//        ret = (ret * arr[i]) % k;  // 每次都取模
//    }
//
//    printf("%d\n", ret);
//
//    return 0;
//int main()
//{
//	int k = 0;
//	int ret = 1;
//	int i = 0;
//	int arr[3]; // 假设数组大小最大为100
//
//	printf("请输入元素个数：");
//	int a;
//	scanf("%d", &a);
//
//	printf("请输入元素：");
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	printf("请输入k值：");
//	scanf("%d", &k);
//
//	for (i = 0; i < a; i++)
//	{
//		ret *= arr[i];
//	}
//	printf("%d\n", ret % k);
//
//	return 0;
//}




//int main()
//{
//	int day = 0;
//	int meter = 10;
//	int x = 0;
//	while (meter > x)
//	{
//		day++;
//		x += 1;
//		x = (x / meter) * (meter + 10);
//		meter += 10;
//		if (meter <= x)
//			break;
//	}
//	printf("%d\n", day);
//	return 0;
//}

//int zong(int n)
//{
//    if (n <= 4)
//    {
//        return n;
//    }
//    else
//    {
//        return zong(n - 1) + zong(n - 3);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    printf("请输入第n年: ");
//    if (scanf("%d", &n) != 1)
//    {
//        printf("输入错误\n");
//        return 1;
//    }
//    int sum = zong(n);
//    printf("%d年时共有%d头母牛\n", n, sum);
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) >= 0 && a <= 100)
//    {
//
//        if (a >= 90)
//        {
//            printf("%c\n", 'A');
//        }
//        else if (a >= 80 && a <= 89)
//        {
//            printf("%c\n", 'B');
//        }
//        else if (a >= 70 && a <= 79)
//        {
//            printf("%c\n", 'C');
//        }
//        else if (a >= 60 && a <= 69)
//        {
//            printf("%c\n", 'D');
//        }
//        else
//        {
//            printf("%c\n", 'E');
//        }
//    }
//    return 0;
//}
//#include <string.h>
//int main()
//{
//    char arr[200] = { 0 };
//    fgets(arr, sizeof(arr), stdin);
//    int n = strlen(arr);
//    int i = 0;
//    int count = 0;
//    int space = 0;
//    int number = 0;
//    int other = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
//        {
//            count++;
//        }
//        if (arr[i] == ' ')
//        {
//            space++;
//        }
//        if (arr[i] >= '0' && arr[i] <= '9')
//        {
//            number++;
//        }
//    }
//    other = n - count - space - number;
//    printf("%d %d %d %d\n", count, space, number, other);
//    return 0;
//}

#include <stdio.h>
#include <string.h>

//int main()
//{
//    char arr[200] = { 0 };
//    fgets(arr, sizeof(arr), stdin);
//
//    // 检查字符串结尾是否是换行符，如果是就将其替换为字符串结束符
//    size_t len = strlen(arr);
//    if (len > 0 && arr[len - 1] == '\n') {
//        arr[len - 1] = '\0';
//    }
//
//    int n = strlen(arr);
//    char* i = arr;
//    int count = 0;
//    int space = 0;
//    int number = 0;
//    int other = 0;
//    while (*i != '\0')
//    {
//       
//        if (*i >= 'a' && *i <= 'z' || *i >= 'A' && *i <= 'Z')
//        {
//            count++;
//        }
//        else if (*i == ' ')
//        {
//            space++;
//        }
//        else if (*i >= '0' && *i <= '9')
//        {
//            number++;
//        }
//        else
//            other++;
//        i++;
//    }
//
//    //for (i = 0; i < n; i++)
//    //{
//    //    if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
//    //    {
//    //        count++;
//    //    }
//    //    if (arr[i] == ' ')
//    //    {
//    //        space++;
//    //    }
//    //    if (arr[i] >= '0' && arr[i] <= '9')
//    //    {
//    //        number++;
//    //    }
//    //}
//    //other = n - number - space - count;
//    printf("%d %d %d %d\n", count, space, number, other);
//    return 0;
//}
////int ji(int x)
////{
////	if (x == 1)
////	{
////		return 1;
////	}
////	else
////		return x * ji(x - 1);
////}
////
////int main()
////{
////	int i = 0;
////	int n = 0;
////	int sum = 0;
////	scanf("%d", &n);
////	for (i = 1; i <= n; i++)
////	{
////		sum += ji(i);
////	}
////	printf("%d\n", sum);
////
////	return 0;
//int chuan(int* y)
//{
//    // 函数体...
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	int a = 2;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int jie(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	return x * jie(x - 1);
//}
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = jie(i);
//		//ret = 1;
//		//for (j = 1; j <=i; j++)
//		//{
//		//	ret *= j;//每次这个值会变，所以得重新赋值为一
//		//}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
#include<math.h>
double zong(int x, int y, int z)
{
	int i = 0;
	int ret = 0;
	for (i = 1; i <= x; i++)
	{
		ret += i;
	}
	int j = 0;
	int zet = 0;
	for (j = 1; j <= y; j++)
	{
		zet += pow(j, 2);
	}
	int r = 0;
	float wet = 0;
	for (r = 1; r <= z; r++)
	{
		wet += pow(r, -1);
	}
	double sum = ret + zet + wet;
	return sum;
}
int main()
{
	int n = 0;
	int m = 0;
	int j = 0;
	double sum = 0;
	scanf("%d %d %d", &n, &m, &j);
	sum = zong(n, m, j);
	printf("%.2lf\n", sum);
	return 0;
}