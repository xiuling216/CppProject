#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

void print(int val) {
	cout << val << " ";
}

void test() {
	vector<int> v;
	v.push_back(1);
	v.push_back(5);
	v.push_back(4);
	v.push_back(2);
	v.push_back(3);

	// 利用sort 默认升序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), print);
	cout << endl;

	// 改为降序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), print);
}

int main() {
	test();

	system("pause");
	return 0;
}