
#include <iostream>
#include <string>

using namespace std;

template<typename NameType,typename AgeType = int>
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
	// 1 �޷����Զ������Ƶ���ֻ������ʽָ����������
	// Person p1("echo", 18); // �޷�����ͨ��������
	Person<string, int> p1("echo", 18);
	p1.PrintPerson();

	// 2 ��ģ���ģ������б����ָ��Ĭ����������
	Person<string> p2("tom", 30);
	p2.PrintPerson();
}

int main() {
	test();

	system("pause");
	return 0;
}