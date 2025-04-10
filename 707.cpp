//#include<iostream>
//using namespace std;
//
//class MyLinkedList {
//public:
//    MyLinkedList() {}
//
//    int get(int index) {
//        if (head == NULL) {
//            return -1;
//        }
//
//        int len = 0;
//        Node* cur = head;
//        while (cur != NULL) {
//            len++;
//            cur = cur->next;
//        }
//        cur = head;
//        if (index >= 0 && index < len) {
//            while (index > 0) {
//                index--;
//                cur = cur->next;
//            }
//            return cur->val;
//        }
//        else {
//            return -1;
//        }
//    }
//
//    void addAtHead(int val) {
//        // 两种情况
//        // 1.链表为空
//        if (this->head == NULL) {
//            head = new Node(val);
//        }
//        // 2.链表不为空
//        else {
//            Node* newHead = new Node(val);
//            newHead->next = head;
//            head = newHead;
//        }
//    }
//
//    void addAtTail(int val) {
//        // 两种情况
//        // 1.链表为空
//        if (this->head == NULL) {
//            head = new Node(val);
//        }
//        // 2.链表不为空
//        else {
//            Node* cur = head;
//            while (cur->next != NULL) {
//                cur = cur->next;
//            }
//            Node* Tail = new Node(val);
//            cur->next = Tail;
//        }
//    }
//
//    void addAtIndex(int index, int val) {
//        Node* cur = head;
//        int len = 0;
//        while (cur != NULL) {
//            len++;
//            cur = cur->next;
//        }
//        cur = head;
//        // 长度为零时，只有当index为0时才加入节点
//        if (len == 0) {
//            if (index == 0) {
//                addAtHead(val);
//            }
//        }
//        else if (index < len) {
//            if (index == 0) {
//                addAtHead(val);
//            }
//            else {
//                while (index - 1 > 0) {
//                    cur = cur->next;
//                    index--;
//                }
//                Node* newNode = new Node(val);
//                newNode->next = cur->next;
//                cur->next = newNode;
//            }
//        }
//        else if (index == len) {
//            Node* cur = head;
//            while (cur->next != NULL) {
//                cur = cur->next;
//            }
//            cur->next = new Node(val);
//        }
//    }
//
//    void deleteAtIndex(int index) {
//        // 没有节点时
//        if (head == NULL) {
//            return;
//        }
//        // 只有头节点时
//        if (head->next == NULL) {
//            if (index == 0) {
//                delete head;
//                head = NULL;
//            }
//            return;
//        }
//        // 至少两个节点时
//        int len = 0;
//        Node* cur = head;
//        while (cur != NULL) {
//            cur = cur->next;
//            len++;
//        }
//        if (index >= 0 && index < len) {
//            if (index == 0) {
//                Node* tmp = head;
//                head = head->next;
//                delete tmp;
//            }
//            else {
//                Node* cur = head;
//                Node* tmp;
//                while (index - 1 > 0) {
//                    cur = cur->next;
//                    index--;
//                }
//                tmp = cur->next;
//                cur->next = cur->next->next;
//                delete tmp;
//            }
//        }
//    }
//
//    struct Node {
//        int val;
//        Node* next;
//        Node(int val) {
//            this->val = val;
//            this->next = NULL;
//        }
//    };
//    Node* head = NULL;
//};
//
//int main()
//{
//    MyLinkedList list;
//    list.addAtHead(4);
//    list.get(1);
//    list.addAtHead(1);
//    list.addAtHead(5);
//    list.deleteAtIndex(3);
//    list.addAtHead(7);
//    list.get(3);
//    list.get(3);
//    list.get(3);
//    list.addAtHead(1);
//    list.deleteAtIndex(4);
//	return 0;
//}