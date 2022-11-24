
#include <iostream>
#include <string>

using namespace std;
class Base1 {
public:
	Base1() {
		m_a =100;
	}

public:
	int m_a;
};

class Base2 {
public:
	Base2() {
		m_a = 200;
	}

public:
	int m_a;
};

class Son:public Base1,public Base2 {
public:
	Son() {
		m_c = 300;
	}

public:
	int m_c;
};

void test() {
	Son son;
	cout << "size of Son = " << sizeof(son) << endl;
	// 当父类中出现同名成员，要加父类的作用域做区分
	cout << "son.Base1::m_a= " << son.Base1::m_a << endl;
	cout << "son.Base2::m_a= " << son.Base2::m_a << endl;

}

int main() {
	test();

	system("pause");
	return 0;
}