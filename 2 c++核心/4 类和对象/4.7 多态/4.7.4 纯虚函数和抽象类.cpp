
#include <iostream>
#include <string>

using namespace std;
class Base {
public:
	// 纯虚函数
	virtual void func() = 0;
};

class Son :public Base {
public:
	void func() {
		cout << "Son子类func" << endl;
	}
};

class Son2 :public Base {
public:
	void func2() {
		cout << "Son2子类func2" << endl;
	}
};

void test() {
	//Base b;// 抽象类无法实例化对象
	//new Base;// 抽象类无法实例化对象

	Son s;
	Base* b = &s;
	b->func();

	//Son2 s;//子类必须重写父类中的纯虚函数，否则也属于抽象类，无法实例化对象
}

int main() {
	test();

	system("pause");
	return 0;
}