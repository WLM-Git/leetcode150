//#include <iostream>
//using namespace std;
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//ListNode* reverseList(ListNode* head);
//int main()
//{
//
//	return 0;
//}
//
//ListNode* reverseList(ListNode* head)
//{
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	ListNode* pre = NULL;
//	ListNode* next = head->next;
//
//	while (head->next != NULL)
//	{
//		head->next = pre;
//		pre = head;
//		head = next;
//		next = head->next;
//	}
//	head->next = pre;
//	return head;
//}
