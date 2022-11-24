#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

// 常用算法 find

// find查找内置数据类型
void test() {
	vector<int> v;
	for (int i = 0; i < 5; i++) {
		v.push_back(i);
	}

	vector<int>::iterator pos = find(v.begin(), v.end(), 2);
	if (pos != v.end()) {
		cout << "find " << *pos << endl;
	}
	else {
		cout << "not find 2" << endl;
	}

	pos = find(v.begin(), v.end(), 10);
	if (pos != v.end()) {
		cout << "find " << *pos << endl;
	}
	else {
		cout << "not find 10" << endl;
	}
	
}

// 查找自定义数据类型
class Person {
public:
	Person(string name, int age) {
		this->m_name = name;
		this->m_age = age;
	}

	// 需要重载==,才能判断查找的值
	bool operator==(const Person& p) {
		if (this->m_name == p.m_name && this->m_age == p.m_age) {
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
	v.push_back(Person("echo", 20));
	v.push_back(Person("tom", 19));
	v.push_back(Person("lucy", 18));
	
	Person p("tom", 19);

	vector<Person>::iterator pos = find(v.begin(), v.end(), p);
	if (pos !=v.end()) {
		cout << " find p   name = "<<( * pos).m_name
			<<" age = "<<pos->m_age
			<< endl;
	}
	else {
		cout << "not find p" << endl;
	}
}

int main() {
	test2();

	system("pause");
	return 0;
}