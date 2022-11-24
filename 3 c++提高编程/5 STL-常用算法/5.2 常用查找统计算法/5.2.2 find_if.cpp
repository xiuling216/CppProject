#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
// find_if

using namespace std;

// 查找内置数据类型
bool GreaterFive(int a) {
	return a > 5;
}

void test() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int>::iterator pos=find_if(v.begin(), v.end(), GreaterFive);

	if (pos != v.end()) {
		cout << "找到大于5的元素：" << *pos << endl;
	}
	else {
		cout << "未找到" << endl;
	}
}

//自定义数据类型
class Person {
public:
	Person(string name, int age) {
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};


// 仿函数
class GreaterAge18 {
public:
	bool operator()(const Person& p) {
		// 年龄大于18岁
		return p.m_age > 18;
	}
};
void test2() {
	vector<Person> v;
	v.push_back(Person("tom", 18));
	v.push_back(Person("echo", 20));
	v.push_back(Person("lucy", 19));

	vector<Person>::iterator pos = find_if(v.begin(), v.end(), GreaterAge18());
	if (pos != v.end()) {
		cout << "找到年龄大于18的人。姓名：" << pos->m_name
			<< " 年龄：" << pos->m_age << endl;
	}
	else {
		cout << "未找到" << endl;
	}

}

int main() {
	// test();
	test2();

	system("pause");
	return 0;
}