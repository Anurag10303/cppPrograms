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

ListNode* MidLinkedList(ListNode* head) {
	if (head == NULL) {
		return NULL;
	}
	ListNode* slow = head;
	ListNode* fast = head->next;
	while (fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
int main() {
	ListNode* head = NULL; // LinkedList is empty

	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	ListNode* mid = MidLinkedList(head);
	cout << mid->val;
	return 0;
}