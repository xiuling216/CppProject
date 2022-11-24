
#include <iostream>
#include <string>

using namespace std;
class Animal {
public:
	// 虚函数 
	// 在函数前面加上关键字 virtual,叫虚函数
	virtual void speak() {
		cout << "动物在叫" << endl;
	}
};

class Cat:public Animal {
public:
	void speak() {
		cout << "cat在叫" << endl;
	}
};

class Dog:public Animal {
public:
	void speak() {
		cout << "Dog在叫" << endl;
	}
};

// 执行speak函数
// 如果想执行让不同的动物说不同的话，那么这个函数就不能早绑定地址，需要在运行阶段再绑定地址，地址晚绑定

// 函数重写：函数返回值类型、函数名、参数列表，都要完全相同，不是函数重载。

// 动态多态满足条件：
// 1、 有继承关系
// 2、 子类要重写父类虚函数

// 动态多态使用方法：
// 父类的指针或引用执行子类对象
void doSpeak(Animal &animal) {
	animal.speak();
}

void test() {
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

int main() {
	test();

	system("pause");
	return 0;
}