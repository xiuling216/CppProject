#include <iostream>
#include <string>
#include<set>
using namespace std;

void test() {
	set<int> s;
	s.insert(2);
	s.insert(2);
	s.insert(1);
	s.insert(3);
	s.insert(4);
	s.insert(5);

	//find(key); //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
	set<int>::iterator pos = s.find(2);
	if (pos != s.end()) {
		cout << "finded:" << *pos << endl;
	}
	else {
		cout << "not find" << endl;
	}

	//count(key); //统计key的元素个数
	int n = s.count(2);
	cout << "s中2的个数:" << n << endl;
	n = s.count(9);
	cout << "s中9的个数:" << n << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}