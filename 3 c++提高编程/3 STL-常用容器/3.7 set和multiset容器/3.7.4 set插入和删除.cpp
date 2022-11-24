#include <iostream>
#include <string>
#include<set>

using namespace std;

void printSet(const set<int>& s) {
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test() {
	set<int> s;

	s.insert(2);
	s.insert(1);
	s.insert(3);
	s.insert(4);
	s.insert(5);

	printSet(s);

	//erase(pos); //删除pos迭代器所指的元素，返回下一个元素的迭代器。
	set<int>::const_iterator it = s.erase(s.begin());
	cout << *it << endl;// 返回下一个元素的迭代器  元素值2
	printSet(s);

	//erase(elem); //删除容器中值为elem的元素。
	s.erase(2);
	printSet(s);

	set<int> s2(s);

	//erase(beg, end); //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
	s.erase(s.begin(), s.end());
	printSet(s);

	cout << "s2:" << endl;
	printSet(s2);

	//clear(); //清除所有元素
	s2.clear();
	cout << "s2 after clear:" << endl;
	printSet(s2);
}

int main() {
	test();

	system("pause");
	return 0;
}