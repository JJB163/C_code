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
		printf("ͨѶ¼�������޷����");
		return;
	}

	printf("����������\n");
	scanf("%s", pc->date[pc->count].name);
	printf("����������\n");
	scanf("%d", &(pc->date[pc->count].age));
	printf("������绰����\n");
	scanf("%s", pc->date[pc->count].num);
	printf("�������Ա�\n");
	scanf("%s", pc->date[pc->count].sex);
	printf("�������ַ\n");
	scanf("%s", pc->date[pc->count].addr);

	pc->count++;
	printf("���ӳɹ�\n");




}


void showconatct( const contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%20s\t%5s\t%10s\t%12s%30s\n", "����", "����", "�Ա�", "����", "��ַ");
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
		printf("ͨѶ¼Ϊ�գ�û�п���ɾ����Ԫ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����\n");
	scanf("%s", name);
	//����
	int pos = findlyname(pc, name);
	if (pos == -1)
	{
		printf("ɾ�����˲�����\n");
		return;
	}
	//ɾ��
	int i = 0;
	for (i = pos; pc->count-1; i++)
	{
		pc->date[i] = pc->date[i - 1];
	}
	pc->count--;
	printf("ɾ���ɹ�\n");
}


//������ϵ��
void search(contact* pc)
{
	assert(pc);
	char name[20] = { 0 };
	printf("������Ҫ�����˵�����\n");
	scanf("%5s", name);
	int pos = findlyname(pc, name);
	if (pos == -1)
	{
		printf("ɾ�����˲�����\n");
		return;
	}
	//2.��ӡ
	printf("%20s\t%5s\t%10s\t%12s%30s\n", "����", "����", "�Ա�", "����", "��ַ");
		printf("%20s\t%5d\t%10s\t%12s%30s\n",
			pc->date[pos].name,
			pc->date[pos].age,
			pc->date[pos].sex,
			pc->date[pos].num,
			pc->date[pos].addr);
}

//�޸�ָ����ϵ��
void modify(contact* pc)
{
	assert(pc);
	char name[20] = { 0 };
	printf("������Ҫ�޸��˵�����\n");
	scanf("%5s", name);
	int pos = findlyname(pc, name);
	if (pos == -1)
	{
		printf("ɾ�����˲�����\n");
		return;
	}
	//�޸�
	printf("�޸��˵���Ϣ�Ѿ����ҵ������ڿ�ʼ�޸�\n");
	printf("����������\n");
	scanf("%s", pc->date[pos].name);
	printf("����������\n");
	scanf("%d", &(pc->date[pos].age));
	printf("������绰����\n");
	scanf("%s", pc->date[pos].num);
	printf("�������Ա�\n");
	scanf("%s", pc->date[pos].sex);
	printf("�������ַ\n");
	scanf("%s", pc->date[pos].addr);
	printf("�޸ĳɹ�\n");
}

//����ͨѶ¼�е�����

int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((peoinfo*)e1)->name,((peoinfo*)e2)->name);
}



void sort(contact* pc)
{
	assert(pc);
	qsort(pc->date, pc->count, sizeof(peoinfo), cmp_peo_by_name);
	printf("����ɹ�\n");
}






