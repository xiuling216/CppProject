#include <iostream>
#include <string>

using namespace std;

//1 函数对象在使用时，可以像普通函数一样调用，可以有参数，有返回值；
class MyAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

void test() {
	MyAdd myAdd;
	cout << myAdd(1, 3) << endl;
}

//2 函数对象超出普通函数概念，可以有自己的状态，定义一些内部成员属性；
class MyPrint {
public:
	void operator()(string s) {
		cout << s << endl;
		count++;
	}

	int count=0;
};

void test2() {
	MyPrint p;
	p("hello");
	p("hello");
	p("hello");
	p("hello");

	// 使用到仿函数成员属性，可以统计调到函数的次数。
	cout << "call MyPrint times:" << p.count << endl;
}

//3 函数对象可以作为参数传递。
void doPrint(MyPrint& p,string s) {
	p(s);
	p(s);
	p(s);
}
void test3(){
	MyPrint p;
	doPrint(p,"hi");
}

int main() {
	//test();
	//test2();
	test3();

	system("pause");
	return 0;
}