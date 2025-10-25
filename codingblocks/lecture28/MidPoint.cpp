#include<iostream>
using namespace std;
class ListNode {
public:
	int val;
	ListNode* next;
	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}
};
void insertAtHead(ListNode*& headRef, int val) {
	ListNode* n = new ListNode(val);
	n->next = headRef;
	headRef = n;
}
int CountLinkedList(ListNode* head) {
	if (head == NULL) {
		return 0;
	}
	head = head->next;
	return 1 + CountLinkedList(head);
}
ListNode* MidLinkedList(ListNode* head, int cnt, int i) {
	while (i < cnt / 2) {
		head = head->next;
		i++;
	}
	return head;
}
int main() {
	ListNode* head = NULL; // LinkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	int cnt = CountLinkedList(head);
	ListNode* mid = MidLinkedList(head, cnt, 0);
	cout << mid->val;
	return 0;
}