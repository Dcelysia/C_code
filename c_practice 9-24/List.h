#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <assert.h>
//����һ���������������
typedef int ListDataType;
//����һ������Ľڵ�
typedef struct Listcode
{
	//ָ��ǰһ���ڵ�
	struct Listcode* prev;
	//ָ���һ���ڵ�
	struct Listcode* next;
	//�ڵ�洢������
	ListDataType x;
}LT;

LT* ListInit();//��ʼ������Ԫ��
void ListDestory(LT** ppl);//��������
void ListPushBack(LT* phead, ListDataType x);//β��
LT* BuyNewCode(ListDataType x);//����һ���ڴ�
void ListPrintf(LT* phead);//��ӡ����
void ListPushFront(LT* phead, ListDataType x);//ͷ��
void ListPopFront(LT* phead);//ͷɾ
void ListPopBack(LT* phead);//βɾ
LT* ListFind(LT* phead, ListDataType x);//���������е�����
void ListInsert(LT* pos, ListDataType x);//��ĳһ��λ�ò�������
void ListErase(LT* pos);//��ĳ��λ�ð������߳�ȥ

