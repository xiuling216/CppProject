#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
// count ͳ��

// ������������
void test() {
	vector<int> v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(1);

	int n=count(v.begin(), v.end(), 1);
	cout << "������1�ĸ���Ϊ��" << n << endl;
}

// �Զ�����������
class Person {
public:
	Person(string name, int age) {
		this->m_name = name;
		this->m_age = age;
	}
	
	bool operator==(const Person& p) {
		if ( this->m_name == p.m_name && this->m_age == p.m_age) {
			return true;
		}
		else {
			return false;
		}
	}

	string m_name;
	int m_age;
};
void test2() {
	vector<Person> v;
	v.push_back(Person("test1", 10));
	v.push_back(Person("test2", 20));
	v.push_back(Person("test1", 30));
	v.push_back(Person("test1", 10));

	Person p("test1", 10);

	int n = count(v.begin(), v.end(), p);
	cout << "name = test1, age =  10 ��Ԫ�ظ���Ϊ��" << n << endl;
}

int main() {
	//test();
	test2();

	system("pause");
	return 0;
}