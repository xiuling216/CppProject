
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
	//p.fun2(); // ���� ��Ϊ������ʱȷ��obj��Person1�������ͣ�fun2��Աδ����
}

void test2() {
	MyPerson<Person2> p;
	//p.fun1();  //���� ��Ϊ������ʱȷ��obj��Person2�������ͣ�fun1��Աδ����
	p.fun2();
}

int main() {
	test1();
	test2();

	system("pause");
	return 0;
}