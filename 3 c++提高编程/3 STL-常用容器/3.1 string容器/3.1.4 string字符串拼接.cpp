
#include <iostream>
#include <string>

using namespace std;

//string& operator+=(const char* str);				//重载+=操作符
//string& operator+=(const char c);					//重载+=操作符
//string& operator+=(const string& str);			//重载+=操作符
//string& append(const char* s);					//把字符串s连接到当前字符串结尾
//string& append(const char* s, int n);				//把字符串s的前n个字符连接到当前字符串结尾
//string& append(const string& s);					//同operator+=(const string& str)
//string& append(const string& s, int pos, int n);	//字符串s中从pos开始的n个字符连接到字符串结尾

void test() {
	string s1("hello");
	s1 += " echo";
	cout << "s1 = " << s1 << endl;

	string s2;
	s2 += 'x';
	cout << "s2 = " << s2 << endl;

	string s3="say ";
	s3 += s1;
	cout << "s3 = " << s3 << endl;

	string s4 = s3;
	s4.append(" aaa");
	cout << "s4 = " << s4 << endl;

	string s5 = s3;
	s5.append(" 12345",3);
	cout << "s5 = " << s5 << endl;

	string s6 = s3;
	s6.append(s2);
	cout << "s6 = " << s6 << endl;

	string s7 = s3;
	s7.append(" 12345", 1,3);
	cout << "s7 = " << s7 << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}