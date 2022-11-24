#include <iostream>
#include <string>
#include<set>
using namespace std;

// set 和multiset区别
template<class T>
void myPrint(T& s) {
	for (auto item : s) {
		cout << item << " ";
	}
	cout << endl;
}
void test() {
	set<int> s;
	pair<set<int>::iterator, bool> ret=s.insert(1);
	if (ret.second) {
		cout << "第一次插入成功" << endl;
	}
	else {
		cout << "第一次插入失败" << endl;
	}

	ret = s.insert(1);
	if (ret.second) {
		cout << "第二次插入成功" << endl;
	}
	else {
		cout << "第二次插入失败" << endl;
	}

	myPrint(s);
}

// multiset 会插入重复数据，并且在插入时也会做好排序
void test2() {
	multiset<int> ms;
	ms.insert(4);
	ms.insert(2);
	ms.insert(1);
	ms.insert(1);
	ms.insert(3);
	ms.insert(1);
	ms.insert(1);

	myPrint(ms);
}

int main() {
	test();

	test2();

	system("pause");
	return 0;
}