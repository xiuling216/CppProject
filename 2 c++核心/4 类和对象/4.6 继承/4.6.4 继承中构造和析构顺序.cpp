
#include <iostream>
#include <string>

using namespace std;
class Base {
public:
	Base() {
		cout << "Base����" << endl;
	}
	~Base() {
		cout << "Base����" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "Son����" << endl;
	}
	~Son() {
		cout << "Son����" << endl;
	}
};

void test() {
	Son son;

}

int main() {
	test();

	system("pause");
	return 0;
}