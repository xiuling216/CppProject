#include <iostream>
#include<string>

using namespace std;

void myPrint(int a) {
	cout << "调用普通函数" << endl;
}

template<class T>
void myPrint(T a) {
	cout << "调用模版函数" << endl;
}

// 函数模版也可以发生重载；
template<class T>
void myPrint(T a, T b) {
	cout << "调用重载的模版函数" << endl;
}

void test() {
	int a = 10;

	// 如果普通函数和函数模版都有实现，优先调用普通函数；
	myPrint(a);

	// 可以通过空模版参数列表来强制调用函数模版；
	myPrint<>(a);

	// 如果模版函数可以产生更好的匹配，优先调用函数模版；
	// 因为普通函数需要先做隐式类型转换，模版函数不需要，所以编译器认为模版函数更匹配
	char c = 'c';
	myPrint(c);
}

int main() {
	test();

	system("pause");
	return 0;
}