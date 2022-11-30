#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
// count ͳ��

// ������������
class Greater3 {
public:
	bool operator()(int val) {
		return val > 3;
	}
};
void test() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	int n = count_if(v.begin(), v.end(), Greater3());
	cout << "�����д���3����Ϊ��" << n << endl;
}

// �Զ�����������
class Person {
public:
	Person(string name, int age) {
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

class GreaterAge20 {
public:
	bool operator()(const Person& p) {
		// �������20
		return p.m_age > 20;
	}
};
void test2() {
	vector<Person> v;
	v.push_back(Person("test1", 10));
	v.push_back(Person("test2", 20));
	v.push_back(Person("test3", 30));
	v.push_back(Person("test4", 50));
	v.push_back(Person("test5", 40));


	Person p("test1", 10);

	int n = count_if(v.begin(), v.end(), GreaterAge20());
	cout << "�������20��Ԫ�ظ���Ϊ��" << n << endl;
}

int main() {
	//test();
	test2();

	system("pause");
	return 0;
}