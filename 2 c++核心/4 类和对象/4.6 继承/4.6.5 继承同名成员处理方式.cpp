
#include <iostream>
#include <string>

using namespace std;
class Base {
public:
	Base() {
		m_a = 100;
	}

	void fun()
	{
		cout << "Son fun ����" << endl;
	}

	void fun(int a)
	{
		cout << "Son fun(int a)����" << endl;
	}
	int m_a;
};

class Son :public Base {
public:
	Son() {
		m_a = 200;
	}

	void fun()
	{
		cout << "Son fun ����" << endl;
	}

	int m_a;
};

void test() {
	Son son;
	cout << son.m_a << endl;
	cout << son.Base::m_a << endl;// ͬ�����ԣ�����Ҫ�����������

	Son son2;

	son2.fun();// ֱ�ӵ�������ĳ�Ա����

	// ͬ����Ա����������Ҫ����������ã����������ض��ٸ�����Ҫ��������
	// ԭ������ͬ�������Ὣ����ͬ���������ص�
	son2.Base::fun();
	son2.Base::fun(1);
	
}

int main() {
	test();

	system("pause");
	return 0;
}