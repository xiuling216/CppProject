
#include <iostream>
#include <string>

using namespace std;
class MyPrint {
public:
	// ���� () Ҳ��Ϊ�º���
	void operator()(string str) {
		cout << str << endl;
	}
};

void test() {
	MyPrint p;
	p("hello");
}

class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};

void test2() {
	MyAdd add;
	cout<<"1 + 3 = " << add(1, 3) << endl;

	// MyAdd()Ϊ������������������÷º���
	// �����봴�������ǿ��Դ�����������
	cout << "MyAdd()(3,4) = " << MyAdd()(3,4) << endl;
}

int main() {
	//test();
	test2();

	system("pause");
	return 0;
}