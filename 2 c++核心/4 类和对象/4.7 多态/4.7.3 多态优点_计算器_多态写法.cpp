
#include <iostream>
#include <string>

using namespace std;
class BaseCaculator {
public:
	virtual int getResult() {
		return 0;
	}

public:
	int m_num1;
	int m_num2;
};

class Add :public BaseCaculator {
	int getResult() {
		return m_num1 + m_num2;
	}
};

class Sub :public BaseCaculator {
	int getResult() {
		return m_num1 - m_num2;
	}
};

class Mul :public BaseCaculator {
	int getResult() {
		return m_num1 * m_num2;
	}
};

void test() {
	// 父类指针或引用指向子类对象
	Add c;
	c.m_num1 = 20;
	c.m_num2 = 10;
	BaseCaculator* base = &c;
	cout << base->m_num1 << " + " << base->m_num2 << " = " << base->getResult() << endl;

	Sub s;
	s.m_num1 = 20;
	s.m_num2 = 10;
	base = &s;
	cout << base->m_num1 << " - " << base->m_num2 << " = " << base->getResult() << endl;

	Mul m;
	m.m_num1 = 20;
	m.m_num2 = 10;
	base = &m;
	cout << base->m_num1 << " * " << base->m_num2 << " = " << base->getResult() << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}