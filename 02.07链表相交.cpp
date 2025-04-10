//#include <iostream>
//using namespace std;
//
//
//struct ListNode 
//{
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
// 
//ListNode* getIntersectionNode(ListNode* headA, ListNode* headB);
//
//int main()
//{
//    
//
//	return 0;
//}
//
//ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
//{
//    ListNode* a = headA;
//    ListNode* b = headB;
//
//    int lenA = 0;
//    int lenB = 0;
//
//    int diff;
//
//    while (a != NULL)
//    {
//        lenA++;
//        a = a->next;
//    }
//
//    while (b != NULL)
//    {
//        lenB++;
//        b = b->next;
//    }
//
//    diff = lenA - lenB;
//    a = headA;
//    b = headB;
//    
//    if (diff > 0)
//    {
//        while (diff > 0)
//        {
//            a = a->next;
//            diff--;
//        }
//    }
//    else if (diff < 0)
//    {
//        while (diff < 0)
//        {
//            b = b->next;
//            diff++;
//        }
//    }
//
//    while (a != NULL && b != NULL)
//    {
//        if (a == b)
//        {
//            return a;
//        }
//        a = a->next;
//        b = b->next;
//    }
//
//    return NULL;
//}
