//#include <iostream>
//using namespace std;
//
//struct ListNode 
//{
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//ListNode* removeNthFromEnd(ListNode* head, int n);
//
//int main()
//{
//
//	return 0;
//}
//
//ListNode* removeNthFromEnd(ListNode* head, int n)
//{
//	ListNode* VHead = new ListNode(0, head);
//
//	//slowΪ�������nλ��ǰһλ
//	ListNode* slow = VHead;
//	//fast���ָ�����һλ��next
//	ListNode* fast = VHead;
//	
//	while (fast != NULL)
//	{
//		if (n >= 0)
//		{
//			fast = fast->next;
//			n--;
//		}
//		else
//		{
//			fast = fast->next;
//			slow = slow->next;
//		}
//	}
//
//	ListNode* tmp = slow->next;
//	slow->next = slow->next->next;
//	delete tmp;
//
//	return VHead->next;
//}
