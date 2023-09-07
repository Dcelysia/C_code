#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_AGE 20
#define MAX_SEX 10
#define MAX_addr 30
#define MAX 1000
#define MAX_TEL  13
#define IGN_MAX 3
//类型的定义
typedef struct Peoinfo
{
	char name[MAX_AGE];
	char sex[MAX_SEX];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_addr];
}Peoinfo;
//通讯录
typedef struct Contact
{
	Peoinfo *data;//通讯录存入的信息
	int sz;//通讯里已经存入有效信息的个数
	int capcity;
}Contact;

void Initcon(Contact*pc);//初始化通讯里的函数

void ADDContact(Contact*pc);//增加通讯录里人数的函数

void PrintContact(const Contact* pc);//打印通讯录其中一个人的函数
void DelContact(Contact* pc);//删除通讯录中已录入的数据的函数
int Findbyname(const Contact* pc);//通过人名查找通讯录中人名所在的位置
void SearchContact(const Contact* pc);//查找通讯录中人名所在的位置
void ModifyContact(Contact* pc);//修改指定的人的信息
void DestoryContact(Contact* pc);//销毁扩充的空间和指针
void SaveContact(Contact* pc);//保存通讯录到文件
void LoadContact(Contact* pc);//加载保存的通讯录
void CheckContact(Contact* pc);//检查是否需要加空间