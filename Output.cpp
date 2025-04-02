#include "Output.h"
#include "Solution.h"
#include "EqualsLists.h"
#include <iostream>

void Output::setOutputData(int test, vector<vector<int>>& listData, vector<int>& expectedData){
	setTest(test);
	setListData(listData);
	setExpectedData(expectedData);
}

void Output::printVcrtor(vector<ListNode*>& lists){
	if (lists.size() == 0) {
		cout << "[]" << endl;
	}
	else {
		cout << "-----" << endl;
		for (auto list : lists) {
			list->printList();
		}
		cout << "-----" << endl;
	}
}

void Output::printSolution(){
	Solution solution;
	cout << "============ Тест №" << _test << " ============" << endl;
	cout << " Входные данные: " << endl;
	cout << " list: " << endl;
	vector<ListNode*> _lists;
	setLists(_lists);
	printVcrtor(_lists);
	ListNode* _expected = new ListNode();
	if (_expectedData.empty()) _expected = nullptr;
	else _expected->createList(_expectedData);
	cout << " Ожидаемый результат: " << endl;
	_expected->printList();
	ListNode* _result = solution.mergeKLists(_lists);
	cout << " Результат: " << endl;
	_result->printList();
	cout << "============ Проверка ============" << endl;
	EqualsLists equalsLists;
	if (equalsLists.equalsLists(_result, _expected)) {
		cout << " Тест пройден" << endl;
	}
	else {
		cout << " Тест не пройден" << endl;
	}
	cout << "==================================\n" << endl;
}

void Output::setTest(int test) {
	_test = test;
}

void Output::setListData(vector<vector<int>>& listData){
	_listData = listData;
}

void Output::setExpectedData(vector<int>& expectedData){
	_expectedData = expectedData;
}

void Output::setLists(vector<ListNode*>& _lists){
	for (auto listData : _listData) {
		if (listData.empty()) {
			_lists.push_back(nullptr);
			continue;
		}
		ListNode* list = new ListNode();
		list->createList(listData);
		_lists.push_back(list);
	}
}




