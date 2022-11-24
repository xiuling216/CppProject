
#include <iostream>
#include <string>
#include<list>
using namespace std;

void printList(const list<int>& l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test() {
	//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
	list<int> l1;
	for (int i = 0; i < 5; i++) {
		l1.push_back(i);
	}
	printList(l1);

	list<int>l2;
	l2.assign(l1.begin(), l1.end());
	printList(l2);

	//assign(n, elem); //将n个elem拷贝赋值给本身。
	l2.assign(10, 3);
	printList(l2);

	//list& operator=(const list & lst); //重载等号操作符
	list<int> l3;
	l3 = l2;
	printList(l3);

	//swap(lst); //将lst与本身的元素互换。
	l1.swap(l3);
	cout << "互换后的：" << endl;
	printList(l1);
	printList(l3);

}

int main() {
	test();

	system("pause");
	return 0;
}