
#include <iostream>
#include <string>

using namespace std;
class Base {
public:
	Base() {
		m_a = 100;
	}

	void fun()
	{
		cout << "Son fun 调用" << endl;
	}

	void fun(int a)
	{
		cout << "Son fun(int a)调用" << endl;
	}
	int m_a;
};

class Son :public Base {
public:
	Son() {
		m_a = 200;
	}

	void fun()
	{
		cout << "Son fun 调用" << endl;
	}

	int m_a;
};

void test() {
	Son son;
	cout << son.m_a << endl;
	cout << son.Base::m_a << endl;// 同名属性，父类要加作用域调用

	Son son2;

	son2.fun();// 直接调用子类的成员函数

	// 同名成员函数，父类要加作用域调用，不管是重载多少个，都要加作用域。
	// 原因：子类同名函数会将父类同名函数隐藏掉
	son2.Base::fun();
	son2.Base::fun(1);
	
}

int main() {
	test();

	system("pause");
	return 0;
}