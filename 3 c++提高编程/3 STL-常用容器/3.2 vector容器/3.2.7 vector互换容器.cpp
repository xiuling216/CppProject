
#include <iostream>
#include <string>
#include<vector>
using namespace std;

void printVector(vector<int> v) {
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test() {
	cout << "交换前：" << endl;
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2;
	for (int i = 9; i >=0; i--) {
		v2.push_back(i);
	}
	printVector(v2);
	
	cout << "交换后：" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);

}
// 实际用途
// 巧用swap可以收缩内存空间
void test2() {
	vector<int> v;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}
	cout << "v的容量为：" << v.capacity() << endl;  // 138255
	cout << "v的长度为：" << v.size() << endl;  // 100000
	
	v.resize(3);  // 重新指定大小。当大小变的很小时，capacity还是占用空间很大，不会缩小
	cout << "v的容量为：" << v.capacity() << endl;  // 138255
	cout << "v的长度为：" << v.size() << endl;  // 3

	// 巧用swap收缩内存
	// vector<int>(v) 利用v示例化一个匿名对象容器。这个容器容量和长度只有3
	// swap(v) 交换匿名对象容器和v
	vector<int>(v).swap(v);
	cout << "v的容量为：" << v.capacity() << endl;  // 3
	cout << "v的长度为：" << v.size() << endl;  // 3

}

int main() {
	test2();

	system("pause");
	return 0;
}