
#include <iostream>
#include <string>

using namespace std;
template<class T1,class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->m_name = name;
		this->m_age = age;
	}

	void showPerson() {
		cout << "name:" << m_name << ",age:" << m_age << endl;
	}

	T1 m_name;
	T2 m_age;
};

void showPerson1(Person<string, int> &p) {
	p.showPerson();
}
//1 ָ����������--ֱ����ʽ��ʹ��������������������
void test1() {
	Person<string, int> p("echo1", 18);
	showPerson1(p);
}

template<class T1,class T2>
void showPerson2(Person<T1, T2>& p) {
	p.showPerson();
}
//2 ����ģ�滯--��������еĲ���ģ�滯������������
//3 ������ģ�滯--�������ģ�滯������������
void test2() {
	Person<string, int> p("echo2", 19);
	showPerson2(p);
}

template<class T>
void showPerson3(T& p) {
	p.showPerson();
}
//3 ������ģ�滯--�������ģ�滯������������
void test3() {
	Person<string, int> p("echo3", 20);
	showPerson3(p);
}

int main() {
	test1();
	test2();
	test3();

	system("pause");
	return 0;
}