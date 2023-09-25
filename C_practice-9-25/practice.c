#define _CRT_SECURE_NO_WARNINGS

//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
//struct ListNode* reverseList(struct ListNode* head) {
//    //如果链表为空，则返回空
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    else
//    {
//        //定义一个tail指针指向头节点，一个cur指针指向头节点，一个newcur指针指向头节点
//        struct ListNode* tail = head;
//        struct ListNode* cur = head;
//        struct ListNode* newcur = head;
//        //当newcur指针的下一个节点不为空时，循环执行
//        while (newcur->next != NULL)
//        {
//            newcur = newcur->next;
//        }
//        //当链表不为空时，循环执行
//        while (1)
//        {
//            //定义一个cur指针指向头节点，一个tail指针指向头节点
//            struct ListNode* cur = head;
//            struct ListNode* tail = head;
//            //当tail指针的下一个节点不为空时，循环执行
//            while (tail->next != NULL)
//            {
//                tail = tail->next;
//
//            }
//            //如果tail指针指向头节点，则跳出循环
//            if (tail == cur)
//            {
//                break;
//            }
//            else
//            {
//                while (cur->next != tail)
//                {  //当cur指针的下一个节点不为空时，循环执行
//                    while (cur->next != tail)
//                    {
//                        cur = cur->next;
//                    }
//                    //将tail指针指向cur指针，将cur指针指向空
//                    tail->next = cur;
//                    cur->next = NULL;
//                }
//
//            }
//            //返回newcur指针
//            return newcur;
//
//        }
//    }
//老师的示范
//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* n1 = NULL, * n2 = head, * n3 = n2->next;
//    while (n2)
//    {
//        n2->next = n1;
//        n1 = n2;
//        n2 = n3;
//        if (n3 != NULL)
//        {
//            n3 = n3->next;
//        }
//    }
//    return n1;
//}
//合成新链表
//struct ListNode* Buynewcode(int x)
//{
//    struct ListNode* newcode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    newcode->val = x;
//    newcode->next = NULL;
//    return newcode;
//}
////合并两个链表
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    //定义一个新的链表
//    struct ListNode* newcode = NULL;
//    //定义两个指针分别指向两个链表
//    struct ListNode* cur1 = list1;
//    struct ListNode* cur2 = list2;
//    //定义一个指针指向新链表
//    struct ListNode* head = NULL;
//    //如果两个链表都为空，则返回空
//    if (list1 == NULL && list2 == NULL)
//    {
//        return NULL;
//    }
//    //当两个链表都不为空时，比较两个链表的值，将较小的值添加到新链表中
//    while (cur1 && cur2)
//    {
//
//        if (cur1->val < cur2->val)
//        {
//            //如果新链表为空，则将第一个链表的值添加到新链表中
//            if (head == NULL)
//            {
//                newcode = Buynewcode(cur1->val);
//                head = newcode;
//            }
//            //如果新链表不为空，则将第一个链表的值添加到新链表中
//            else
//            {
//                struct ListNode* new2 = Buynewcode(cur1->val);
//                newcode->next = new2;
//                newcode = new2;
//            }
//            //将第一个链表的指针指向下一个节点
//            cur1 = cur1->next;
//        }
//        //如果第一个链表的值大于第二个链表的值，则将第二个链表的值添加到新链表中
//        else
//        {
//            //如果新链表为空，则将第二个链表的值添加到新链表中
//            if (head == NULL)
//            {
//                newcode = Buynewcode(cur2->val);
//                head = newcode;
//            }
//            //如果新链表不为空，则将第二个链表的值添加到新链表中
//            else
//            {
//                struct ListNode* new2 = Buynewcode(cur2->val);
//                newcode->next = new2;
//                newcode = new2;
//            }
//            //将第二个链表的指针指向下一个节点
//            cur2 = cur2->next;
//        }
//    }
//    //如果第一个链表不为空，则将第一个链表的值添加到新链表中
//    if (cur1 != NULL)
//    {
//        while (cur1 != NULL)
//        {
//            //如果新链表为空，则将第一个链表的值添加到新链表中
//            if (head == NULL)
//            {
//                newcode = Buynewcode(cur1->val);
//                head = newcode;
//                cur1 = cur1->next;
//            }
//            //如果新链表不为空，则将第一个链表的值添加到新链表中
//            else
//            {
//                struct ListNode* new3 = Buynewcode(cur1->val);
//                newcode->next = new3;
//                newcode = new3;
//                cur1 = cur1->next;
//            }
//        }
//    }
//    //如果第二个链表不为空，则将第二个链表的值添加到新链表中
//    if (cur2 != NULL)
//    {
//        while (cur2 != NULL)
//        {
//            //如果新链表为空，则将第二个链表的值添加到新链表中
//            if (head == NULL)
//            {
//                newcode = Buynewcode(cur2->val);
//                head = newcode;
//                cur2 = cur2->next;
//            }
//            //如果新链表不为空，则将第二个链表的值添加到新链表中
//            else
//            {
//                struct ListNode* new3 = Buynewcode(cur2->val);
//                newcode->next = new3;
//                newcode = new3;
//                cur2 = cur2->next;
//            }
//        }
//    }
//    //返回新链表
//    return head;
//}
//老师的算法
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    struct ListNode* head = NULL;
//    struct ListNode* tail = NULL;
//    struct ListNode* l1 = list1;
//    struct ListNode* l2 = list2;
//    if (list1 == NULL)
//    {
//        return list2;
//    }
//    if (list2 == NULL)
//    {
//        return list1;
//    }
//    while (l1 && l2)
//    {
//        if (l1->val < l2->val)
//        {
//            if (head == NULL)
//            {
//                head = tail = l1;
//            }
//            else
//            {
//                tail->next = l1;
//                tail = tail->next;
//            }
//            l1 = l1->next;
//        }
//        else
//        {
//            if (head == NULL)
//            {
//                head = tail = l2;
//            }
//            else
//            {
//                tail->next = l2;
//                tail = tail->next;
//            }
//            l2 = l2->next;
//        }
//    }
//    if (l1)
//    {
//        tail->next = l1;
//    }
//    if (l2)
//    {
//        tail->next = l2;
//    }
//    return head;
//}//合并两个链表，返回一个新的链表
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    //定义头节点和尾节点
//    struct ListNode* head = NULL;
//    struct ListNode* tail = NULL;
//    //定义两个链表的节点
//    struct ListNode* l1 = list1;
//    struct ListNode* l2 = list2;
//    //如果list1为空，返回list2
//    if (list1 == NULL)
//    {
//        return list2;
//    }
//    //如果list2为空，返回list1
//    if (list2 == NULL)
//    {
//        return list1;
//    }
//    //当两个链表都不为空时，比较节点值，将较小的节点添加到新链表中
//    while (l1 && l2)
//    {
//        //如果l1的节点值小于l2的节点值
//        if (l1->val < l2->val)
//        {
//            //如果头节点为空，则头节点和尾节点都指向l1
//            if (head == NULL)
//            {
//                head = tail = l1;
//            }
//            //否则，将l1的下一个节点指向tail，tail指向l1
//            else
//            {
//                tail->next = l1;
//                tail = tail->next;
//            }
//            //l1指向下一个节点
//            l1 = l1->next;
//        }
//        //如果l1的节点值大于等于l2的节点值
//        else
//        {
//            //如果头节点为空，则头节点和尾节点都指向l2
//            if (head == NULL)
//            {
//                head = tail = l2;
//            }
//            //否则，将l2的下一个节点指向tail，tail指向l2
//            else
//            {
//                tail->next = l2;
//                tail = tail->next;
//            }
//            //l2指向下一个节点
//            l2 = l2->next;
//        }
//    }
//    //如果l1不为空，将l1的节点添加到新链表中
//    if (l1)
//    {
//        tail->next = l1;
//    }
//    //如果l2不为空，将l2的节点添加到新链表中
//    if (l2)
//    {
//        tail->next = l2;
//    }
//    //返回头节点
//    return head;
//}