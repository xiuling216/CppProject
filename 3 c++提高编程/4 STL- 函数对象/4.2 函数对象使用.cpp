#include <iostream>
#include <string>

using namespace std;

//1 ����������ʹ��ʱ����������ͨ����һ�����ã������в������з���ֵ��
class MyAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};

void test() {
	MyAdd myAdd;
	cout << myAdd(1, 3) << endl;
}

//2 �������󳬳���ͨ��������������Լ���״̬������һЩ�ڲ���Ա���ԣ�
class MyPrint {
public:
	void operator()(string s) {
		cout << s << endl;
		count++;
	}

	int count=0;
};

void test2() {
	MyPrint p;
	p("hello");
	p("hello");
	p("hello");
	p("hello");

	// ʹ�õ��º�����Ա���ԣ�����ͳ�Ƶ��������Ĵ�����
	cout << "call MyPrint times:" << p.count << endl;
}

//3 �������������Ϊ�������ݡ�
void doPrint(MyPrint& p,string s) {
	p(s);
	p(s);
	p(s);
}
void test3(){
	MyPrint p;
	doPrint(p,"hi");
}

int main() {
	//test();
	//test2();
	test3();

	system("pause");
	return 0;
}