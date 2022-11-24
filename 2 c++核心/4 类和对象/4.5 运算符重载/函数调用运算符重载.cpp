
#include <iostream>
#include <string>

using namespace std;
class MyPrint {
public:
	// 重载 () 也称为仿函数
	void operator()(string str) {
		cout << str << endl;
	}
};

void test() {
	MyPrint p;
	p("hello");
}

class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};

void test2() {
	MyAdd add;
	cout<<"1 + 3 = " << add(1, 3) << endl;

	// MyAdd()为匿名对象，匿名对象调用仿函数
	// 当不想创建对象是可以创建匿名对象
	cout << "MyAdd()(3,4) = " << MyAdd()(3,4) << endl;
}

int main() {
	//test();
	test2();

	system("pause");
	return 0;
}