
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
		m_a = 1;// ���๫����Ա�������л��� ������Ա
		m_b = 2;// ���ౣ����Ա�������л��� ������Ա
		//m_c = 3;// ���๫����Ա��������ʲ���
	}
	
};

class Son2 : protected Base {
public:
	void func() {
		m_a = 1;// ���๫����Ա�������б�Ϊ ������Ա
		m_b = 2;// ���ౣ����Ա�������л��� ������Ա
		//m_c = 3;// ���๫����Ա��������ʲ���
	}

};

class Son3 : private Base {
public:
	void func() {
		m_a = 1;// ���๫����Ա�������б�Ϊ ˽�г�Ա
		m_b = 2;// ���ౣ����Ա�������л��� ˽�г�Ա
		//m_c = 3;// ���๫����Ա��������ʲ���
	}

};

class GrandSon3 : public Son3 {
public:
	void func() {
		//m_a = 1;// ����Son3˽�г�Ա���������з��ʲ���
		//m_b = 2;// ����Son3˽�г�Ա���������з��ʲ���
	}

};


void test1() {
	Son1 son;
	son.m_a = 2;
	//son.m_b = 2;// ������ʲ��� ������Ա
	//son.m_c = 2;// ������ʲ��� ˽�г�Ա
}

void test2() {
	Son2 son;
	//son.m_a = 2;// ������ʲ��� ������Ա
	//son.m_b = 2;// ������ʲ��� ������Ա
	//son.m_c = 2;// ������ʲ��� ˽�г�Ա
}

void test3() {
	Son3 son;
	//son.m_a = 2;// ������ʲ��� ˽�г�Ա
	//son.m_b = 2;// ������ʲ��� ˽�г�Ա
	//son.m_c = 2;// ������ʲ��� ˽�г�Ա
}

int main() {
	test1();

	system("pause");
	return 0;
}