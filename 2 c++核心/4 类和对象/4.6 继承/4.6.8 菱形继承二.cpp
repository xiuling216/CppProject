
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	int m_max_age;
};

// ������̳� ����� ���μ̳� �������ݵ�����
// �ڼ̳еĻ���֮ǰ���� �ؼ��� virtual ��Ϊ�����
// Aniaml ��Ϊ�����
class Sheep:virtual public Animal {

};

class Tuo :virtual public Animal {

};

class SheepTuo :public Sheep,public Tuo {

};

void test() {
	// ��������������������ݣ������Դ�˷ѡ�
	// ���ʱ��Ҫʹ������������
	SheepTuo sheep_tuo2;
	sheep_tuo2.m_max_age = 60;
	// ����ֱ�ӷ������յ�������䣬Ҳ����ͨ����������ʵ�������յ�������䣬�������ݴ�ӡ����һ���ģ�ֻ��һ�����ݡ�
	cout << "sheep_tuo2.m_max_age = " << sheep_tuo2.m_max_age << endl;
	cout << "sheep_tuo2.Sheep::m_max_age = " << sheep_tuo2.Sheep::m_max_age << endl;
	cout << "sheep_tuo2.Tuo::m_max_age = " << sheep_tuo2.Tuo::m_max_age << endl;

	// ռ���ڴ� 12
	// ���Կ������������ռ���ڴ������
	cout << "sizeof(sheep_tuo2) = " << sizeof(sheep_tuo2) << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}