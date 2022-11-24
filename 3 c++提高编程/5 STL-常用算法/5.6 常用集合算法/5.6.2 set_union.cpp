#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

//set_union 求容器并集

void print(int val) {
	cout << val << " ";
}

void test() {
	vector<int> v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	for_each(v2.begin(), v2.end(), print);
	cout << endl;

	vector<int> vt;
	// 求并集 需要先开辟目标容器空间
	// 可以取两个容器空间之和
	vt.resize(v1.size() + v2.size());

	// 返回目标容器的最后一个元素的迭代器地址
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(),
											v2.begin(), v2.end(), vt.begin());

	cout << "并集：" << endl;
	for_each(vt.begin(), itEnd, print);
	cout << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}