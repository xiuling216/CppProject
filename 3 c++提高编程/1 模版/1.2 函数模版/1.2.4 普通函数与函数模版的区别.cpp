# include <iostream>
# include <string>

using namespace std;

// ��ͨ����
int add1(int a, int b) {
	return a + b;
}

// ģ�溯��
template<class T>
T add2(T a, T b) {
	return a + b;
}

void test1() {
	int a = 10;
	int b = 20;
	char c = 'c'; // a-97  c-99

	cout << add1(a, b) << endl;
	cout << add1(a, c) << endl;
}

void test2() {
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << add2(a, b) << endl;

	// ���� ���Զ������Ƶ��������Է�����ʽ����ת��
	// cout << add2(a, c) << endl; 

	// ����ʽָ�����ͣ����Է�����ʽ����ת��
	cout << add2<int>(a, c) << endl; 
}

int main() {
	test1();
	test2();

	system("pause");
	return 0;
}