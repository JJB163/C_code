#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define Max 100
#define Max_name 20
#define Max_sex 10
#define Max_num 12

//�˵���Ϣ
typedef struct peoinfo
{
	char name[20];
	int age;
	char sex[10];
	char num[12];
	char addr[30];
}peoinfo;


typedef struct contact
{
	peoinfo date[100];
	int count = 0;//��¼ͨѶ¼��ǰʵ������
}contact;

//��ʼ��
void IntContact(contact* pc);

//����������ͨѶ¼
void add(contact* pc);

//չʾ����
void showcontact(contact* pc);

//ɾ��ͨѶ¼��ָ������
void del(contact* pc);

//������ϵ��
void search(contact* pc);

//�޸�ָ����ϵ��
void modify(contact* pc);

//����ͨѶ¼�е�����
void sort(contact* pc);




