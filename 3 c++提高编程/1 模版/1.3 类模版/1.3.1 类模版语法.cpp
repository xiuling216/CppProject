
#include <iostream>
#include <string>

using namespace std;

//也可以这样定义 template<typename NameType, typename AgeType>
template<class NameType,class AgeType>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->m_name = name;
		this->m_age = age;
	}

	void PrintPerson() {
		cout << "name:" << m_name << ",age:" << m_age << endl;
	}

	NameType m_name;
	AgeType m_age;
};

void test() {
	Person<string,int> p1("echo", 18);
	p1.PrintPerson();

	Person<string, string> p2("bala", "不知道");
	p2.PrintPerson();
}

int main() {
	test();

	system("pause");
	return 0;
}