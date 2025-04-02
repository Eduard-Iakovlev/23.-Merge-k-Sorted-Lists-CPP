#include "Solution.h"
#include <algorithm>
#include <iostream>

using namespace std;

ListNode* Solution::mergeKLists(vector<ListNode*>& lists){
    if (lists.empty()) return nullptr;

    ListNode* mergeList = new ListNode();
    vector<int> mergeListData;

    for (auto list : lists) {
        while (list != nullptr) {
            mergeListData.push_back(list->val);
            list = list->next;
        }
    }
    
    if (mergeListData.empty()) return nullptr;
    sort(mergeListData.begin(), mergeListData.end());
    initList(mergeList, mergeListData);


    return mergeList;
}

void Solution::initList(ListNode* head, vector<int> mergeListData) {
    head->val = mergeListData[0];
    ListNode* current = head;
    for (int i = 1; i < mergeListData.size(); ++i) {
        current->next = new ListNode(mergeListData[i]);
        current = current->next;
    }
    current = nullptr;
}
