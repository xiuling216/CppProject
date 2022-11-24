#include <iostream>
#include <string>
#include<set>
using namespace std;
void printSet(const set<int>& s) {
	for (auto item : s) {
		cout << item << " ";
	}
	cout << endl;
}

void test() {
	set<int> s;
	// set插入数据只有insert方式
	s.insert(2);
	s.insert(4);
	s.insert(2);
	s.insert(3);
	s.insert(1);

	// 不能插入重复的值，就算重复插入，也只保留一份数据
	// 元素在插入时自动被排序，默认按照升序
	printSet(s);

	// 拷贝构造函数
	set<int> s2(s);
	printSet(s2);

	//赋值
	set<int> s3;
	s3 = s2;
	printSet(s3);


}

int main() {
	test();

	system("pause");
	return 0;
}