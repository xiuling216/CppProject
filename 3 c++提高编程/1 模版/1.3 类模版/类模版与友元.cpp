
#include <iostream>
#include <string>

using namespace std;

// 要提前让编译器知道Person类存在
template<class T1, class T2>
class Person;

// 全局函数类外实现
template<class T1, class T2>
void showPerson2(Person < T1, T2>& p) {
	cout << "类外实现--name:" << p.m_name << ",age:" << p.m_age << endl;
}

template<class T1,class T2>
class Person {
	// 全局函数类内实现
	friend void showPerson(Person < T1, T2>& p ){
	cout << "类内实现--name:" << p.m_name << ",age:" << p.m_age << endl;
	}

	// 全局函数类外实现
	// 注意：要加空模版参数列表
	// 如果全局函数是类外实现，需要让编译器提前知道这个函数存在，不然编译不通过
	friend void showPerson2<>(Person < T1, T2>& p);

public:
	Person(T1 name, T2 age) {
		this->m_name = name;
		this->m_age = age;
	}

private:
	T1 m_name;
	T2 m_age;
};

void test() {
	Person<string, int> p("echo", 18);
	showPerson(p);
}

void test2() {
	Person<string, int> p("echo", 18);
	showPerson2(p);
}

int main() {
	test();
	test2();

	system("pause");
	return 0;
}