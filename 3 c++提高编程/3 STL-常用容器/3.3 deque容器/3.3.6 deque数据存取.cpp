
#include <iostream>
#include <string>
#include<deque>
using namespace std;


void printDeque(const deque<int>& d) {
	for (auto item : d) {
		cout << item << " ";
	}
	cout << endl;
}

void test() {
	deque<int> d;
	for (int i = 0; i < 5; i++) {
		d.push_front(i);
	}
	printDeque(d);

	//at(int idx); //返回索引idx所指的数据
	cout << d.at(2) << endl;
	
	//operator[]; //返回索引idx所指的数据
	cout << d[2] << endl;

	//front(); //返回容器中第一个数据元素
	cout << d.front() << endl;

	//back(); //返回容器中最后一个数据元素
	cout << d.back() << endl;

}

int main() {
	test();

	system("pause");
	return 0;
}