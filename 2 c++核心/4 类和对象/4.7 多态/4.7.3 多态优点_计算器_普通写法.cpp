
#include <iostream>
#include <string>

using namespace std;

class Caculator {
public:
	int getResult(string oper) {
		if (oper == "+") {
			return m_num1 + m_num2;
		}
		else if (oper == "-") {
			return m_num1 - m_num2;
		}
		else if (oper == "*") {
			return m_num1 * m_num2;
		}

		// �������չ���ܣ���Ҫ�������޸�Դ��
		// ��ʵ�ʿ����У��ᳫ ����ԭ��
		// ����ԭ�򣺿���չ�������ر��޸ġ�
	}

public:
	int m_num1;
	int m_num2;
};

void test() {
	Caculator c;
	c.m_num1 = 20;
	c.m_num2 = 10;

	cout << c.m_num1 << " + " << c.m_num2 << " = " << c.getResult("+")<<endl;
	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.getResult("-") << endl;
	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.getResult("*") << endl;

}

int main() {
	test();

	system("pause");
	return 0;
}