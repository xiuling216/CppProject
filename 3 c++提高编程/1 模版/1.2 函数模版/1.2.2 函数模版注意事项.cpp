
#include <iostream>
#include <string>

using namespace std;

// 使用模版函数
template<typename T>
void mySwap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
void func() {
	cout << "func调用" << endl;
}

void test() {
	int a = 1;
	int b = 2;
	double c = 3.3;

	mySwap(a, b);// 正确
	// mySwap(a, c);// 错误，必须推导出一致的数据类型T
}

void test2() {
	// func();  // 错误，无法确定出T的数据类型
	func<int>();  // 正确
	func<string>();  // 正确
}

int main() {
	test();
	test2();

	system("pause");
	return 0;
}