
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

		// 如果想扩展功能，就要在这里修改源码
		// 在实际开发中，提倡 开闭原则
		// 开闭原则：可扩展开发，关闭修改。
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