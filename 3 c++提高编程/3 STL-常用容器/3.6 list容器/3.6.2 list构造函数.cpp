

#include <iostream>
#include <string>
#include<list>
using namespace std;

//list<T> lst; //list采用采用模板类实现,对象的默认构造形式：
//list(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身。
//list(n, elem); //构造函数将n个elem拷贝给本身。
//list(const list& lst); //拷贝构造函数。
void printList(const list<int>& l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test() {
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_front(3);
	l.push_front(4);
	printList(l);

	list<int> l2(l.begin(), l.end());
	printList(l2);

	list<int> l3(l2);
	printList(l3);

	list<int>l4(10, 3);
	printList(l4);

}

int main() {
	test();

	system("pause");
	return 0;
}