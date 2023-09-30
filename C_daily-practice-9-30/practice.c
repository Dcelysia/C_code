#define _CRT_SECURE_NO_WARNINGS
typedef int StackDataType;
//用链表去代表一个队列
//typedef struct StackData
//{
//	StackDataType* a;
//	int top;
//	int capacity;
//}ST;
//void StackInit(ST* pa)//初始化栈
//{
//	assert(pa);
//	pa->a = (StackDataType*)malloc(sizeof(StackDataType) * 4);
//	pa->capacity = 4;
//	pa->top = 0;
//}
//void StackDestory(ST* pa)//销毁栈
//{
//	assert(pa);
//	free(pa->a);
//	pa->a = NULL;
//	pa->top = 0;
//	pa->capacity = 0;
//}
//void StackPush(ST* pa, StackDataType x)//增入数据
//{
//	assert(pa);
//	if (pa->top == pa->capacity)
//	{
//		StackDataType* tmp = (StackDataType*)realloc(pa->a, sizeof(StackDataType) * 2 * pa->capacity);
//		if (tmp == NULL)
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//		else
//		{
//			pa->a = tmp;
//			pa->capacity *= 2;
//		}
//	}
//	pa->a[pa->top] = x;
//	pa->top++;
//}
//void StackPop(ST* pa)//删除数据
//{
//	assert(pa);
//	pa->top--;
//}
//StackDataType StackTop(ST* pa)//查找数
//{
//	assert(pa);
//	assert(pa->top > 0);
//	return pa->a[pa->top - 1];
//}
//int StackSize(ST* pa)//数组的大小
//{
//	assert(pa);
//	return pa->top;
//}
//bool StackEmpty(ST* pa)//判断栈是否为空
//{
//	return pa->top != 0;
//}
//
//
//typedef struct {
//	ST pushST;
//	ST popST;
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//	MyQueue* ps = (MyQueue*)malloc(sizeof(MyQueue));
//	StackInit(&ps->pushST);
//	StackInit(&ps->popST);
//	return ps;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//	StackPush(&obj->pushST, x);
//
//}
//
//int myQueuePop(MyQueue* obj) {
//	if (StackEmpty(&obj->popST) == 0)
//	{
//		while (StackEmpty(&obj->pushST))
//		{
//			StackPush(&obj->popST, StackTop(&obj->pushST));
//			StackPop(&obj->pushST);
//		}
//	}
//
//	int tmp = StackTop(&obj->popST);
//	StackPop(&obj->popST);
//	return tmp;
//
//}
//
//int myQueuePeek(MyQueue* obj) {
//	if (StackEmpty(&obj->popST) == 0)
//	{
//		while (StackEmpty(&obj->pushST))
//		{
//			StackPush(&obj->popST, StackTop(&obj->pushST));
//			StackPop(&obj->pushST);
//		}
//	}
//
//	int tmp = StackTop(&obj->popST);
//	return tmp;
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//	if (StackEmpty(&obj->pushST) == 0 && StackEmpty(&obj->popST) == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void myQueueFree(MyQueue* obj) {
//	StackDestory(&obj->pushST);
//	StackDestory(&obj->popST);
//	free(obj);
//	obj = NULL;
//}