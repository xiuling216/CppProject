
#include <iostream>
#include <string>

using namespace std;
class Base {
public:
	// ���麯��
	virtual void func() = 0;
};

class Son :public Base {
public:
	void func() {
		cout << "Son����func" << endl;
	}
};

class Son2 :public Base {
public:
	void func2() {
		cout << "Son2����func2" << endl;
	}
};

void test() {
	//Base b;// �������޷�ʵ��������
	//new Base;// �������޷�ʵ��������

	Son s;
	Base* b = &s;
	b->func();

	//Son2 s;//���������д�����еĴ��麯��������Ҳ���ڳ����࣬�޷�ʵ��������
}

int main() {
	test();

	system("pause");
	return 0;
}