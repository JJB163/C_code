#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


//typedef struct Node{
//
//	int data;
//	Node* next;
//}Node;
//
//Node* getNewNode(int val)
//{
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = val;
//	p->next = NULL;
//	return p;
//}
//typedef struct Linklist {
//	Node head, * tail;
//}Linklist;
//
//Linklist* initLinklist()
//{
//	Linklist* l = (Linklist*)malloc(sizeof(Linklist));
//	l->head.next = NULL;
//	l->tail = &(l->head);
//	return l;
//}
//
//void clearLinklist(Linklist* l)
//{
//	Node* p = l->head.next, * q;
//	while (p)
//	{
//		q = p->next;
//		free(p);
//		p = q;
//	}
//	free(l);
//	return;
//}
//int emptylist(Linklist* l)
//{
//	return l->head.next == NULL;
//}
//int frontList(Linklist*l)
//{
//	if (emptylist(l))return 0;
//	return l->head.next->data;
//}
//
//int insertTail(Linklist* l, int val)
//{
//	Node* node = getNewNode(val);
//	l->tail->next = node;
//	l->tail = node;
//	return 1;
//}
//int eraseHead(Linklist* l)
//{
//	if (emptylist(l))return 0;
//	Node* p = l->head.next;
//	l->head.next = l->head.next->next;
//	if (p == l->tail)l->tail = &(l->head);
//	free(p);
//	return 1;
//}
//
//typedef struct Queue
//{
//	Linklist* l;
//	int count;
//
//}Queue;
//
//Queue* initQueue()
//{
//	Queue* q = (Queue*)malloc(sizeof(Queue));
//	q->l = initLinklist();
//	q->count = 0;
//	return q;
//}
//
//int empty(Queue* q)
//{
//	return q->count == 0;
//}
//int front(Queue* q)
//{
//	if (empty(q))return 0;
//	return frontList(q->l);
//}
//int push(Queue* q,int val)
//{
//	insertTail(q->l, val);
//	q->count += 1;
//	return 1;
//}
//int pop(Queue* q)
//{
//	eraseHead(q->l);
//	q->count -= 1;
//	return 1;
//}
//
//
//
//void ClearQueue(Queue* q)
//{
//	if (q == NULL)return;
//	clearLinklist(q->l);
//	free(q);
//	return;
//}
//
//void outputQueue(Queue* q)
//{
//	printf("Queue:\n");
//	Node* p = q->l->head.next;
//	for (int i = 0; i < q->count; i++,p=p->next)
//	{
//		printf("%4d", p->data);
//	}
//	printf("\n\n");
//	return;
//}
//
//
//
//int main()
//{
//	srand(time(0));
//#define max 10
//	Queue* q = initQueue();
//	for (int i = 0; i < max; i++)
//	{
//		int op = rand() % 5, val = rand() % 100;
//		switch (op)
//		{
//		case 0:
//			printf("front of Queue :%d\n", front(q));
//			pop(q);
//			break;
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//			printf("push %d to Queue %d\n", val);
//			push(q, val);
//			break;
//		}
//		outputQueue(q);
//	}
//	ClearQueue(q);
//	return 0;
//}


/*typedef struct stack
{
	int* data;
	int size, top;
}stack;

stack* initstack(int n)
{
	stack* s = (stack*)malloc(sizeof(stack));
	s->data = (int*)malloc(sizeof(int) * n);
	s->size = n;
	s->top = -1;
	return s;
}

int empty(stack* s)
{
	return s->top == -1;
}

int top(stack* s)
{
	if (empty(s))return 0;
	return s->data[s->top];
}

int push(stack* s,int val)
{
	if (s->top + 1 == s->size)return 0;
	s->top += 1;
	s->data[s->top] = val;
	return 1;
}

int pop(stack* s)
{
	if (empty(s))return 0;
	s->top -= 1;
	return 1;
}

void Clearstack(stack* s)
{
	if (s == NULL)return;
	free(s->data);
	free(s);
	return;
}


void outputstack(stack* s)
{
	printf("stack: ");
	for (int i = s->top; i >= 0; i--)
	{
		printf("%4d", s->data[i]);
	}
	printf("\n\n");
	return;
}


int main()
{
	srand(time(0));
#define max 10
	stack* s = initstack(5);
	for (int i = 0; i < max; i++)
	{
		int op = rand() % 3; int val = rand() % 100;
		switch (op)
		{
		case 0:
			printf("pop satck, item=%d\n", top(s));
			pop(s);
			break;
		case 1:
		case 2:
			printf("push stack, item=%d\n", val);
			push(s, val);
			break;
		}
		outputstack(s);
	}

	Clearstack(s);
	return 0;
}*///船长数据结构：栈



typedef struct stack
{
	char* data;
	int size, top;
}stack;

stack* initstack(int n)
{
	stack* s = (stack*)malloc(sizeof(stack));
	s->data = (char*)malloc(sizeof(char) * n);
	s->size = n;
	s->top = -1;
	return s;
}

int empty(stack* s)
{
	return s->top == -1;
}

char top(stack* s)
{
	if (empty(s))return 0;
	return s->data[s->top];
}

int push(stack* s, char val)
{
	if (s->top + 1 == s->size)return 0;
	s->top += 1;
	s->data[s->top] = val;
	return 1;
}

int pop(stack* s)
{
	if (empty(s))return 0;
	s->top -= 1;
	return 1;
}

void Clearstack(stack* s)
{
	if (s == NULL)return;
	free(s->data);
	free(s);
	return;
}

void solve(char str[])
{
	int flag = 1;
	stack* s = initstack(100);
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			push(s, str[i]);
		}
		else 
		{
			switch (str[i])
			{
			case ')': {
				if (!empty(s) && top(s) == '(')pop(s);
				else flag = 0;
			}break;
			case ']': {
				if (!empty(s) && top(s) == '[')pop(s);
				else flag = 0;
			}break;
			case '}': {
				if (!empty(s) && top(s) == '{')pop(s);
				else flag = 0;
			}break;
			}
			
		}
		if (flag == 0)break;
	}
	if (flag == 0 || !empty(s))
	{
		printf("error\n");
	}
	else
	{
		printf("success\n");
	}
	Clearstack(s);
	return;
}


int main()
{
	char str[100];
	while (~scanf("%s", str))
	{
		solve(str);
	}
	return 0;
}
//数据结构：栈 匹配括号


