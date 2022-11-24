
#include <iostream>
#include <string>

using namespace std;
// 交换两个整型数据
void swapInt(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

// 交换两个浮点型数据
void swapDouble(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

// 使用模版函数
template<typename T>
void mySwap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

void test() {
	int a = 1;
	int b = 2;
	swapInt(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 1.1;
	double d = 2.2;
	swapDouble(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

}

void test2() {
	cout << "------------使用模版函数--------------" << endl;
	int a = 1;
	int b = 2;

	// 两种调用模版函数的方式：
	// 1 自动类型推导
	//mySwap(a, b);

	// 2 显式指定数据类型
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}


int main() {
	test();

	test2();

	system("pause");
	return 0;
}