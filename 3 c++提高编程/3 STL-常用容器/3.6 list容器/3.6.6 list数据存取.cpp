#include <iostream>
#include <string>
#include<list>
using namespace std;

void test() {
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);

	// l[0];  // 错误
	// l.at(0);  // 错误
	// 原因：list本质是双向迭代器，不是随机迭代器，不支持随机访问，不是连续线性存储。

	cout << "first item: " << l.front() << endl;
	cout << "last item: " << l.back() << endl;
	list<int>::iterator it = l.begin();
	it++;// 支持双向
	it++++;
	it--;
	//it = it + 1;//不支持随机访问 即便是+1；


}

int main() {
	test();

	system("pause");
	return 0;
}