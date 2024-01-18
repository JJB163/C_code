#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<time.h>
//c++风格的字符串需要包含的头文件
//int main()
//{
//	cout << "helle world" << endl;//打印
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	string str = "hello world";//字符串
//	cout << str << endl;
//	cout << "a=" <<a+2 << endl;//打印数字类似于printf("%d\n",a);
//	system("pause");
//	return 0;
//}



//bool类型代表真或假实质是1和0且占一个字节大小
//示例：
//int main()
//{
//	bool flag = true;
//	cout << flag << endl;
//	flag = false;//代表是假
//	cout << "bool类型所占空间大小：" << sizeof(bool) << endl;
//	system("pause");
//	return 0;
//}

//数据的输入：作用用于键盘数据的获取
//关键字：cin
//语法：cin<<变量
//示例：
//int main()
//{
//	//1.给整值赋值
//	int a = 0;
//	cout << "给a赋值：" << endl;
//	cin >> a;
//	cout << "a的值：" << a << endl;
//	string str;//str不能直接赋值为整形这个是字符串类型别搞错了
//	cout << "请给str赋值：" << endl;
//	cin >> str;
//	cout << "str=" << str << endl;
//	float b= 3.145;
//	cout << "请给b赋值" << endl;
//	cin >> b;
//	cout << "b=" << b << endl;//cout << "b=" << fixed << setprecision(1) << b << endl;可将打印的浮点数保留一位小数
//	system("pause");         //头文件需要：#include <iomanip> // 引入setprecision
//	return 0;
//	//两个小数是不可以进行取模运算的
//	//a=10; b=20; cout<<(a==b)<<endl;输出0如果为真则为1
//}


//int main()
//{
//	int a = 10;
//	cout << !a << endl;//!为非即否定让a变为假（真变假，假变真）
//	system("pause");
//	return 0;
//}

//三目运算符：表达式1？表达式2：表达式3
//1为真执行表达式2并返回表达式2的结果
//1为假执行表达式3并返回表达式3的结果

//示例
//int main()
//{
//	bool a = 1;
//	a ? cout << "正确" << endl : cout << "错误" << endl;
//	system("pause");
//	return 0;
//}


//rand()%100系统随机生成0到99的数
//srand((unsigned int)time(NULL))时间戳根据系统时间生成随机数 包含头文件#include<ctime>


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cout << i<<" "<<i+1;//可以这样打印数字和空格
//		cout << endl;//打印空格
//	}
//	system("pause");
//	return 0;
//}


//continue作用是如果条件满足则不执行下面的程序
//goto语句无条件跳转语句
//goto flag    
//flag:(要加冒号) 跳转到这里

//#include<vector>
//int arr[10];
//void print_one_result(int n)
//{
//	for(int i=0;i<=n;i++)
//	{ 
//		if (i)cout << " ";
//		cout << arr[i];
//
//	}
//	cout << endl;
//	return;
//}
//void f(int i, int j, int n)
//{
//	if (j > n)
//	{
//		return;
//	}
//	for (int k = j; j <= n; j++)
//	{
//		arr[i] = j;
//		print_one_result(i);
//		f(i + 1, j + 1, n);
//	}
//	return;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	f(0, 1, n);
//	system("pause");
//	return 0;
//}//船长第四节课
//int arr[10];
//void print_one(int m)
//{
//	for (int n = 0; n < m; n++)
//	{
//		if (n)cout << " ";
//		cout << arr[n];
//	}
//	cout << endl;
//	return;
//}
//void f(int i, int j, int n, int m)
//{
//	if (i == m)
//	{
//		print_one(m);
//		return;
//	}
//	for (int k = j; k <= n && m-1-i <=n-k; k++)
//	{
//		arr[i] = k;
//		f(i + 1, k + 1, n, m);
//	}
//	return;
//}
//
//int main()
//{
//	int n=0, m=0;
//	cin >> n >> m;
//	f(0, 1, n, m);
//	system("pause");
//	return 0;
//}//船长第五节课

//int arr[10], vis[10] = { 0 };
//void print_one(int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (i)cout << " ";
//		cout << arr[i];
//	}
//	cout << endl;
//	return;
//}
//void f(int i,int n)
//{
//	if (i == n)
//	{
//		print_one(n);
//		return;
//	}
//	for (int k = 1; k <= n; k++)
//	{
//		if (vis[k])continue;
//		arr[i] = k;
//		vis[k] = 1;
//		f(i + 1, n);
//		vis[k] = 0;
//	}
//	return;
//}//船长第六课
//
//
//int main()
//{
//	int n=0;
//	cin >> n;
//	f(0, n);
//	system("pause");
//	return 0;
//}




//typedef struct vector
//{
//	int count, size;
//	int* data;
//
//}vector;
//vector* getnewvector(int n)
//{
//	vector* p = (vector*)malloc(sizeof(vector));
//	p->count = 0;
//	p->size = n;
//	p->data = (int*)malloc(sizeof(int) * n);
//	return p;
//}
//int expand(vector* v)//扩容区域
//{
//	if (v == NULL)return 0;
//	printf("expand v from %d to %d\n ", v->size, 2 * v->size);
//	int*p= (int*)realloc(v->data, sizeof(int) * v->size * 2);//修改后解决了bug
///*	v->data = (int*)realloc(v->data, sizeof(int) * v->size * 2);*///重新分配空间输入扩容对象地址，和扩容的大小两个元素
//                                                             //有bug防止因为找不到空间返回NULL而覆盖掉data的原地址
//	if (p == NULL)return 0;
//	v->data = p;
//	return 1;
//}
//
//int insert(vector* v, int pos, int val)
//{
//	if (pos<0 || pos>v->count)return 0;
//	if (v->count == v->size&&!expand(v))return 0;
//	for (int i = v->count - 1; i >= pos; i--)
//	{
//		v->data[i + 1] = v->data[i];
//	}
//	v->data[pos] = val;
//	v->count += 1;
//	return 1;
//}
//int delet(vector* v, int pos)
//{
//	if (pos<0 || pos>=v->count)return 0;
//	for (int i = pos + 1; i < v->count; i++)
//	{
//		v->data[i - 1] = v->data[i];
//	}
//	v->count -= 1;
//	return 1;
//
//}
//
//void clear(vector* v)
//{
//	if (v == NULL)return;
//	free(v->data);
//	free(v);
//	return;
//	
//}
//void output(vector* v)
//{
//	printf("\n\n");
//	int len = 0;
//	for (int i = 0; i < v->size; i++)
//	{
//		len += printf("%3d", i);
//	}
//	printf("\n");
//	for (int i = 0; i < len; i++)printf("-");
//	printf("\n");
//	for (int i = 0; i < v->count; i++)
//	{
//		printf("%3d", v->data[i]);
//	}
//	printf("\n");
//	printf("\n\n");
//	return;
//}
//	
//#include<time.h>
//int main()
//{
//	srand(time(0));
//#define max 20
//	vector* v = getnewvector(max);
//	for (int i = 0; i < max; i++)
//	{
//		int op = rand() % 4,pos,val,ret;
//		switch (op)
//		{
//		case 0:
//		case 1:
//		case 2:
//			pos = rand() % (v->count + 2);
//			ret = insert(v, pos, val);
//			val = rand() % 100;
//			printf("insert %d at %d to vector=%d\n",val,pos,ret);
//			break;
//		case 3:	
//			pos = rand() % (v->count + 2);
//			ret = delet(v, pos);
//			printf("delet item at %d in vector=%d\n", pos, ret);
//		}
//		output(v);
//	}
//	clear(v);
//	return 0;
//}


//#define DL 3
//#define STR_(n) #n
//#define STR(n) STR_(n)
//#define DIGIT_LEN_STR(n) "%" STR(n) "d"
////在这个修改中，STR(n)被定义为STR_(n)，而STR_(n)被定义为#n。
////当STR(DL)被预处理器处理时，DL首先被替换为3，然后STR_(3)被替换为"3"。
////这样，DIGIT_LEN_STR(DL)的结果就是"%3d"，符合预期。
//
//#include<time.h>
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//Node* getnewNode(int val)
//{
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = val;
//	p->next = NULL;
//	return p;
//}
//
//
//void clear(Node* head)
//{
//	if (head == NULL)return ;
//	for (Node* p = head, *q; p; p = q)
//	{
//		q = p->next;
//		free(p);
//	}
//	return;
//}
//
//Node* insert(Node* head, int pos, int val)
//{
//	/*if (pos == 0)
//	{
//		Node* p = getnewNode(val);
//		p->next = head;
//		return p;
//	}
//	Node* p=head;
//	for (int i = 1; i < pos; i++)
//	{
//		p = p->next;
//	}
//	Node* node = getnewNode(val);
//	node->next = p->next;
//	p->next = node;
//	return head;*///无头链表
//	Node new_head, * p = &new_head, * node = getnewNode(val);
//	new_head.next = head;
//	for (int i = 0; i < pos; i++)p = p->next;
//	node->next = p->next;
//	p->next = node;
//	return new_head.next;//有虚拟头链表返回真正链表的第一个节点位置而不是虚拟节点的地址
//
//}
//void output_linklist(Node* head,int flag=0)
//{
//	int n = 0;
//	for (Node* p = head; p; p = p->next)n += 1;
//	for (int i = 0; i < n; i++)
//	{
//		printf(DIGIT_LEN_STR(DL), i);
//		printf(" ");
//	}
//	printf("\n");
//	for (Node* p = head; p; p = p->next)
//	{
//		printf(DIGIT_LEN_STR(DL), p->data);
//		printf("->");
//	}
//	printf("\n");
//	if (!flag)
//	{
//		printf("\n\n");
//	}
//	return;
//}
//int find(Node* head,int val)
//{
//	Node* p = head;
//	int n = 0;
//	while (p)
//	{
//		if (p->data == val)
//		{
//			output_linklist(head,1);
//			int len = n * (DL + 2)+2;
//			for (int i = 0; i < len; i++)printf(" ");
//			printf("^\n");
//			for (int i = 0; i < len; i++)printf(" ");
//			printf("|\n");
//			return 1;
//		}
//		n += 1;
//		p = p->next;
//	}
//	return 0;
//}
//int main()
//{
//#define max 5
//	Node* head = NULL;
//	srand(time(0));
//	for (int i = 0; i < max; i++)
//	{
//		int pos = rand() % (i + 1);  int val = rand() % 100;
//		printf("insert %d at %d to linklist \n", val, pos);
//		head = insert(head, pos, val);
//		output_linklist(head);
//	}
//	int val;
//	while (~scanf("%d", &val))
//	{
//		if (!find(head,val))
//		{
//			printf("not found\n");
//		}
//	}
//
//
//	clear(head);
//	
//	return 0;
//}//（船长）链表内容 链表第5和第六集



//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//  Node* getnewNode(int val)
//{
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = val;
//	p->next = NULL;
//	return p;
//}

//  Node* node(Node* head)
//{
	/*Node new_head, * p = &new_head, *q;
	new_head.next = NULL;
	while (p)
	{
		q = p->next;
		p->next = new_head.next;
		new_head.next = p;
		p = q;

	}*/

	//if (head == NULL || head->next == NULL)return head;
	//Node* tail = head->next;
	//Node* new_head =node(head->next);
	//head->next = tail->next;
	//tail->next = head;
	//return new_head;
	////反转链表

//}


 // class Solution
 // {
 // public:
	//  bool hasCycle(Node* head)
	//  {
	//	  Node* p = head, * q = head;
	//	  while (q && q->next)
	//	  {
	//		  p->next;
	//		  q->next->next;
	//		  if (p == q)return true;
	//	  }
	//	  return false;
	//  }
	////测定有没有环

 // };

//  class Soultion
//  {
//  public:
//	  int getnext(int x)
//	  {
//		  int d = 0, y = 0;
//		  while (x)
//		  {
//			  d = x % 10;
//			  y += d * d;
//			  x /= 10;
//		  }
//		  return y;
//	  }
//	  bool ishappy(int n)
//	  {
//		  int p = n, q = n;
//		  while (q != 1)
//		  {
//			  p = getnext(p);
//			  q = getnext(getnext(q));
//			  if (p == q)return false;
//		  }
//		  return true;
//	  }//链表定义快乐数
//};



  //class Soultion
  //{
  //public:
	 // int getlen(Node* head)
	 // {
		//  int n=0;
		//  while (head)
		//  {
		//	  n += 1;
		//	  head = head->next;
		//  }
		//  return n;
	 // }
	 // Node* node(Node* head, int k)
	 // {
		//  int n = getlen(head);
		//  if (head == NULL)return head;
		//  k %= n;
		//  if (k == 0)return head;
		//  Node* p = head, * q = head;
		//  for (int i = 0; i <= k; i++)p = p->next;
		//  while (p)q = q->next; p = p->next;
		//  p->next = q->next;
		//  q->next = NULL;
		//  q = p;
		//  while (q != NULL)q = q->next;
		//  q->next = head;
		//  return p;
	 // }
  //};//旋转链表如：1234k=2则旋转后为3412


//class Solution
//{
//public:
//	Node* node(Node* head, int n)
//	{
//		Node new_head, * p = &new_head, * q = p;
//		new_head.next = head;
//		for (int i = 0; i < n; i++)q = q->next;
//		while (q)p = p->next; q = q->next;
//		p->next = p->next->next;
//		return new_head.next;
//	}//删除链表倒数第几个数的操作；
//};

//class Solution
//{
//public:
//	Node* node(Node* head)
//	{
//		Node* p = head, * q = head;
//		while (q && q->next)
//		{
//			p = p->next; q = q->next->next;
//			if (p == q)break;
//		}
//		if (q == NULL || q->next == NULL)return NULL;
//		while (q != p)q = head; q->next; p->next;
//		return q;
//	}//如果有环返回环的起始位置的地址；
//};

//class Solution
//{
//public:
//	Node* node(Node* head, int right, int left)
//	{
//		if (right == 1 && left == 1)return head;
//		if (left != 1)
//		{
//			head->next = node(head->next, left - 1, right - 1);
//		}
//		else
//		{
//			Node* tail = head->next,*new_head;
//			new_head = node(head->next, left, right - 1);
//			head->next = tail->next;
//			tail->next = head;
//			head = new_head;
//		}
//		return head;
//	}//链表部分反转，递归方法
//};

typedef struct vector
{
	int* data;
	int size;
}vector;

vector* initvector(int n)
{
	vector* v = (vector*)malloc(sizeof(vector));
	v->size = n;
	v->data = (int*)malloc(sizeof(int) * n);
	return v;
}
void Clearvector(vector* v)
{
	if (v == 0)return;
	free(v->data);
	free(v);
	return;
}
int vectorseek(vector* v, int pos)
{
	if (pos<0 || pos>=v->size)return -1;
	return v->data[pos];
}
int insertvector(vector* v, int pos, int val)
{
	if (pos < 0 || pos >= v->size)return 0;
	v->data[pos] = val;
	return 1;
}
typedef struct Queue
{
	vector* data;
	int count, tail, head,size;
}Queue;
Queue* initQueue(int n)
{
	Queue* q = (Queue*)malloc(sizeof(Queue));
	q->data = initvector(n);
	q->size = n;
	q->head = q->tail = q->count = 0;
	return q;
};
int empty(Queue* q)
{
	return q->count == 0;
}
int push(Queue* q, int val)
{
	if (q->count == q->size)return 0;
	insertvector(q->data, q->tail, val);
	q->tail += 1;
	if (q->size == q->count)q->tail = 0;
	q->count += 1;
	return 1;
};
int front(Queue* q)
{
	return vectorseek(q->data, q->head);
};
int pop(Queue* q)
{
	if (empty(q))return 0;
	q->head += 1;
	q->count -= 1;
	return 1;
};

void clear(Queue* q)
{
	if (q == NULL)return;
	Clearvector(q->data);
	free(q);
	return;
	
};


void outputQueue(Queue* q)
{
	printf("Queue:\n");
	for (int i = 0; i < q->count; i++)
	{
		printf("%4d", vectorseek(q->data, (q->head + i) % q->size));
	}
	printf("\n\n");
	return;
}


int main()
{
	srand(time(0));
#define max 10
	Queue* q = initQueue(5);
	for (int i = 0; i < max; i++)
	{
		int op = rand() % 5,val=rand()%100;
		switch (op)
		{
		case 0:
			printf("front of Queue :%d\n", front(q));
			pop(q);
			break;
		case 1:
		case 2:
		case 3:
		case 4:
			printf("push %d to Queue %d\n", val);
			push(q, val);
			break;
		}
		outputQueue(q);
	}
	clear(q);
	return 0;
}



















