
#include <iostream>
#include <string>

using namespace std;

class Person1 {
public:
	void showPerson1() {
		cout << "show Person1" << endl;
	}
};

class Person2 {
public:
	void showPerson2() {
		cout << "show Person2" << endl;
	}
};

template<typename T>
class MyPerson {
public:
	void fun1() {
		obj.showPerson1();
	}

	void fun2() {
		obj.showPerson2();
	}

	T obj;
};

void test1() {
	MyPerson<Person1> p;
	p.fun1();
	//p.fun2(); // 错误 因为：调用时确认obj是Person1数据类型，fun2成员未创建
}

void test2() {
	MyPerson<Person2> p;
	//p.fun1();  //错误 因为：调用时确认obj是Person2数据类型，fun1成员未创建
	p.fun2();
}

int main() {
	test1();
	test2();

	system("pause");
	return 0;
}