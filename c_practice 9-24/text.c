#define _CRT_SECURE_NO_WARNINGS
#include "List.h"
void textlist()
{
	// 创建一个链表
	LT* pl = ListInit();
	// 向链表中添加元素
	ListPushBack(pl, 1);
	ListPushBack(pl, 2);
	ListPushBack(pl, 3);
	ListPushBack(pl, 4);
	ListPushFront(pl, 100);
	ListPrintf(pl);
	ListInsert(ListFind(pl, 1), 200);
	// 打印链表
	ListPrintf(pl);
	ListPopBack(pl);
	// 从链表中弹出最后一个元素
	// 打印链表
	ListErase(ListFind(pl, 1));
	ListPrintf(pl);
	// 销毁链表
	ListDestory(pl);
}
int main(void)
{
	// 调用textlist函数
	textlist();

	return 0;
}