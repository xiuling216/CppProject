

#include <iostream>
#include <string>

using namespace std;

void test() {
	string s = "abcdefg";
	
	// 获取单个字符
	cout << s[1] << endl;
	cout << s.at(1) << endl;

	// 修改单个字符
	s[1] = 'x';
	cout << s << endl;
	s.at(1) = 'y';
	cout << s << endl;

}

int main() {
	test();

	system("pause");
	return 0;
}