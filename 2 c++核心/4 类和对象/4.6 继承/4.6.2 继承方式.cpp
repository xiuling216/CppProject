
#include <iostream>
#include <string>

using namespace std;
class Base {
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class Son1 : public Base {
public:
	void func() {
		m_a = 1;// 父类公共成员，子类中还是 公共成员
		m_b = 2;// 父类保护成员，子类中还是 保护成员
		//m_c = 3;// 父类公共成员，子类访问不到
	}
	
};

class Son2 : protected Base {
public:
	void func() {
		m_a = 1;// 父类公共成员，子类中变为 保护成员
		m_b = 2;// 父类保护成员，子类中还是 保护成员
		//m_c = 3;// 父类公共成员，子类访问不到
	}

};

class Son3 : private Base {
public:
	void func() {
		m_a = 1;// 父类公共成员，子类中变为 私有成员
		m_b = 2;// 父类保护成员，子类中还是 私有成员
		//m_c = 3;// 父类公共成员，子类访问不到
	}

};

class GrandSon3 : public Son3 {
public:
	void func() {
		//m_a = 1;// 父类Son3私有成员，孙子类中访问不到
		//m_b = 2;// 父类Son3私有成员，孙子类中访问不到
	}

};


void test1() {
	Son1 son;
	son.m_a = 2;
	//son.m_b = 2;// 类外访问不到 保护成员
	//son.m_c = 2;// 类外访问不到 私有成员
}

void test2() {
	Son2 son;
	//son.m_a = 2;// 类外访问不到 保护成员
	//son.m_b = 2;// 类外访问不到 保护成员
	//son.m_c = 2;// 类外访问不到 私有成员
}

void test3() {
	Son3 son;
	//son.m_a = 2;// 类外访问不到 私有成员
	//son.m_b = 2;// 类外访问不到 私有成员
	//son.m_c = 2;// 类外访问不到 私有成员
}

int main() {
	test1();

	system("pause");
	return 0;
}