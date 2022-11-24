
#include <iostream>
#include <string>
#include<vector>

using namespace std;
class Person {
public:
	Person(string name, int age) {
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

// vector��Ŷ���
void test() {
	vector<Person> v;
	Person p1("a1", 10);
	Person p2("a2", 20);
	Person p3("a3", 30);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	for (vector<Person>::iterator it = v.begin(); it < v.end(); it++) {
		// ͨ��*it�������õ�Person����
		//cout << "name:" << (*it).m_name << ",age:" << (*it).m_age << endl;
		// it��ָ�룬ͨ��->��ָ��Ԫ���õ�����
		cout << "name:" << it->m_name << ",age:" << it->m_age << endl;
	}
}

// vector��Ŷ���ָ��
void test2() {
	vector<Person*> v;
	Person p1("a1", 10);
	Person p2("a2", 20);
	Person p3("a3", 30);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);

	for (vector<Person*>::iterator it = v.begin(); it < v.end(); it++) {
		// ͨ��*it�������õ�Person*���Ƕ���ָ��
		cout << "::name:" << (*it)->m_name << ",age:" << (*it)->m_age << endl;

		// ������ ͨ��*it�������õ�Person*��Ȼ��**t�����ã����õ�Person����
		//cout << "name:" << (**it).m_name << ",age:" << (**it).m_age << endl;
	}
}
int main() {
	//test();
	test2();
	system("pause");
	return 0;
}