#include <iostream>
#include<string>

using namespace std;

void myPrint(int a) {
	cout << "������ͨ����" << endl;
}

template<class T>
void myPrint(T a) {
	cout << "����ģ�溯��" << endl;
}

// ����ģ��Ҳ���Է������أ�
template<class T>
void myPrint(T a, T b) {
	cout << "�������ص�ģ�溯��" << endl;
}

void test() {
	int a = 10;

	// �����ͨ�����ͺ���ģ�涼��ʵ�֣����ȵ�����ͨ������
	myPrint(a);

	// ����ͨ����ģ������б���ǿ�Ƶ��ú���ģ�棻
	myPrint<>(a);

	// ���ģ�溯�����Բ������õ�ƥ�䣬���ȵ��ú���ģ�棻
	// ��Ϊ��ͨ������Ҫ������ʽ����ת����ģ�溯������Ҫ�����Ա�������Ϊģ�溯����ƥ��
	char c = 'c';
	myPrint(c);
}

int main() {
	test();

	system("pause");
	return 0;
}