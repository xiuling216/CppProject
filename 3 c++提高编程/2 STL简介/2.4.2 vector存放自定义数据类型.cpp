
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

// vector存放对象
void test() {
	vector<Person> v;
	Person p1("a1", 10);
	Person p2("a2", 20);
	Person p3("a3", 30);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	for (vector<Person>::iterator it = v.begin(); it < v.end(); it++) {
		// 通过*it解引用拿到Person变量
		//cout << "name:" << (*it).m_name << ",age:" << (*it).m_age << endl;
		// it是指针，通过->来指定元素拿到变量
		cout << "name:" << it->m_name << ",age:" << it->m_age << endl;
	}
}

// vector存放对象指针
void test2() {
	vector<Person*> v;
	Person p1("a1", 10);
	Person p2("a2", 20);
	Person p3("a3", 30);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);

	for (vector<Person*>::iterator it = v.begin(); it < v.end(); it++) {
		// 通过*it解引用拿到Person*，是对象指针
		cout << "::name:" << (*it)->m_name << ",age:" << (*it)->m_age << endl;

		// 还可以 通过*it解引用拿到Person*，然后**t解引用，来拿到Person对象
		//cout << "name:" << (**it).m_name << ",age:" << (**it).m_age << endl;
	}
}
int main() {
	//test();
	test2();
	system("pause");
	return 0;
}