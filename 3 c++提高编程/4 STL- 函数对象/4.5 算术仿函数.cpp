#include <iostream>
#include <string>
#include<functional>//�ڽ���������ͷ�ļ�
using namespace std;

//template<class T> T plus<T> //�ӷ��º���
//template<class T> T minus<T> //�����º���
//template<class T> T multiplies<T> //�˷��º���
//template<class T> T divides<T> //�����º���
//template<class T> T modulus<T> //ȡģ�º���
//template<class T> T negate<T> //ȡ���º���

// һԪ���� 
void test() {
	//negate ȡ���º���
	negate<int> n;
	cout << n(10) << endl;// -10
}

// ��Ԫ���� 
void test2() {
	// plus �ӷ�
	plus<int> plus;
	cout<<" 1 + 5 =" << plus(1, 5) << endl;

	//minus ����
	minus<int> minus;
	cout << " 10 - 2 = " << minus(10, 2) << endl;
}

int main() {
	//test();
	test2();

	system("pause");
	return 0;
}