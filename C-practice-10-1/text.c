//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode 
//{
//    int val;
//    struct ListNode* next;
//
//};
//typedef struct Node {
//    int data;
//    struct Node* next;
//} Node;
//
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
//            cur->val %=10;
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
//Node* create_l1() {
//    Node* l1 = (Node*)malloc(sizeof(Node));
//    l1->data = 9;
//    l1->next = NULL;
//    Node* cur = l1;
//    for (int i = 0; i < 6; i++) {
//        Node* new_node = (Node*)malloc(sizeof(Node));
//        new_node->data = 9;
//        new_node->next = NULL;
//        cur->next = new_node;
//        cur = new_node;
//    }
//    return l1;
//}
//
//Node* create_l2() {
//    Node* l2 = (Node*)malloc(sizeof(Node));
//    l2->data = 9;
//    l2->next = NULL;
//    Node* cur = l2;
//    for (int i = 0; i < 3; i++) {
//        Node* new_node = (Node*)malloc(sizeof(Node));
//        new_node->data = 9;
//        new_node->next = NULL;
//        cur->next = new_node;
//        cur = new_node;
//    }
//    return l2;
//}
//
//int main() {
//    Node* l1 = create_l1();
//    Node* l2 = create_l2();
//    addTwoNumbers(l1, l2);
//    return 0;
//}
//用链表两数相加
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
//            cur->val %= 10;
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