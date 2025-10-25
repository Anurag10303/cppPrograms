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


bool CyclicLinkedList(ListNode* head) {
	set<ListNode*>s;
	while (head != NULL) {
		if (s.find(head) != s.end()) {
			return true;
		} else {
			s.insert(head);
			head = head->next;
		}
	}
	return false;
}
int main() {
	ListNode* head = new ListNode(10); // LinkedList is empty
	head->next = new ListNode(20);
	head->next->next = new ListNode(30);
	head->next->next->next = new ListNode(40);
	head->next->next->next->next = new ListNode(50);
	head->next->next->next->next->next = new ListNode(60);
	// head->next->next->next->next->next->next = head->next;

	CyclicLinkedList(head) ? cout << "true" : cout << "false";
	return 0;
}