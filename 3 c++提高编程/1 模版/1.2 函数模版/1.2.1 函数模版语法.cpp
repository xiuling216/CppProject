
#include <iostream>
#include <string>

using namespace std;
// ����������������
void swapInt(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

// ������������������
void swapDouble(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

// ʹ��ģ�溯��
template<typename T>
void mySwap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

void test() {
	int a = 1;
	int b = 2;
	swapInt(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 1.1;
	double d = 2.2;
	swapDouble(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

}

void test2() {
	cout << "------------ʹ��ģ�溯��--------------" << endl;
	int a = 1;
	int b = 2;

	// ���ֵ���ģ�溯���ķ�ʽ��
	// 1 �Զ������Ƶ�
	//mySwap(a, b);

	// 2 ��ʽָ����������
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}


int main() {
	test();

	test2();

	system("pause");
	return 0;
}