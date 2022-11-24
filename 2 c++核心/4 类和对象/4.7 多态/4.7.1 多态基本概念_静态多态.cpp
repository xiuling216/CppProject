
#include <iostream>
#include <string>

using namespace std;
class Animal {
public:
	void speak() {
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
// 地址早绑定，在编译阶段就确定函数地址
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