#include <iostream>
#include <string>
#include<list>
using namespace std;

class Person {
public:
	Person(string name,int age,int height) {
		this->m_name = name;
		this->m_age = age;
		this->m_height=height;
	}

	string m_name;
	int m_age;
	int m_height;
};

bool myCompare(Person& p1, Person& p2) {
	// 年龄相同 按照升高降序
	if (p1.m_age == p2.m_age) {
		return p1.m_height > p2.m_height;
	}
	else {
		//按照年龄 升序
		return p1.m_age < p2.m_age;
	}
}

void printPerson(const list<Person>& l) {
	for (auto item : l) {
		cout << "name: " << item.m_name
			<< " age: " << item.m_age
			<< " height: " << item.m_height
			<< endl;
	}
}

void test() {
	Person p1("echo", 20, 150);
	Person p2("lisa", 25, 170);
	Person p3("mesa", 20, 160);
	list<Person> l;
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	printPerson(l);

	l.sort(myCompare);
	cout << "排序后：" << endl;
	printPerson(l);

}

int main() {
	test();

	system("pause");
	return 0;
}