
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
	// 2 ����������
	ofstream ofs;

	// 3 ���ļ�
	ofs.open("Person.txt", ios::out | ios::binary);
	
	// 4 д�ļ�
	Person p = { "����",20 };
	ofs.write((const char *)&p, sizeof(p));// ǿת (const char *)
	
	// 5 �ر��ļ�
	ofs.close();
}

int main() {
	test();

	system("pause");
	return 0;
}