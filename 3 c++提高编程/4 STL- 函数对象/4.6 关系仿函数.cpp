#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

class MyCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

void printVector(const vector<int>& v) {
	for (auto item : v) {
		cout << item << " ";
	}
	cout << endl;
}

void test() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	vector<int> v2(v);

	printVector(v);

	// 使用sort默认升序
	sort(v.begin(), v.end());
	printVector(v);

	// 自己写仿函数 降序
	sort(v.begin(), v.end(), MyCompare());
	printVector(v);

	//利用functional 中 内建关系仿函数：greater<int>() 降序
	// greater<int>()就实现了自己定义的MyCompare()
	cout << "------------v2" << endl;
	printVector(v2);
	sort(v2.begin(), v2.end(), greater<int>());
}

int main() {
	test();

	system("pause");
	return 0;
}