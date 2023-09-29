#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
//
//bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
//    flowerbed[flowerbedSize] = 0;
//    int c = 1;
//    for (long long i = 0; i < flowerbedSize + 1; i++)
//    {
//        if (flowerbed[i] == 0)
//        {
//            c++;
//        }
//        if (flowerbed[i] == 1)
//        {
//            if (c > 2)
//            {
//                n -= (c - 1) / 2;
//                c = 0;
//            }
//            else
//            {
//                c = 0;
//            }
//        }
//    }
//    if (c > 2)
//    {
//        n -= (c - 1) / 2;
//        c = 0;
//    }
//    if (n <= 0)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//int main(void)
//{
//	int flowerbed[5] = { 1,0,0,0,1 };
//    canPlaceFlowers(flowerbed, 5, 2);
//	return 0;
//}
//
//class Solution {
//    public boolean canPlaceFlowers(int[] flowerbed, int n) {
//        int a = 0, c;
//        for (int i = 0; i < flowerbed.length + 2; ++i) {//在flowerbed[0]前和flowerbed[flowerbed.length-1]后分别放置一个0
//            c = 0;
//            if (i > 0 && i < flowerbed.length + 1) {
//                c = flowerbed[i - 1];
//            }
//            if (c == 0) {
//                ++a;//计算多少个0连续
//            }
//            if (c == 1) {
//                if (a > 2) {
//                    n -= (a - 1) / 2;
//                }
//                a = 0;
//            }
//        }
//        if (a > 2) {
//            n -= (a - 1) / 2;
//        }
//        if (n <= 0) {
//            return true;
//        }
//        return false;
//    }
//}

//种花小题目
//bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
//    int c = 1;
//    for (long long i = 0; i < flowerbedSize; i++)
//    {
//        if (flowerbed[i] == 0)
//        {
//            if (i == flowerbedSize - 1)
//            {
//                c += 2;
//            }
//            else
//
//            {
//                c++;
//            }
//        }
//        if (flowerbed[i] == 1)
//        {
//            if (c > 2)
//            {
//                n -= (c - 1) / 2;
//                c = 0;
//            }
//            else
//            {
//                c = 0;
//            }
//        }
//    }
//    if (c > 2)
//    {
//        n -= (c - 1) / 2;
//        c = 0;
//    }
//    if (n <= 0)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
struct ListNode {
    int val;
    struct ListNode* next;
    
};
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* head1 = l1;
    struct ListNode* head2 = l2;
    while (head1 && head2)
    {
        int add = 0;
        int sum = head1->val + head2->val + add;
        if (head1->next == NULL && sum >= 10)
        {
            struct ListNode* newcode = (struct ListNode*)malloc(sizeof(struct ListNode));
            head1->next = newcode;
            head1->val = sum % 10;
            newcode->val = sum / 10;
        }
        else
        {
            int add = sum / 10;
            sum %= 10;
            head1->val = sum;
        }

        head1 = head1->next;
        head2 = head2->next;

    }
}