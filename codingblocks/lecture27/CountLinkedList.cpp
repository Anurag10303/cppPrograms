#include <iostream>
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

// Pass head by reference to modify it in main
void insertAtHead(ListNode*& headRef, int val) {
	ListNode* n = new ListNode(val);
	n->next = headRef;
	headRef = n;
}

// void CountLinkedList(ListNode* head) {//head ptr is passed by value
// 	int cnt = 0;
// 	while (head != NULL) {
// 		cnt++;
// 		head = head->next; // Move to next node
// 	}
// 	cout << cnt << endl;
// }

int CountLinkedList(ListNode* head) {
	if (head == NULL) {
		return 0;
	}
	head = head->next;
	return 1 + CountLinkedList(head);
}
void printLinkedList(ListNode* head) {//head ptr is passed by value
	while (head != NULL) {
		cout << head->val << " ";
		head = head->next; // Move to next node
	}
	cout << endl;
}

int main() {
	ListNode* head = NULL; // LinkedList is empty
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	cout << CountLinkedList(head);

	return 0;
}
