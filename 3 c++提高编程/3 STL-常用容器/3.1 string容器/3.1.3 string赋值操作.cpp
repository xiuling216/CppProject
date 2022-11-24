
#include <iostream>
#include <string>

using namespace std;

//string赋值操作
//string& operator=(const char* s);			char*类型字符串		赋值给当前string
//string& operator=(const string& s);		string类型s			赋值给当前string
//string& operator=(char c);				字符				赋值给当前string
//string& assign(const char* s);			字符串s				赋值给当前string
//string& assign(const char* s, int n);		字符串s的前n个字符	赋值给当前string
//string& assign(const string& s);			字符串s				赋值给当前string
//string& assign(int n, char c);			用n个字符c			赋值给当前string

void test() {
	string s1;
	s1 = "hello";
	cout <<"s1 = "<< s1 << endl;

	string s2;
	s2 = s1;
	cout << "s2 = " << s2 << endl;

	string s3;
	s3 = 'a';
	cout << "s3 = " << s3 << endl;

	string s4;
	s4.assign("hi");
	cout << "s4 = " << s4 << endl;

	string s5;
	s5.assign("teststring", 4);
	cout << "s5 = " << s5 << endl;

	string s6;
	s6.assign(s5);
	cout << "s6 = " << s6 << endl;

	string s7;
	s7.assign(5, 'c');
	cout << "s7 = " << s7 << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}