# include <iostream>
# include <string>

using namespace std;

// 普通函数
int add1(int a, int b) {
	return a + b;
}

// 模版函数
template<class T>
T add2(T a, T b) {
	return a + b;
}

void test1() {
	int a = 10;
	int b = 20;
	char c = 'c'; // a-97  c-99

	cout << add1(a, b) << endl;
	cout << add1(a, c) << endl;
}

void test2() {
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << add2(a, b) << endl;

	// 报错， 用自动类型推导，不可以发生隐式类型转换
	// cout << add2(a, c) << endl; 

	// 用显式指定类型，可以发生隐式类型转换
	cout << add2<int>(a, c) << endl; 
}

int main() {
	test1();
	test2();

	system("pause");
	return 0;
}