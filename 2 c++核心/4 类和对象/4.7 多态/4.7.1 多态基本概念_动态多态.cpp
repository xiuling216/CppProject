
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
// �����ִ���ò�ͬ�Ķ���˵��ͬ�Ļ�����ô��������Ͳ�����󶨵�ַ����Ҫ�����н׶��ٰ󶨵�ַ����ַ���

// ������д����������ֵ���͡��������������б���Ҫ��ȫ��ͬ�����Ǻ������ء�

// ��̬��̬����������
// 1�� �м̳й�ϵ
// 2�� ����Ҫ��д�����麯��

// ��̬��̬ʹ�÷�����
// �����ָ�������ִ���������
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