
#include <iostream>
#include <string>
#include<deque>
using namespace std;

//deque<T> deqT;			//默认构造形式
//deque(beg, end);		//构造函数将[beg, end)区间中的元素拷贝给本身。
//deque(n, elem);			//构造函数将n个elem拷贝给本身。
//deque(const deque& deq); //拷贝构造函数

void printDeque(const deque<int>& d) {
	// const_iterator const迭代器
	for (deque<int>::const_iterator it = d.begin(); it < d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test() {
	deque<int> d;
	for (int i = 0; i < 5; i++) {
		d.push_back(i);
	}

	printDeque(d);

	//deque(beg, end);		//构造函数将[beg, end)区间中的元素拷贝给本身。
	deque<int> d2(d.begin(), d.end());
	printDeque(d2);

	//deque(n, elem);			//构造函数将n个elem拷贝给本身。
	deque<int> d3(10, 5);
	printDeque(d3);

	//deque(const deque& deq); //拷贝构造函数
	deque<int> d4(d3);
	printDeque(d4);

	cout << d.front() << endl;  // 第一个元素
	cout << d.back() << endl;  // 最后一个元素
	cout << *d.begin() << endl;  // 第一个元素
	cout << *(d.end() - 1) << endl;  // 最后一个元素
	cout << *d.rbegin() << endl;  // 最后一个元素
	cout << *(d.rend()-1) << endl;  // 第一个元素
}

int main() {
	test();

	system("pause");
	return 0;
}