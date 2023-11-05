#define _CRT_SECURE_NO_WARNINGS 1
#include"contact1.h"
void InitContact(contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->date, 0, sizeof(pc->date));
}


void add(contact* pc)
{
	assert(pc);
	if (pc->count == Max)
	{
		printf("通讯录已满，无法添加");
		return;
	}

	printf("请输入姓名\n");
	scanf("%s", pc->date[pc->count].name);
	printf("请输入年龄\n");
	scanf("%d", &(pc->date[pc->count].age));
	printf("请输入电话号码\n");
	scanf("%s", pc->date[pc->count].num);
	printf("请输入性别\n");
	scanf("%s", pc->date[pc->count].sex);
	printf("请输入地址\n");
	scanf("%s", pc->date[pc->count].addr);

	pc->count++;
	printf("增加成功\n");




}


void showconatct( const contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%20s\t%5s\t%10s\t%12s%30s\n", "姓名", "年龄", "性别", "号码", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%5d\t%10s\t%12s%30s\n", 
			pc->date[i].name, 
			pc->date[i].age, 
			pc->date[i].sex, 
			pc->date[i].num,
			pc->date[i].addr);
	}

}



static int findlyname(contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp((pc->date[i].name), name) == 0)
		{
			return i;
		}
	}
	return -1;
}



void del( contact* pc)
{
	char name[Max_name] = { 0 };
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空，没有可以删除的元素\n");
		return;
	}
	printf("请输入要删除人的名字\n");
	scanf("%s", name);
	//查找
	int pos = findlyname(pc, name);
	if (pos == -1)
	{
		printf("删除的人不存在\n");
		return;
	}
	//删除
	int i = 0;
	for (i = pos; pc->count-1; i++)
	{
		pc->date[i] = pc->date[i - 1];
	}
	pc->count--;
	printf("删除成功\n");
}


//查找联系人
void search(contact* pc)
{
	assert(pc);
	char name[20] = { 0 };
	printf("请输入要查找人的名字\n");
	scanf("%5s", name);
	int pos = findlyname(pc, name);
	if (pos == -1)
	{
		printf("删除的人不存在\n");
		return;
	}
	//2.打印
	printf("%20s\t%5s\t%10s\t%12s%30s\n", "姓名", "年龄", "性别", "号码", "地址");
		printf("%20s\t%5d\t%10s\t%12s%30s\n",
			pc->date[pos].name,
			pc->date[pos].age,
			pc->date[pos].sex,
			pc->date[pos].num,
			pc->date[pos].addr);
}

//修改指定联系人
void modify(contact* pc)
{
	assert(pc);
	char name[20] = { 0 };
	printf("请输入要修改人的名字\n");
	scanf("%5s", name);
	int pos = findlyname(pc, name);
	if (pos == -1)
	{
		printf("删除的人不存在\n");
		return;
	}
	//修改
	printf("修改人的信息已经查找到，现在开始修改\n");
	printf("请输入姓名\n");
	scanf("%s", pc->date[pos].name);
	printf("请输入年龄\n");
	scanf("%d", &(pc->date[pos].age));
	printf("请输入电话号码\n");
	scanf("%s", pc->date[pos].num);
	printf("请输入性别\n");
	scanf("%s", pc->date[pos].sex);
	printf("请输入地址\n");
	scanf("%s", pc->date[pos].addr);
	printf("修改成功\n");
}

//排序通讯录中的内容

int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((peoinfo*)e1)->name,((peoinfo*)e2)->name);
}



void sort(contact* pc)
{
	assert(pc);
	qsort(pc->date, pc->count, sizeof(peoinfo), cmp_peo_by_name);
	printf("排序成功\n");
}






