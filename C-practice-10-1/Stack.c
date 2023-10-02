//#define _CRT_SECURE_NO_WARNINGS
//#pragma once
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <assert.h>
//typedef int StackDataType;
//
//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//};
//typedef struct StackData
//{
//	StackDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//void StackInit(ST* pa);//��ʼ��ջ
//void StackDestory(ST* pa);//����ջ
//void StackPush(ST* pa, StackDataType x);//��������
//void StackPop(ST* pa);//ɾ������
//void StackDestory(ST* pa);//����ջ
//StackDataType Stack(ST* pa);//������
//int StackSize(ST* pa);//����Ĵ�С
//bool StackEmpty(ST* pa);//�ж�ջ�Ƿ�Ϊ��
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
//void StackPop(ST* pa)
//{
//	assert(pa);
//	pa->top--;
//}
//StackDataType StackTop(ST* pa)
//{
//	assert(pa);
//	assert(pa->top > 0);
//	return pa->a[pa->top - 1];
//}
//int StackSize(ST* pa)
//{
//	assert(pa);
//	return pa->top;
//}
//bool StackEmpty(ST* pa)
//{
//	return pa->top != 0;
//}
//struct ListNode* Stackmake(int data)
//{
//    struct ListNode* newcode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    newcode->next = NULL;
//    newcode->val = data;
//    return newcode;
//}
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
//{
//    struct ListNode* head = Stackmake(0);
//    struct ListNode* cur = head;
//    struct ListNode* tail = NULL;
//    struct ListNode* prev = NULL;
//
//    while (l1)
//    {
//        if (cur == NULL)
//        {
//            struct ListNode* tmp = Stackmake(0);
//            if (tmp == NULL)
//            {
//                perror("malloc\n");
//                exit(-1);
//            }
//            else
//            {
//                prev->next = tmp;
//                cur = tmp;
//                cur->val += l1->val;
//            }
//        }
//        else
//        {
//            cur->val += l1->val;
//        }
//        l1 = l1->next;
//        prev = cur;
//        cur = cur->next;
//    }
//    cur = head;
//    prev = NULL;
//    while (l2)
//    {
//        if (cur == NULL)
//        {
//            struct ListNode* tmp = Stackmake(0);
//            if (tmp == NULL)
//            {
//                perror("malloc\n");
//                exit(-1);
//            }
//            else
//            {
//                prev->next = tmp;
//                cur = tmp;
//                cur->val += l2->val;
//                cur = cur->next;
//            }
//        }
//        else
//        {
//            cur->val += l2->val;
//        }
//        l2 = l2->next;
//        prev = cur;
//        cur = cur->next;
//    }
//    cur = head;
//    while (cur->next != NULL)
//    {
//        cur = cur->next;
//    }
//    tail = cur;
//    cur = head;
//    while (cur != tail)
//    {
//        if (cur->val >= 10)
//        {
//            int add = cur->val / 10;
//            cur->next->val += add;
//            cur->val %= cur->val;
//        }
//        cur = cur->next;
//    }
//    if (tail->val >= 10)
//    {
//        struct ListNode* tmp = Stackmake(tail->val / 10);
//        tail->next = tmp;
//        tail->val %= 10;
//    }
//    return head;
//}
//
//int main(void)
//{
//    struct ListNode* p1 = NULL;
//    StackInit(p1);
//    StackPush(p1,)
//    return 0;
//}