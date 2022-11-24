#include <iostream>
#include <string>
#include<set>
using namespace std;
class Person {
public:
	Person(string name,int age) {
		this->m_name = name;
		this->m_age = age;
	}


	string m_name;
	int m_age;
};

class MyCompare {
public:
	bool operator()(const Person& p1, const Person& p2)const {
		// 按照年龄降序
		
		// 如果年龄相同，想再跟进姓名排序，这样写
		//if (p1.m_age == p2.m_age) {
		//	return p1.m_name > p2.m_name;
		//}

		return p1.m_age > p2.m_age;
	}
};

void test() {
	// 自定义的书记雷，都需要指定排序规则，不然无法插入set
	// 本案例按照年龄降序来排序
	// 则年龄是主键，会发现年龄18的数据只能插入一条
	set<Person,MyCompare> s;
	s.insert(Person("tom", 18));
	s.insert(Person("echo", 19));
	s.insert(Person("lucy", 18));
	s.insert(Person("lily", 20));

	for (auto item : s) {
		cout << "name: " << item.m_name
			<< " age: " << item.m_age
			<< " " << endl;
	}

}

int main() {
	test();

	system("pause");
	return 0;
}