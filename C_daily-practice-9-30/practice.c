#define _CRT_SECURE_NO_WARNINGS
typedef int StackDataType;
//������ȥ����һ������
//typedef struct StackData
//{
//	StackDataType* a;
//	int top;
//	int capacity;
//}ST;
//void StackInit(ST* pa)//��ʼ��ջ
//{
//	assert(pa);
//	pa->a = (StackDataType*)malloc(sizeof(StackDataType) * 4);
//	pa->capacity = 4;
//	pa->top = 0;
//}
//void StackDestory(ST* pa)//����ջ
//{
//	assert(pa);
//	free(pa->a);
//	pa->a = NULL;
//	pa->top = 0;
//	pa->capacity = 0;
//}
//void StackPush(ST* pa, StackDataType x)//��������
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
//void StackPop(ST* pa)//ɾ������
//{
//	assert(pa);
//	pa->top--;
//}
//StackDataType StackTop(ST* pa)//������
//{
//	assert(pa);
//	assert(pa->top > 0);
//	return pa->a[pa->top - 1];
//}
//int StackSize(ST* pa)//����Ĵ�С
//{
//	assert(pa);
//	return pa->top;
//}
//bool StackEmpty(ST* pa)//�ж�ջ�Ƿ�Ϊ��
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