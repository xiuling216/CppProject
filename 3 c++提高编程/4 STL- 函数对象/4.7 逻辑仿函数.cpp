#include <iostream>
#include <string>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;

void printVector(const vector<bool>& v) {
	for (auto item : v) {
		cout << item << " ";
	}
	cout << endl;
}


void test() {
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	printVector(v);

	// 利用逻辑非仿函数，将v的数据搬运到v2，并对数据取反
	vector<bool>v2;
	v2.resize(v.size());
	// transform 搬运函数
	// logical_not<bool>() 逻辑非仿函数
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	printVector(v2);
}

int main() {
	test();

	system("pause");
	return 0;
}