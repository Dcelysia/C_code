#define _CRT_SECURE_NO_WARNINGS
//�ж�����᲻��ѭ��
//
//bool hasCycle(struct ListNode* head) {
//    //�������ָ��
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    //������ָ�벻Ϊ�գ��ҿ�ָ�����һ���ڵ㲻Ϊ��ʱ��ѭ��
//    while (fast && fast->next)
//    {
//        //��ָ��ÿ���ƶ������ڵ�
//        fast = fast->next->next;
//        //��ָ��ÿ���ƶ�һ���ڵ�
//        slow = slow->next;
//        //������ָ������ʱ������true
//        if (fast == slow)
//        {
//            return true;
//        }
//    }
//    //���򷵻�false
//    return false;
//
//}
//�ҵ�����ѭ�����Ǹ��ڵ�
//// ����ָ�뷨����ָ��ÿ���ƶ���������ָ��ÿ���ƶ�һ����������ָ������ʱ������ָ��ָ��ͷ�ڵ㣬������ָ���ٴ�����ʱ�������Ľڵ㼴Ϊ������ڽڵ�
//struct ListNode* detectCycle(struct ListNode* head) {
//    // �������ָ�룬��ָ��ÿ���ƶ���������ָ��ÿ���ƶ�һ��
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    // ������ָ������ʱ������ָ��ָ��ͷ�ڵ㣬������ָ���ٴ�����ʱ�������Ľڵ㼴Ϊ������ڽڵ�
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//        if (fast == slow)
//        {
//            struct ListNode* meet = slow;
//            // �������Ľڵ㲻��ͷ�ڵ�ʱ������ָ��ָ��ͷ�ڵ㣬���ٴ�����ʱ�������Ľڵ㼴Ϊ������ڽڵ�
//            while (meet != head)
//            {
//                head = head->next;
//                meet = meet->next;
//            }
//            return meet;
//        }
//    }
//    return NULL;
//}