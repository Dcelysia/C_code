#define _CRT_SECURE_NO_WARNINGS
#include "List.h"
void textlist()
{
	// ����һ������
	LT* pl = ListInit();
	// �����������Ԫ��
	ListPushBack(pl, 1);
	ListPushBack(pl, 2);
	ListPushBack(pl, 3);
	ListPushBack(pl, 4);
	ListPushFront(pl, 100);
	ListPrintf(pl);
	ListInsert(ListFind(pl, 1), 200);
	// ��ӡ����
	ListPrintf(pl);
	ListPopBack(pl);
	// �������е������һ��Ԫ��
	// ��ӡ����
	ListErase(ListFind(pl, 1));
	ListPrintf(pl);
	// ��������
	ListDestory(pl);
}
int main(void)
{
	// ����textlist����
	textlist();

	return 0;
}