#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
struct player
{
	int score;
	int choice;
	int n;
	char name[100];
};
typedef struct score
{
	int xiaohong_num;
	int Fuduji_num;
	int heibang_num;
	int youtiao_num;
	int fuer_num;
}Score;
void isscore(struct player* p1, struct player* p2);//�ж�ʤ���ĺ���
//��ʼ���ṹ��
void Initxiaohong(struct player* xiaohong);
void InitFuduji(struct player* Fuduji);
void Inityoutiao(struct player* Fuduji);
void Initheibang(struct player* heibang);
void Initfuer(struct player* fuer);
//��Ϸ�㷨
void paly(struct player* p1, struct player* p2);
//��ӡҳ��
void menu(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num);
//����һ�α���
void Competition(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num);
//������ɾ������
void Curmenu(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int* Fuduji_num, int* xiaohong_num, int* youtiao_num, int* heibang_num, int* fuer_num);
//�ڱ�����ָ��ĺ���
void hireplayer(struct player* p1, struct player* p2);
//��ɸ����������ĺ���
struct player* playFuduji(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num);
//С��
struct player* playxiaohong(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num);
//youtiao
struct player* playyoutiao(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num);
//heibang
struct player* playheibang(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num);
//fuer
struct player* playfuer(struct player* Fuduji, struct player* xiaohong, struct player* youtiao, struct player* heibang, struct player* fuer, int Fuduji_num, int xiaohong_num, int youtiao_num, int heibang_num, int fuer_num);

