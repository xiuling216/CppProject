
#include <iostream>
#include <string>

using namespace std;

void test() {
	string s = "abcdefg";
	cout << s.substr(1, 3) << endl;
}

void test2() {
	string email = "tom@163.com";
	int pos = email.find("@");
	string userName = email.substr(0, pos);
	cout << userName << endl;
}

int main() {
	test();
	test2();

	system("pause");
	return 0;
}