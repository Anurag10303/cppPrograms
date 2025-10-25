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

ListNode* reverseIterative(ListNode* head) {
	ListNode* prev = NULL;
	ListNode* curr = head;
	while (curr != NULL) {
		ListNode* temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	return prev;
}

// int CountLinkedList(ListNode* head) {
// 	if (head == NULL) {
// 		return 0;
// 	}
// 	head = head->next;
// 	return 1 + CountLinkedList(head);
// }

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

	// Reverse the linked list and store the new head
	head = reverseIterative(head);

	// Count after reversal
	printLinkedList(head);

	return 0;
}

