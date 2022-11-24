
#include <iostream>
#include <string>
#include<deque>

using namespace std;

//deque& operator=(const deque& deq); //重载等号操作符
//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem); //将n个elem拷贝赋值给本身。

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
	
	//deque& operator=(const deque& deq); //重载等号操作符
	deque<int> d2;
	d2 = d;
	printDeque(d2);

	
	//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
	deque<int> d3;
	d3.assign(d.begin(), d.begin()+2);
	printDeque(d3);

	//assign(n, elem); //将n个elem拷贝赋值给本身。
	deque<int> d4;
	d4.assign(10, 5);
	printDeque(d4);
}

int main() {
	test();

	system("pause");
	return 0;
}