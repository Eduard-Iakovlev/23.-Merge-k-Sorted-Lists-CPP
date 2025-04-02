#pragma once
#include "ListNode.h"
#include <vector>

using namespace std;

class Solution{
public:
	ListNode* mergeKLists(vector<ListNode*>& lists);
private:
	void initList(ListNode* head, vector<int> mergeListData);
};


