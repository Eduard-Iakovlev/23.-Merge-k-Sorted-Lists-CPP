#pragma once
#include <vector>
#include "ListNode.h"

using namespace std;

class Output{
public:
	Output() = default;
	~Output() = default;

	void setOutputData(int test, vector<vector<int>>& listData, vector<int>& expectedData);
	void printVcrtor(vector<ListNode*>& lists);
	void printSolution();

private:
	int _test;
	vector<vector<int>> _listData;
	vector<int> _expectedData;

	void setTest(int test);
	void setListData(vector<vector<int>>& listData);
	void setExpectedData(vector<int>& expectedData);
	void setLists(vector<ListNode*>& _lists);
};

