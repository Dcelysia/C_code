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
//���͵Ķ���
typedef struct Peoinfo
{
	char name[MAX_AGE];
	char sex[MAX_SEX];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_addr];
}Peoinfo;
//ͨѶ¼
typedef struct Contact
{
	Peoinfo *data;//ͨѶ¼�������Ϣ
	int sz;//ͨѶ���Ѿ�������Ч��Ϣ�ĸ���
	int capcity;
}Contact;

void Initcon(Contact*pc);//��ʼ��ͨѶ��ĺ���

void ADDContact(Contact*pc);//����ͨѶ¼�������ĺ���

void PrintContact(const Contact* pc);//��ӡͨѶ¼����һ���˵ĺ���
void DelContact(Contact* pc);//ɾ��ͨѶ¼����¼������ݵĺ���
int Findbyname(const Contact* pc);//ͨ����������ͨѶ¼���������ڵ�λ��
void SearchContact(const Contact* pc);//����ͨѶ¼���������ڵ�λ��
void ModifyContact(Contact* pc);//�޸�ָ�����˵���Ϣ
void DestoryContact(Contact* pc);//��������Ŀռ��ָ��
void SaveContact(Contact* pc);//����ͨѶ¼���ļ�
void LoadContact(Contact* pc);//���ر����ͨѶ¼
void CheckContact(Contact* pc);//����Ƿ���Ҫ�ӿռ�