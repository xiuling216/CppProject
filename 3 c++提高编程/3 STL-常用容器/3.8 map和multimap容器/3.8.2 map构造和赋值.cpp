#include <iostream>
#include <string>
#include<map>
using namespace std;

void printMap(const map<int, int>& m) {
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << (*it).first
			<< " value = " << it->second
			<< endl;
	}
	cout << endl;
}
void test() {
	// 创建map，insert插入数据，默认按key值升序排序
	// 不运行插入重复key值
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(4, 50));
	printMap(m);

	// 拷贝构造
	map<int, int> m2(m);
	printMap(m2);

	// 赋值
	map<int, int> m3;
	m3 = m2;
	printMap(m3);

	
}

int main() {
	test();

	system("pause");
	return 0;
}