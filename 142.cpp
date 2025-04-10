//#include <iostream>
//using namespace std;
//
//
//struct ListNode 
//{
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}	
//};
//
//ListNode* detectCycle(ListNode* head);
//
//int main()
//{
//
//	return 0;
//}
//
//ListNode* detectCycle(ListNode* head)
//{
//	ListNode* fast = head;
//	ListNode* slow = head;
//	while (fast != NULL && fast->next != NULL)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//		//此时成环
//		if (fast == slow)
//		{
//			slow = head;
//			while (slow != fast)
//			{
//				slow = slow->next;
//				fast = fast->next;
//			}
//			return slow;
//		}
//	}
//	return NULL;
//}
