#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;

//��C++�У�push_back()��vector���һ����Ա������������vector��β�����һ��Ԫ��12��
//�������s.push_back(ops[i])ʱ����ʵ��������vector����s��β�������һ����Ԫ�أ���Ԫ�ص�ֵΪops[i]��
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
//}//ջӦ�ã���һ
//#include<queue>
//#include<cstdlib>
//int min_num(int a, int b, int c)
//{
//	if (a > b)swap(a, b);
//	if (a > c)swap(a, c);
//	return a;
//}

//if (a > b)swap(a, b); �����a��ֵ����b��ֵ����ô�ͽ���a��b��ֵ����������ȷ��a������b��
//if (a > c)swap(a, c); ������������a��ֵ����c��ֵ����ô�ͽ���a��c��ֵ����������ȷ��a������c��

//int func(queue<int>que1, queue<int>que2, queue<int>que3)
//{
//	int ans = 0x3f3f3f;
//	while (!que1.empty() && !que2.empty() && !que3.empty())
//	{
//		int a = que1.front(), b = que2.front(), c = que3.front();
//		int tem_ans = abs(a - b) + abs(a - c) + abs(b - c);//abs()�������ľ���ֵ
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
/*}*///�������п�����Ԫ�飨a,b,c���е���С����

//��δ����е�queue<int>que1, que2, que3;�������������������͵Ķ���que1��que2��que3��

//���У�queue����һ����������Ա���ֻ�����ڱ��ǰ�ˣ�front������ɾ�����������ڱ�ĺ�ˣ�back�����в�����������в�������Ķ˳�Ϊ��β������ɾ�������Ķ˳�Ϊ��ͷ��������û��Ԫ��ʱ����Ϊ�ն��С��ڶ����������ݽṹ�У����Ȳ����Ԫ�ؽ������ȱ�ɾ����Ԫ�أ���˶����ֳ�Ϊ���Ƚ��ȳ�����FIFO��first in first out�������Ա�12��
//
//��C++�У�������һ�����������������������Աһ���Ƚ��ȳ���FIFO�������ݽṹ�Ĺ��ܡ�
//
//���е���Ҫ�����У�
//
//push(g)�����������һ��Ԫ�أ����Ԫ�ػᱻ���ڶ��е�β����
//pop()��ɾ�����еĵ�һ��Ԫ�ء�
//front()�����ض���Ԫ�ء�
//back()�����ض�βԪ�ء�
//empty()���������Ϊ���򷵻��棨True����
//size()�����ض�����Ԫ�صĸ�����

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

	} while (next_permutation(a, a + n)&&cnt);//��C++�������Խ������е���ȫ���� a�׵�ַ a+nα��ַ
	//�ڶ�������Ӧ����һ��ָ������Ҫ�������е����н���λ�õĵ�����  ͷ�ļ�Ϊ#include <algorithm>
}//�ж������Ƿ�Ϊ�Ϸ��ĳ�ջ���У�

