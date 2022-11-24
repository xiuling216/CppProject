#include <iostream>
#include <string>

using namespace std;

class MyInteger {
	friend ostream& operator<<(ostream& cout, const MyInteger& myint);
public:
	MyInteger() {
		m_num = 0;
	}

public:
	int m_num;
};

// 全局函数 重载前置递增 ++
// 无法用全局函数 重载后置递增
MyInteger& operator++(MyInteger& myint) {
	++myint.m_num;
	return myint;
}

// 重载<<
ostream& operator<<(ostream& cout, const MyInteger& myint) {
	cout << myint.m_num;
	return cout;
}
void test() {
	MyInteger myint;

	cout << "前置递增输出：" << ++(++myint) << endl;
	cout << "前置递增输出：" << myint << endl;

	/*cout << "后置递增输出：" << myint++ << endl;
	cout << "后置递增输出：" << myint << endl;*/
}

int main1() {
	test();

	system("pause");
	return 0;
}
