
#include <iostream>
#include <string>

using namespace std;
class Base {
public:
	static void fun()
	{
		cout << "Son fun ����" << endl;
	}

	static void fun(int a)
	{
		cout << "Son fun(int a)����" << endl;
	}
	static int m_a;
};

int Base::m_a = 100;

class Son :public Base {
public:
	static void fun()
	{
		cout << "Son fun ����" << endl;
	}

	static int m_a;
};

int Son::m_a = 200;

void test() {
	// һ��ͬ����̬�����������
	 
	// 1��ͨ������������ͬ������
	Son son;
	cout << son.m_a << endl;
	cout << son.Base::m_a << endl;// ͬ�����ԣ�����Ҫ�����������

	// 2��ͨ��������������ͬ������
	cout << Son::m_a << endl;
	// ͬ�����ԣ�����Ҫ�����������
	// ��һ�� ::����ͨ��������ʽ���ʡ��ڶ���::������ʸ�����������
	cout << Son::Base::m_a << endl;


	// ����ͬ����̬��Ա�������
	
	// 1��ͨ������������ͬ������
	Son son2;
	son2.fun();// ֱ�ӵ�������ĳ�Ա����
	// ͬ����Ա����������Ҫ����������ã����������ض��ٸ�����Ҫ��������
	// ԭ������ͬ�������Ὣ����ͬ���������ص�
	son2.Base::fun();
	son2.Base::fun(1);

	// 2��ͨ��������������ͬ������
	Son::fun();// ֱ�ӵ�������ĳ�Ա����
	// ͬ����Ա����������Ҫ����������ã����������ض��ٸ�����Ҫ��������
	// ԭ������ͬ�������Ὣ����ͬ���������ص�
	Son::Base::fun();
	Son::Base::fun(1);

}

int main() {
	test();

	system("pause");
	return 0;
}