
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

	virtual void eat() {
		cout << "动物在吃" << endl;
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

void doEat(Animal& animal) {
	animal.eat();
}

void test() {
	Cat cat;
	doEat(cat);

	Dog dog;
	doEat(dog);
}

int main() {
	test();

	system("pause");
	return 0;
}