
#include <iostream>
#include <string>

using namespace std;
class Animal {
public:
	// ���麯��
	virtual void speak()=0;

	// ���캯�����������麯��
	// virtual Animal() = 0;

	// �ȵ� ���๹�캯�����ٵ� ���๹�캯��
	Animal() {
		cout << "Animal ���캯��" << endl;
	}

	// ʹ�ø���ָ��ָ������������ͷ�ʱ�������������������
	// 1 ��������� ������������ֻ�� �������������� ��������
	// 2 ��������� ������������������ �������������� ��������
	// 3 ��������� ��������������ͬ������ �������������� ��������
	
	// ����
	/* ~Animal() {
		cout << "Animal ��������" << endl;
	}*/

	// ������
	/* virtual ~Animal() {
		cout << "Animal ����������" << endl;
	}*/

	// ��������
	// �����������巽����
	// 1 �ڸ��ඨ�崿�������� virtual ~����() = 0;
	// 2 �ڸ����ⶨ�崿�鹹������Ӧ����ʵ�֣�����::~����(){}
	virtual ~Animal() = 0;

};

Animal:: ~Animal() {
	cout << "Animal ������������" << endl;
}

class Cat :public Animal {
public:
	void speak() {
		cout << "cat ��˵��" << endl;
	}

	Cat(string name) {
		cout << "Cat ���캯��" << endl;
		m_name = new string(name);
	}

	~Cat() {
		cout << "Cat ��������" << endl;
		if (m_name != NULL) {
			delete m_name;
			m_name = NULL;
		}
	}

	string* m_name;
};

void test() {
	Animal* animal = new Cat("Tom");
	animal->speak();

	delete animal;
}

int main() {
	test();

	system("pause");
	return 0;
}