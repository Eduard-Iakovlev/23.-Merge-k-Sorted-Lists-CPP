#include "ListNode.h"
#include <iostream>

ListNode::ListNode() : val(0), next(nullptr) {}

ListNode::ListNode(int x) : val(x), next(nullptr) {}

ListNode::ListNode(int x, ListNode* next) : val(x), next(next) {}

ListNode* ListNode::createList(vector<int>& data){
	this->val = data[0];
	ListNode* current = this;
	for (int i = 1; i < data.size(); ++i) {
		current->next = new ListNode(data[i]);
		current = current->next;
	}
	current->next = nullptr;
	return this;
}

void ListNode::printList(){
	if (this == nullptr) {
		cout << "[]";
	}
	else {
		ListNode* current = this;
		while (current != nullptr) {
			cout << current->val;
			if (current->next != nullptr) cout << "->";
			current = current->next;
		}
	}
	cout << endl;
}
