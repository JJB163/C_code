#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;

//在C++中，push_back()是vector类的一个成员函数，用于在vector的尾部添加一个元素12。
//当你调用s.push_back(ops[i])时，你实际上是在vector对象s的尾部添加了一个新元素，该元素的值为ops[i]。
//int main()
//{
//	int flag=0, n;
//	cin >> n;
//	vector<string>ops(n),s;
//	string target;
//	for (int i = 0; i < n; i++)cin >> ops[i];
//	cin >> target;
//	for (int i = 0; i < n; i++)
//	{
//		if (target == ops[i])
//		{
//			s.push_back(ops[i]);
//			flag = 1;
//			break;
//		}
//		if (ops[i] == "return")s.pop_back();
//		else s.push_back(ops[i]);
//	}
//	if (flag)
//	{
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (i)cout << "->";
//			cout << s[i];
//		}
//		cout << endl;
//	}
//	else {
//		cout << "NOT REFERENCED" << endl;
//	}
//
//	return 0;
//}//栈应用：题一
//#include<queue>
//#include<cstdlib>
//int min_num(int a, int b, int c)
//{
//	if (a > b)swap(a, b);
//	if (a > c)swap(a, c);
//	return a;
//}

//if (a > b)swap(a, b); ：如果a的值大于b的值，那么就交换a和b的值。这样可以确保a不大于b。
//if (a > c)swap(a, c); ：如果交换后的a的值大于c的值，那么就交换a和c的值。这样可以确保a不大于c。

//int func(queue<int>que1, queue<int>que2, queue<int>que3)
//{
//	int ans = 0x3f3f3f;
//	while (!que1.empty() && !que2.empty() && !que3.empty())
//	{
//		int a = que1.front(), b = que2.front(), c = que3.front();
//		int tem_ans = abs(a - b) + abs(a - c) + abs(b - c);//abs()返回数的绝对值
//		if (tem_ans < ans)ans = tem_ans;
//		int d = min_num(a, b, c);
//		if (a == d)que1.pop();
//		if (b == d)que2.pop();
//		if (c == d)que3.pop();
//	}
//	return ans;
//}
//int main()
//{
//	int m, n, k, x;
//	queue<int>que1, que2, que3;
//	cin >> m >> n >> k;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> x;
//		que1.push(x);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x;
//		que2.push(x);
//	}
//	for (int i = 0; i < k; i++)
//	{
//		cin >> x;
//		que3.push(x);
//	}
//	cout << func(que1,que2, que3) << endl;
//	return 0;
/*}*///计算所有可能三元组（a,b,c）中的最小距离

//这段代码中的queue<int>que1, que2, que3;是在声明三个整数类型的队列que1、que2和que3。

//队列（queue）是一种特殊的线性表，它只允许在表的前端（front）进行删除操作，而在表的后端（back）进行插入操作。进行插入操作的端称为队尾，进行删除操作的端称为队头。队列中没有元素时，称为空队列。在队列这种数据结构中，最先插入的元素将是最先被删除的元素，因此队列又称为“先进先出”（FIFO—first in first out）的线性表12。
//
//在C++中，队列是一种容器适配器，它给予程序员一种先进先出（FIFO）的数据结构的功能。
//
//队列的主要操作有：
//
//push(g)：给队列添加一个元素，这个元素会被放在队列的尾部。
//pop()：删除队列的第一个元素。
//front()：返回队首元素。
//back()：返回队尾元素。
//empty()：如果队列为空则返回真（True）。
//size()：返回队列中元素的个数。

#include<stack>

//class Solution
//{
//public:
//	void pushstack(string& s, stack<char>& s1)
//	{
//		for (int i = 0; s[i]; i++)
//		{
//			if (s[i] == '#')
//			{
//				if(!s1.empty())s1.pop();
//			}
//			else s1.push(s[i]);
//		}
//	}
//	bool backspace(string s, string t)
//	{
//		stack<char>s1, s2;
//		
//		pushstack(s, s1);
//		pushstack(t, s2);
//		if (s1.size() != s2.size())return false;
//		while (!s1.empty())
//		{
//			if (s1.top() != s2.top())return false;
//			s1.pop(); s2.pop();
//		}
//		return true;
//	}
//};


bool isValid(int a[], int n)
{
	stack<int>s;
	int x = 1;
	for (int i = 1; i < n; i++)
	{
		if (s.empty() || s.top() < a[i])
		{
			while (x <= a[i])s.push(x); x += 1;
		}
		if (s.empty() || s.top() != a[i]) return false;
		s.pop();
	}return true;
}

int main()
{
	int n, a[25],cnt=20;
	cin >> n;
	for (int i = 0; i < n; i++)a[i]= i+1;
	do
	{
		if (isValid(a, n))
		{
			for (int i = 0; i < n; i++)
			{
				cout << a[i];
			}
			cout << endl;
			cnt -= 1;
		}

	} while (next_permutation(a, a + n)&&cnt);//该C++函数可以将数组中的数全排列 a首地址 a+n伪地址
	//第二个参数应该是一个指向你想要重新排列的序列结束位置的迭代器  头文件为#include <algorithm>
}//判断数列是否为合法的出栈序列；

