
#include <iostream>
#include <string>

using namespace std;
template<class T>
class Base {
	T b;
};

// ����д��
// ����̳и�������ģ��ʱ������������ʱ����Ҫָ��������T������
//class Son :public Base {
//};

// ��ȷд�����£�ָ��TΪint
class Son :public Base<int> {
};

void test1() {
	Son s;
}

// ��������ָ��������T���������ͣ�����Ҳ���Ϊģ��
// T ��base���������ͣ�Y��Son2����������
template<class T,class Y>
class Son2 :public Base<T> {
	Y y;
};

void test2() {
	Son2<int, string> s;
}

int main() {
	test1();
	test2();

	system("pause");
	return 0;
}