#pragma once
#include <vector>

using namespace std;

 struct ListNode {
	int val;
	ListNode* next;
	ListNode();
	ListNode(int x);
	ListNode(int x, ListNode* next);

	ListNode* createList(vector<int>& data);
	void printList();

	~ListNode() = default;	
};

