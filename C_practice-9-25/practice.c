#define _CRT_SECURE_NO_WARNINGS

//���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������
//struct ListNode* reverseList(struct ListNode* head) {
//    //�������Ϊ�գ��򷵻ؿ�
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    else
//    {
//        //����һ��tailָ��ָ��ͷ�ڵ㣬һ��curָ��ָ��ͷ�ڵ㣬һ��newcurָ��ָ��ͷ�ڵ�
//        struct ListNode* tail = head;
//        struct ListNode* cur = head;
//        struct ListNode* newcur = head;
//        //��newcurָ�����һ���ڵ㲻Ϊ��ʱ��ѭ��ִ��
//        while (newcur->next != NULL)
//        {
//            newcur = newcur->next;
//        }
//        //������Ϊ��ʱ��ѭ��ִ��
//        while (1)
//        {
//            //����һ��curָ��ָ��ͷ�ڵ㣬һ��tailָ��ָ��ͷ�ڵ�
//            struct ListNode* cur = head;
//            struct ListNode* tail = head;
//            //��tailָ�����һ���ڵ㲻Ϊ��ʱ��ѭ��ִ��
//            while (tail->next != NULL)
//            {
//                tail = tail->next;
//
//            }
//            //���tailָ��ָ��ͷ�ڵ㣬������ѭ��
//            if (tail == cur)
//            {
//                break;
//            }
//            else
//            {
//                while (cur->next != tail)
//                {  //��curָ�����һ���ڵ㲻Ϊ��ʱ��ѭ��ִ��
//                    while (cur->next != tail)
//                    {
//                        cur = cur->next;
//                    }
//                    //��tailָ��ָ��curָ�룬��curָ��ָ���
//                    tail->next = cur;
//                    cur->next = NULL;
//                }
//
//            }
//            //����newcurָ��
//            return newcur;
//
//        }
//    }
//��ʦ��ʾ��
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
//�ϳ�������
//struct ListNode* Buynewcode(int x)
//{
//    struct ListNode* newcode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    newcode->val = x;
//    newcode->next = NULL;
//    return newcode;
//}
////�ϲ���������
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    //����һ���µ�����
//    struct ListNode* newcode = NULL;
//    //��������ָ��ֱ�ָ����������
//    struct ListNode* cur1 = list1;
//    struct ListNode* cur2 = list2;
//    //����һ��ָ��ָ��������
//    struct ListNode* head = NULL;
//    //�����������Ϊ�գ��򷵻ؿ�
//    if (list1 == NULL && list2 == NULL)
//    {
//        return NULL;
//    }
//    //������������Ϊ��ʱ���Ƚ����������ֵ������С��ֵ��ӵ���������
//    while (cur1 && cur2)
//    {
//
//        if (cur1->val < cur2->val)
//        {
//            //���������Ϊ�գ��򽫵�һ�������ֵ��ӵ���������
//            if (head == NULL)
//            {
//                newcode = Buynewcode(cur1->val);
//                head = newcode;
//            }
//            //���������Ϊ�գ��򽫵�һ�������ֵ��ӵ���������
//            else
//            {
//                struct ListNode* new2 = Buynewcode(cur1->val);
//                newcode->next = new2;
//                newcode = new2;
//            }
//            //����һ�������ָ��ָ����һ���ڵ�
//            cur1 = cur1->next;
//        }
//        //�����һ�������ֵ���ڵڶ��������ֵ���򽫵ڶ��������ֵ��ӵ���������
//        else
//        {
//            //���������Ϊ�գ��򽫵ڶ��������ֵ��ӵ���������
//            if (head == NULL)
//            {
//                newcode = Buynewcode(cur2->val);
//                head = newcode;
//            }
//            //���������Ϊ�գ��򽫵ڶ��������ֵ��ӵ���������
//            else
//            {
//                struct ListNode* new2 = Buynewcode(cur2->val);
//                newcode->next = new2;
//                newcode = new2;
//            }
//            //���ڶ��������ָ��ָ����һ���ڵ�
//            cur2 = cur2->next;
//        }
//    }
//    //�����һ������Ϊ�գ��򽫵�һ�������ֵ��ӵ���������
//    if (cur1 != NULL)
//    {
//        while (cur1 != NULL)
//        {
//            //���������Ϊ�գ��򽫵�һ�������ֵ��ӵ���������
//            if (head == NULL)
//            {
//                newcode = Buynewcode(cur1->val);
//                head = newcode;
//                cur1 = cur1->next;
//            }
//            //���������Ϊ�գ��򽫵�һ�������ֵ��ӵ���������
//            else
//            {
//                struct ListNode* new3 = Buynewcode(cur1->val);
//                newcode->next = new3;
//                newcode = new3;
//                cur1 = cur1->next;
//            }
//        }
//    }
//    //����ڶ�������Ϊ�գ��򽫵ڶ��������ֵ��ӵ���������
//    if (cur2 != NULL)
//    {
//        while (cur2 != NULL)
//        {
//            //���������Ϊ�գ��򽫵ڶ��������ֵ��ӵ���������
//            if (head == NULL)
//            {
//                newcode = Buynewcode(cur2->val);
//                head = newcode;
//                cur2 = cur2->next;
//            }
//            //���������Ϊ�գ��򽫵ڶ��������ֵ��ӵ���������
//            else
//            {
//                struct ListNode* new3 = Buynewcode(cur2->val);
//                newcode->next = new3;
//                newcode = new3;
//                cur2 = cur2->next;
//            }
//        }
//    }
//    //����������
//    return head;
//}
//��ʦ���㷨
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
//}//�ϲ�������������һ���µ�����
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    //����ͷ�ڵ��β�ڵ�
//    struct ListNode* head = NULL;
//    struct ListNode* tail = NULL;
//    //������������Ľڵ�
//    struct ListNode* l1 = list1;
//    struct ListNode* l2 = list2;
//    //���list1Ϊ�գ�����list2
//    if (list1 == NULL)
//    {
//        return list2;
//    }
//    //���list2Ϊ�գ�����list1
//    if (list2 == NULL)
//    {
//        return list1;
//    }
//    //������������Ϊ��ʱ���ȽϽڵ�ֵ������С�Ľڵ���ӵ���������
//    while (l1 && l2)
//    {
//        //���l1�Ľڵ�ֵС��l2�Ľڵ�ֵ
//        if (l1->val < l2->val)
//        {
//            //���ͷ�ڵ�Ϊ�գ���ͷ�ڵ��β�ڵ㶼ָ��l1
//            if (head == NULL)
//            {
//                head = tail = l1;
//            }
//            //���򣬽�l1����һ���ڵ�ָ��tail��tailָ��l1
//            else
//            {
//                tail->next = l1;
//                tail = tail->next;
//            }
//            //l1ָ����һ���ڵ�
//            l1 = l1->next;
//        }
//        //���l1�Ľڵ�ֵ���ڵ���l2�Ľڵ�ֵ
//        else
//        {
//            //���ͷ�ڵ�Ϊ�գ���ͷ�ڵ��β�ڵ㶼ָ��l2
//            if (head == NULL)
//            {
//                head = tail = l2;
//            }
//            //���򣬽�l2����һ���ڵ�ָ��tail��tailָ��l2
//            else
//            {
//                tail->next = l2;
//                tail = tail->next;
//            }
//            //l2ָ����һ���ڵ�
//            l2 = l2->next;
//        }
//    }
//    //���l1��Ϊ�գ���l1�Ľڵ���ӵ���������
//    if (l1)
//    {
//        tail->next = l1;
//    }
//    //���l2��Ϊ�գ���l2�Ľڵ���ӵ���������
//    if (l2)
//    {
//        tail->next = l2;
//    }
//    //����ͷ�ڵ�
//    return head;
//}