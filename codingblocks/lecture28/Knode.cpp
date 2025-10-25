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

ListNode* MidLinkedList(ListNode* head, int k) {
	if (head == NULL) {
		return NULL;
	}
	ListNode* slow = head;
	ListNode* fast = head;
	while (k - 1 > 0) {
		fast = fast->next;
		k--;
	}
	while (fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
}
int main() {
	ListNode* head = NULL; // LinkedList is empty
	int k = 2;
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	ListNode* mid = MidLinkedList(head, k);
	cout << mid->val;
	return 0;
}