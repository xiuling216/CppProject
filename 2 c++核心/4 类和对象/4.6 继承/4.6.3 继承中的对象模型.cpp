
#include <iostream>
#include <string>

using namespace std;
class Base {
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class Son :public Base {
public:
	int m_d;
};

void test() {
	cout << "size of son = " << sizeof(Son) << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}