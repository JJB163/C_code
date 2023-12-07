#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

typedef struct//学生体结构
{
	char* id;
	char* name;
	double source1;
	double source2;
	double source3;
	double sum;
}Stu;
//将结构体里面的元素进行赋值
Stu* inputStu()
{
	Stu* stutem = (Stu*)malloc(sizeof(Stu));
	if (stutem ==NULL )
	{
		return NULL;
	}
	char idtem[100] = { 0 };
	scanf("%s", &idtem);
	stutem->id = (char*)malloc(strlen(idtem) + 1);
	if (stutem->id == NULL)
	{
		return NULL;
	}
	strcpy(stutem->id, idtem);
	char name[100] = { 0 };
	scanf("%s", &name);
	stutem->name = (char*)malloc(strlen(name) + 1);
	if (stutem->name == NULL)
	{
		return NULL;
	}
	strcpy(stutem->name, name);
	scanf("%lf", &stutem->source1);
	scanf("%lf", &stutem->source2);
	scanf("%lf", &stutem->source3);
	stutem->sum = stutem->source1 + stutem->source2 + stutem->source3;
	return stutem;
}
//通过sum进行比较得出最优秀的，再求出各科成绩的平均值
	void printinput(Stu * student[], int n)
	{
		int i = 0;
		double max = student[0]->sum;
		double sum1 = 0.0, sum2 = 0.0, sum3 = 0.0;
		for (i = 0; i < n; i++)
		{
			sum1 += (student[i]->source1);
			sum2 += (student[i]->source2);
			sum3 += (student[i]->source3);
		}
		printf("%.2lf %.2lf %.2lf\n", sum1 / n, sum2 / n, sum3 / n);
		for (i = 1; i < n; i++)
		{
			if (student[i]->sum > max)
			{
				max = student[i]->sum;
			}
		}
		for (i = 0; i < n; i++)
		{
			if (student[i]->sum == max)
			{
				printf("%s %s %.2lf %.2lf %.2lf\n", student[i]->id,
					student[i]->name,
					student[i]->source1,
					student[i]->source2,
					student[i]->source3);
			}
		}
	}
	//释放各个部分的空间

	void freestu(Stu* stu)
	{
		free(stu->id);
		free(stu->name);
		free(stu);
	}


int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	if (n > 100)
	{
		return -1;
	}
	Stu* student[100] = {NULL};
	for (i = 0; i < n; i++)
	{
		student[i] = inputStu();//进行赋值
	}
	
		printinput(student,n);//打印，并传入结构体student和n

		for (i = 0; i < n; i++)
		{
			freestu(student[i]);//释放空间
		}


	return 0;
}



