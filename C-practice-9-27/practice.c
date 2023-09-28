#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define p 3.1415926
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
//leetcode有效的括号
//typedef char StackDataType;
//
//typedef struct StackData
//{
//    StackDataType* a;
//    int top;
//    int capacity;
//}ST;
//void StackInit(ST* pa)//初始化栈
//{
//    assert(pa);
//    pa->a = (StackDataType*)malloc(sizeof(StackDataType) * 4);
//    pa->capacity = 4;
//    pa->top = 0;
//}
//void StackDestory(ST* pa)//销毁栈
//{
//    assert(pa);
//    free(pa->a);
//    pa->a = NULL;
//    pa->top = 0;
//    pa->capacity = 0;
//}
//void StackPush(ST* pa, StackDataType x)//增入数据
//{
//    assert(pa);
//    if (pa->top == pa->capacity)
//    {
//        StackDataType* tmp = (StackDataType*)realloc(pa->a, sizeof(StackDataType) * 2 * pa->capacity);
//        if (tmp == NULL)
//        {
//            printf("realloc fail\n");
//            exit(-1);
//        }
//        else
//        {
//            pa->a = tmp;
//            pa->capacity *= 2;
//        }
//    }
//    pa->a[pa->top] = x;
//    pa->top++;
//}
//void StackPop(ST* pa)//删除数据
//{
//    assert(pa);
//    pa->top--;
//}
//StackDataType StackTop(ST* pa)//查找数
//{
//    assert(pa);
//    assert(pa->top > 0);
//    return pa->a[pa->top - 1];
//}
//int StackSize(ST* pa)//数组的大小
//{
//    assert(pa);
//    return pa->top;
//}
//bool StackEmpty(ST* pa)//判断栈是否为空
//{
//    return pa->top != 0;
//}
//bool isValid(char* s) {
//    ST st;
//    StackInit(&st);
//    while (*s != '\0')
//    {
//        switch (*s)
//        {
//        case '{':
//        case '[':
//        case '(':
//        {StackPush(&st, *s);
//        s++;
//        break;
//        }
//        case ']':
//        case '}':
//        case ')':
//        {
//
//            if (!StackEmpty(&st))
//            {
//                StackDestory(&st);
//                return false;
//            }
//            char tmp = StackTop(&st);
//            StackPop(&st);
//
//            if ((*s == '}' && tmp != '{')
//                || (*s == ']' && tmp != '[')
//                || (*s == ')' && tmp != '('))
//            {
//                StackDestory(&st);
//                return false;
//            }
//            else
//            {
//                s++;
//                break;
//            }
//        }
//
//        }
//    }
//    bool ret = !StackEmpty(&st);
//    return ret;
//}
//二叉树
typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BT;
void Prevorder(BT* bt)
{
	if (bt == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", bt->data);
		Prevorder(bt->left);
		Prevorder(bt->right);
}
int main(void)
{
	BT* A = (BT*)malloc(sizeof(BT));
	A->left = NULL;
	A->right = NULL;
	A->data = 'A';
	BT* B = (BT*)malloc(sizeof(BT));
	B->left = NULL;
	B->right = NULL;
	B->data = 'B';
	BT* C = (BT*)malloc(sizeof(BT));
	C->left = NULL;
	C->right = NULL;
	C->data = 'C';
	BT* D = (BT*)malloc(sizeof(BT));
	D->left = NULL;
	D->right = NULL;
	D->data = 'D';
	BT* E = (BT*)malloc(sizeof(BT));
	E->left = NULL;
	E->right = NULL;
	E->data = 'E';
	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;
	Prevorder(A);
	return 0;
}