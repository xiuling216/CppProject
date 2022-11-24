
#include <iostream>
#include <string>

using namespace std;
class Base {
public:
	static void fun()
	{
		cout << "Son fun 调用" << endl;
	}

	static void fun(int a)
	{
		cout << "Son fun(int a)调用" << endl;
	}
	static int m_a;
};

int Base::m_a = 100;

class Son :public Base {
public:
	static void fun()
	{
		cout << "Son fun 调用" << endl;
	}

	static int m_a;
};

int Son::m_a = 200;

void test() {
	// 一、同名静态属性子类访问
	 
	// 1、通过对象来访问同名属性
	Son son;
	cout << son.m_a << endl;
	cout << son.Base::m_a << endl;// 同名属性，父类要加作用域调用

	// 2、通过子类名来访问同名属性
	cout << Son::m_a << endl;
	// 同名属性，父类要加作用域调用
	// 第一个 ::代表通过类名方式访问。第二个::代表访问父类作用域下
	cout << Son::Base::m_a << endl;


	// 二、同名静态成员子类访问
	
	// 1、通过对象来访问同名函数
	Son son2;
	son2.fun();// 直接调用子类的成员函数
	// 同名成员函数，父类要加作用域调用，不管是重载多少个，都要加作用域。
	// 原因：子类同名函数会将父类同名函数隐藏掉
	son2.Base::fun();
	son2.Base::fun(1);

	// 2、通过子类名来访问同名属性
	Son::fun();// 直接调用子类的成员函数
	// 同名成员函数，父类要加作用域调用，不管是重载多少个，都要加作用域。
	// 原因：子类同名函数会将父类同名函数隐藏掉
	Son::Base::fun();
	Son::Base::fun(1);

}

int main() {
	test();

	system("pause");
	return 0;
}