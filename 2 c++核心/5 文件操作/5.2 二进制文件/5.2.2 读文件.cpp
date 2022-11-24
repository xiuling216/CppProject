
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Person {
public:
	char m_name[64];
	int m_age;
};

void test() {
	// 1 ����ͷ�ļ�

	//2 ����������
	ifstream ifs;

	//3 ���ļ� ���ж��ļ��Ƿ�ɹ���
	ifs.open("Person.txt", ios::in | ios::binary);//��Ҫָ����ȡ��ʽ ios::binary
	if (!ifs.is_open()) {
		cout << "���ļ�ʧ��" << endl;
		return;
	}

	//4 ���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "��ȡ�������ļ����ݣ�" << endl;
	cout << p.m_name << endl;
	cout << p.m_age << endl;

	//5 �ر��ļ�
	ifs.close();
}

int main() {
	test();

	system("pause");
	return 0;
}