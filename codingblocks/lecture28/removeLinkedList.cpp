#include<iostream>
#include<set>
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


void CyclicLinkedList(ListNode* head) {
	ListNode* slow = head;
	ListNode* fast = head;
	while (true) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) {
			break;
		}
	}
	// at this point of time slow and fast are at the start of the cycle
	ListNode* prev->head;
	while (prev->next != fast) {
		prev->prev->next;
	}
	slow->head;
	while (slow != fast) {
		slow->slow->next;
		fast->fast->next;
		prev->prev->next;
	}
	// at this point of time slow and fast are at the start of the cycle

}
int main() {
	ListNode* head = new ListNode(10); // LinkedList is empty
	head->next = new ListNode(20);
	head->next->next = new ListNode(30);
	head->next->next->next = new ListNode(40);
	head->next->next->next->next = new ListNode(50);
	head->next->next->next->next->next = new ListNode(60);
	head->next->next->next->next->next->next = head->next;

	CyclicLinkedList(head) ? cout << "true" : cout << "false";
	return 0;
}