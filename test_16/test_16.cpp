#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef struct DATE
{
	int year=0 ;
	int month=0 ;
	int day=0 ;
}DATE;


int main()
{
	DATE x;
	int i,sum = 0;
	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d%d%d", &x.year, &x.month, &x.day);
	if (x.year%4==0&&(x.year%100==0||x.year%400==0))
	{
		arr[1] += 1;
	}
	for (i = 0; i <x.month-1; i++)
	{
		sum += arr[i];
	}
	printf("%d\n", sum+x.day);
	return 0;
}

typedef struct 
{
	char* id;
	char* name;
	int math;
	int english;
	int Chinese;
	
}Stu;
Stu* inputStu()
{
	Stu* stutem = (Stu*)malloc(sizeof(Stu));
	{
		if (stutem == NULL)
		{
			return NULL;
		}
	}
	char idtem[100] = { 0 };
	scanf("%s", idtem);
	stutem->id = (char*)malloc(strlen(idtem) + 1);
	if (stutem->id == NULL)
	{
		return NULL;
	}
	strcpy(stutem->id, idtem);

	char name[100];
	scanf("%s", name);
	stutem->name = (char*)malloc(strlen(name) + 1);
		if (stutem == NULL)
		{
			return NULL;
		}
		strcpy(stutem->name, name);
		scanf("%d", &stutem->math);
		scanf("%d", &stutem->english);
		scanf("%d", &stutem->Chinese);
		return stutem;
}
void print(Stu* stu)
{
	printf("%s %s %d %d %d", stu->id, stu->name, stu->math, stu->english, stu->Chinese);
}
void freeStu(Stu* stu)
{
	free(stu->id);
	free(stu->name);
	free(stu);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n > 100)
	{
		return -1;
	}
	Stu* student[100] = {NULL};//初始化为空指针
	int i = 0;
	for (i = 0; i < n; i++)
	{
		student[i] = inputStu();
	}
	for (i = 0; i < n; i++)
	{
		print(student[i]);
	}
	for (i = 0; i < n; i++)
	{
		freeStu(student[i]);
	}
	return 0;
}













