
#include <iostream>
#include <string>

using namespace std;

// ʹ��ģ�溯��
template<typename T>
void mySwap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
void func() {
	cout << "func����" << endl;
}

void test() {
	int a = 1;
	int b = 2;
	double c = 3.3;

	mySwap(a, b);// ��ȷ
	// mySwap(a, c);// ���󣬱����Ƶ���һ�µ���������T
}

void test2() {
	// func();  // �����޷�ȷ����T����������
	func<int>();  // ��ȷ
	func<string>();  // ��ȷ
}

int main() {
	test();
	test2();

	system("pause");
	return 0;
}