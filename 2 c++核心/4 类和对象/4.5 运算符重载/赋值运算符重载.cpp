
#include <iostream>
#include <string>

using namespace std;
class Demo {
public:
	Demo(int a) {
		// 开辟到堆区
		m_a = new int(a);
	}
	
	~Demo() {
		if (m_a != NULL) {
			delete m_a;
			m_a = NULL;
		}
	}

	// 重载赋值运算符
	Demo& operator=(Demo& d) {
		if (m_a != NULL) {
			delete m_a;
			m_a = NULL;
		}

		// 编译器提供的浅拷贝
		//m_a = d.m_a;

		// 提供深拷贝，解决浅拷贝问题
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