//#include<iostream>
//using namespace std;
//
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	ListNode() :val(0), next(nullptr) {}
//	ListNode(int x) :val(x), next(nullptr) {}
//	ListNode(int  x, ListNode* next) :val(x), next(next) {}
//};
//
//ListNode* removeElements(ListNode* head, int val);
//
//int main()
//{
//	ListNode* head = new ListNode(1);
//	return 0;
//}
//
//ListNode* removeElements(ListNode* head, int val)
//{
//	//头节点为目标数时
//	while (head != nullptr && head->val == val)
//	{
//		ListNode* tmp = head;
//		head = head->next;
//		delete tmp;
//	}
//
//	ListNode* cur = head;
//	while (cur != nullptr && cur->next != nullptr)
//	{
//		if (cur->next->val == val)
//		{
//			ListNode* tmp = cur->next;
//			cur->next = cur->next->next;
//			delete tmp;
//		}
//		else
//		{
//			cur = cur->next;
//		}
//
//	}
//	return head;
//}
