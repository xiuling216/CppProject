
#include <iostream>
#include <string>

using namespace std;
class Base {
public:
	Base() {
		cout << "Base构造" << endl;
	}
	~Base() {
		cout << "Base析构" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "Son构造" << endl;
	}
	~Son() {
		cout << "Son析构" << endl;
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