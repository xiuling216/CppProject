#include <iostream>
#include <string>

using namespace std;


void test() {
	pair<string, int> p1("tom", 19);
	pair<string, int> p2 = make_pair("echo", 18);

	cout << "name: " << p1.first << ",age: " << p1.second << endl;
	cout << "name: " << p2.first << ",age: " << p2.second << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}