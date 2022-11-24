#include <iostream>
#include <string>
#include<deque>
#include<algorithm>// 标准算法头文件
using namespace std;


void printDeque(const deque<int>& d) {
	for (auto item : d) {
		cout << item << " ";
	}
	cout << endl;
}

void test() {
	deque<int> d;
	d.push_back(30);
	d.push_back(50);
	d.push_back(20);
	d.push_back(40);
	d.push_back(10);
	printDeque(d);

	// 排序，默认从小到大
	// 对于支持随机访问的迭代器容器，都可以利用sort来排序
	// vector容器也支持sort排序
	sort(d.begin(), d.end());
	printDeque(d);
}

int main() {
	test();

	system("pause");
	return 0;
}