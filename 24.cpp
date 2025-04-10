//#include <iostream>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//ListNode* swapPairs(ListNode* head);
//
//int main()
//{
//	return 0;
//}
//
//ListNode* swapPairs(ListNode* head)
//{
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//	ListNode* VHead = new ListNode(0, head);
//
//	bool exchange = 1;
//	ListNode* pre = VHead;
//	ListNode* next;
//	ListNode* next_next;
//	ListNode* cur = head;
//	while (cur->next != NULL)
//	{
//		if (exchange)
//		{
//			next = cur->next;
//			next_next = cur->next->next;
//
//			pre->next = next;
//			next->next = cur;
//			cur->next = next_next;
//
//			//更新当前节点
//			cur = next;
//		}
//		pre = pre->next;
//		exchange = !exchange;
//		cur = cur->next;
//	}
//	ListNode* result = VHead->next;
//	delete VHead;
//	return result;
//}
