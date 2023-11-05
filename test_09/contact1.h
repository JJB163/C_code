#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define Max 100
#define Max_name 20
#define Max_sex 10
#define Max_num 12

//人的信息
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
	int count = 0;//记录通讯录当前实际人数
}contact;

//初始化
void IntContact(contact* pc);

//增加人数到通讯录
void add(contact* pc);

//展示出来
void showcontact(contact* pc);

//删除通讯录中指定的人
void del(contact* pc);

//查找联系人
void search(contact* pc);

//修改指定联系人
void modify(contact* pc);

//排序通讯录中的内容
void sort(contact* pc);




