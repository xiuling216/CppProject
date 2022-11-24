
#include <iostream>
#include <string>

using namespace std;
// string的构造函数
// string();					创建一个空字符串，例如：string str;
// string(const char* s);		使用字符串s初始化
// string(const string& str)	使用一个string对象初始化另一个string对象
// string(int n,char c)			使用n个字符c初始化string
void test() {
	string s;

	const char* str = "sdfd";
	string s1(str);
	cout << "s1 = " << s1 << endl;

	string s2(s1);
	cout << "s2 = " << s2 << endl;

	string s3(5, 'x');
	cout << "s3 = " << s3 << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}