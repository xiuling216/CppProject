
#include <iostream>
#include <string>

using namespace std;
class Animal {
public:
	// �麯�� 
	// �ں���ǰ����Ϲؼ��� virtual,���麯��
	virtual void speak() {
		cout << "�����ڽ�" << endl;
	}

	virtual void eat() {
		cout << "�����ڳ�" << endl;
	}
};

class Cat:public Animal {
public:
	void speak() {
		cout << "cat�ڽ�" << endl;
	}
};

class Dog:public Animal {
public:
	void speak() {
		cout << "Dog�ڽ�" << endl;
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