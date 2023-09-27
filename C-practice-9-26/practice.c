#define _CRT_SECURE_NO_WARNINGS
//判断链表会不会循环
//
//bool hasCycle(struct ListNode* head) {
//    //定义快慢指针
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    //当快慢指针不为空，且快指针的下一个节点不为空时，循环
//    while (fast && fast->next)
//    {
//        //快指针每次移动两个节点
//        fast = fast->next->next;
//        //慢指针每次移动一个节点
//        slow = slow->next;
//        //当快慢指针相遇时，返回true
//        if (fast == slow)
//        {
//            return true;
//        }
//    }
//    //否则返回false
//    return false;
//
//}
//找到链表循环的那个节点
//// 快慢指针法，快指针每次移动两步，慢指针每次移动一步，当快慢指针相遇时，将慢指针指向头节点，当快慢指针再次相遇时，相遇的节点即为环的入口节点
//struct ListNode* detectCycle(struct ListNode* head) {
//    // 定义快慢指针，快指针每次移动两步，慢指针每次移动一步
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    // 当快慢指针相遇时，将慢指针指向头节点，当快慢指针再次相遇时，相遇的节点即为环的入口节点
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//        if (fast == slow)
//        {
//            struct ListNode* meet = slow;
//            // 当相遇的节点不是头节点时，将慢指针指向头节点，当再次相遇时，相遇的节点即为环的入口节点
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