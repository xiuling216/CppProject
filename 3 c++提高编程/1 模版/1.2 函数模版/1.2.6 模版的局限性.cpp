
#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	Person(string name, int age) {
		m_name = name;
		m_age = age;
	}

	bool operator==(Person &p) {
		if (this->m_name == p.m_name) {
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_name;
	int m_age;
};

template<class T>
bool myCompare(T &a, T &b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}

// 利用具体化Person的版本实现，具体化会优先调用
// template<> 模版定义成空模版列表
// 模版函数参数列表T需要换成具体化的数据类型Person
template<> bool myCompare(Person& p1, Person& p2) {
	if (p1.m_name == p2.m_name && p1.m_age == p2.m_age) {
		return true;
	}
	else {
		return false;
	}
}

void test01() {
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret) {
		cout << "a == b" << endl;;
	}
	else
	{
		cout << "a != b" << endl;
	}
}


void test02() {
	Person p1 = Person("echo", 18);
	Person p2 = Person("echo", 18);
	bool ret = myCompare(p1, p2);
	if (ret) {
		cout << "p1 == p2" << endl;;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}