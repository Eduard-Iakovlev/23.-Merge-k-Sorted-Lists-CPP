#include <iostream>
#include <vector>
#include "Output.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");

	int test = 0;
	vector<vector<int>> listsData;
	vector<int> expectedData;

	Output output;

	test++;
	listsData = { {1, 4, 5}, {1, 3, 4}, {2, 6} };
	expectedData = { 1, 1, 2, 3, 4, 4, 5, 6 };
	output.setOutputData(test, listsData, expectedData);
	output.printSolution();


	test++;
	listsData = {};
	expectedData = {};
	output.setOutputData(test, listsData, expectedData);
	output.printSolution();


	test++;
	listsData = {{}};
	expectedData = {};
	output.setOutputData(test, listsData, expectedData);
	output.printSolution();
;

}
