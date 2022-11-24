
#include <iostream>
#include <string>

using namespace std;
class Animal {
public:
	void speak() {
		cout << "�����ڽ�" << endl;
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

// ִ��speak����
// ��ַ��󶨣��ڱ���׶ξ�ȷ��������ַ
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