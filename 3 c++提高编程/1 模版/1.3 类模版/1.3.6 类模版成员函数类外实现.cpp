
#include <iostream>
#include <string>

using namespace std;

template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age);

	void PrintPerson();

	T1 m_name;
	T2 m_age;
};

template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	m_name = name;
	m_age = age;
}

template<class T1, class T2>
void Person<T1, T2>::PrintPerson()
{
	cout << "name:" << m_name << ",age:" << m_age << endl;
}

void test() {
	Person<string, int> p1("echo", 18);
	p1.PrintPerson();
}

int main() {
	test();

	system("pause");
	return 0;
}