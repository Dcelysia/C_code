#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <assert.h>
//定义一个链表的数据类型
typedef int ListDataType;
//定义一个链表的节点
typedef struct Listcode
{
	//指向前一个节点
	struct Listcode* prev;
	//指向后一个节点
	struct Listcode* next;
	//节点存储的数据
	ListDataType x;
}LT;

LT* ListInit();//初始化链表元素
void ListDestory(LT** ppl);//销毁链表
void ListPushBack(LT* phead, ListDataType x);//尾插
LT* BuyNewCode(ListDataType x);//开拓一个内存
void ListPrintf(LT* phead);//打印链表
void ListPushFront(LT* phead, ListDataType x);//头插
void ListPopFront(LT* phead);//头删
void ListPopBack(LT* phead);//尾删
LT* ListFind(LT* phead, ListDataType x);//查找链表中的数据
void ListInsert(LT* pos, ListDataType x);//在某一个位置插入数据
void ListErase(LT* pos);//在某个位置把数据踢出去

