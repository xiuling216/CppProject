
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	int m_max_age;
};

class Sheep:public Animal {

};

class Tuo :public Animal {

};

class SheepTuo :public Sheep,public Tuo {

};

void test() {
	SheepTuo sheep_tuo;
	// sheep_tuo.m_max_age = 50; //  �޷�ֱ�ӷ��ʣ��ᱨ��
	sheep_tuo.Sheep::m_max_age = 50;
	sheep_tuo.Tuo::m_max_age = 60;
	// ���μ̳У�����������ӵ��ͬ����Ա����Ҫ�������������ֲ��ܷ���
	cout << "sheep_tuo.Sheep::m_max_age = "<< sheep_tuo.Sheep::m_max_age << endl;
	cout << "sheep_tuo.Tuo::m_max_age = " << sheep_tuo.Tuo::m_max_age << endl;
	// ռ���ڴ� 8
	cout << "sizeof(sheep_tuo) = " << sizeof(sheep_tuo) << endl;

	// ��������������������⣬��������������������ݣ������Դ�˷ѡ�
	// ���ʱ��Ҫʹ������������
	// 4.6.8 ���μ̳ж������
}

int main() {
	test();

	system("pause");
	return 0;
}