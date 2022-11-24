
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

// ���þ��廯Person�İ汾ʵ�֣����廯�����ȵ���
// template<> ģ�涨��ɿ�ģ���б�
// ģ�溯�������б�T��Ҫ���ɾ��廯����������Person
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