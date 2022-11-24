#include <iostream>
#include <string>
#include<list>
#include<algorithm>

using namespace std;
void printList(const list<int>& l) {
	for (auto item : l) {
		cout << item << " ";
	}
	cout << endl;

}
bool myCompare(int v1, int v2) {
	// 降序 就让第一个数 > 第二个数
	return v1 > v2;
}

void test() {
	list<int> l;
	for (int i = 0; i < 5; i++) {
		l.push_back(i);
	}
	printList(l);

	l.reverse();
	printList(l);

	//所有不支持随机访问迭代器的容器，不可以用标准算法
	// 不支持随机访问迭代器的容器，内部会提供对应的算法
	//sort(l.begin(), l.end());
	
	//使用容器内部算法排序 sort排序，默认升序
	l.sort();
	cout << "升序：" << endl;
	printList(l);

	l.sort(myCompare);
	cout << "降序：" << endl;
	printList(l);
}

int main() {
	test();

	system("pause");
	return 0;
}