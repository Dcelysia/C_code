#define _CRT_SECURE_NO_WARNINGS
#include "List.h"
// 创建一个新的节点
LT* BuyNewCode(ListDataType x)
{
	LT* newcode = (LT*)malloc(sizeof(LT));
	newcode->x = x;
	return newcode;
}
// 初始化链表
LT* ListInit()
{
	LT* phead = BuyNewCode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
// 销毁链表
void ListDestory(LT* pl)
{
	assert(pl);
	LT* del = pl->next;
	while (del != pl)
	{
		LT* cur = del->next;
		free(del);
		del = cur;

	}
	free(pl);
	pl = NULL;
}
// 向链表尾部添加一个节点
void ListPushBack(LT* phead, ListDataType x)
{
	assert(phead);
	//LT* tail = phead->prev;
	//LT* newcode = BuyNewCode(x);
	//tail->next = newcode;
	//newcode->prev = tail;
	//newcode->next = phead;
	//phead->prev = newcode;
	ListInsert(phead, x);
}
// 打印链表
void ListPrintf(LT* phead)
{
	assert(phead);
	LT* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->x);
		cur = cur->next;
	}
	printf("\n");
}
// 向链表头部添加一个节点
void ListPushFront(LT* phead, ListDataType x)
{
	assert(phead);
	LT* cur = phead->next;
	LT* newcode = BuyNewCode(x);
	phead->next = newcode;
	newcode->prev = phead;
	newcode->next = cur;
	cur->prev = newcode;
}
// 从链表头部弹出一个节点
void ListPopFront(LT* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LT* cur = (phead->next)->next;
	free(phead->next);
	phead->next = cur;
	cur->prev = phead;
}
// 从链表尾部弹出一个节点
void ListPopBack(LT* phead)
{
	assert(phead);
	assert(phead->next != phead);
	//LT* tail = phead->prev;
	//LT* second = tail->prev;
	//free(tail);
	//tail = NULL;
	//second->next = phead;
	//phead->prev = second;
	ListErase(phead->prev);
}
LT* ListFind(LT* phead, ListDataType x)
{
	assert(phead);
	LT* cur = phead->next;
	while (cur != phead)
	{
		if (cur->x == x)
		{
			return cur;
		}
		cur = cur->next;
	}
}

void ListInsert(LT* pos, ListDataType x)
{
	assert(pos);
	LT* newcode = BuyNewCode(x);
	LT* prev = pos->prev;
	prev->next = newcode;
	newcode->prev = prev;
	newcode->next = pos;
	pos->prev = newcode;
}
void ListErase(LT* pos)
{
	assert(pos);
	LT* first = pos->prev;
	LT* second = pos->next;
	first->next = second;
	second->prev = first;
	free(pos);
	pos = NULL;
}