
#include <iostream>
#include <string>

using namespace std;

// Ҫ��ǰ�ñ�����֪��Person�����
template<class T1, class T2>
class Person;

// ȫ�ֺ�������ʵ��
template<class T1, class T2>
void showPerson2(Person < T1, T2>& p) {
	cout << "����ʵ��--name:" << p.m_name << ",age:" << p.m_age << endl;
}

template<class T1,class T2>
class Person {
	// ȫ�ֺ�������ʵ��
	friend void showPerson(Person < T1, T2>& p ){
	cout << "����ʵ��--name:" << p.m_name << ",age:" << p.m_age << endl;
	}

	// ȫ�ֺ�������ʵ��
	// ע�⣺Ҫ�ӿ�ģ������б�
	// ���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪������������ڣ���Ȼ���벻ͨ��
	friend void showPerson2<>(Person < T1, T2>& p);

public:
	Person(T1 name, T2 age) {
		this->m_name = name;
		this->m_age = age;
	}

private:
	T1 m_name;
	T2 m_age;
};

void test() {
	Person<string, int> p("echo", 18);
	showPerson(p);
}

void test2() {
	Person<string, int> p("echo", 18);
	showPerson2(p);
}

int main() {
	test();
	test2();

	system("pause");
	return 0;
}