
#include <iostream>
#include <string>

using namespace std;
class Demo {
public:
	Demo(int a) {
		// ���ٵ�����
		m_a = new int(a);
	}
	
	~Demo() {
		if (m_a != NULL) {
			delete m_a;
			m_a = NULL;
		}
	}

	// ���ظ�ֵ�����
	Demo& operator=(Demo& d) {
		if (m_a != NULL) {
			delete m_a;
			m_a = NULL;
		}

		// �������ṩ��ǳ����
		//m_a = d.m_a;

		// �ṩ��������ǳ��������
		m_a = new int(*d.m_a);

		return *this;
	}

public:
	int* m_a;
};

void test() {
	Demo demo1(1);
	Demo demo2(2);
	Demo demo3(3);

	demo3 = demo2 = demo1;

	cout << "demo1.m_a = " << *demo1.m_a << endl;
	cout << "demo2.m_a = " << *demo2.m_a << endl;
	cout << "demo3.m_a = " << *demo3.m_a << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}