#include <iostream>
#include <string>
#include<map>
using namespace std;

void test() {
	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(3, 40));


	map<int,int>::iterator it = m.find(3);
	if (it !=m.end()) {
		cout << " find! key = " << (*it).first
			<< " value = " << (*it).second
			<< endl;
	}
	else {
		cout << "not find" << endl;
	}

	// 统计
	// 由于map只能插入不可重复key值的元素，所以统计结果只能是 0 或 1
	// multimap 可以统计出 0 或n
	int n = m.count(3);
	cout << "find key =3 times:" << n << endl;

	n = m.count(5);
	cout << "find key =5 times:" << n << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}