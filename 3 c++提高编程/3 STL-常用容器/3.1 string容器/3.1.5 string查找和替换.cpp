
#include <iostream>
#include <string>

using namespace std;

//int find(const string& str, int pos = 0) const;		//查找str第一次出现位置,从pos开始查找
//int find(const char* s, int pos = 0) const;			//查找s第一次出现位置,从pos开始查找
//int find(const char* s, int pos, int n) const;		//从pos位置查找s的前n个字符第一次位置
//int find(const char c, int pos = 0) const;			//查找字符c第一次出现位置,从pos开始查找
//int rfind(const string& str, int pos = npos) const;	//查找str最后一次位置,从pos开始查找
//int rfind(const char* s, int pos = npos) const;		//查找s最后一次出现位置,从pos开始查找
//int rfind(const char* s, int pos, int n) const;		//从pos查找s的前n个字符最后一次位置
//int rfind(const char c, int pos = 0) const;			//查找字符c最后一次出现位置
//string& replace(int pos, int n, const string& str);   //替换从pos开始n个字符为字符串str
//string& replace(int pos, int n, const char* s);		//替换从pos开始的n个字符为字符串s

// 查找
void test() {
	string s1 = "abcdefgde";
	int pos = s1.find("de");
	if (pos == -1) {
		cout << "not find" << endl;
	}
	else {
		cout << "pos = " << pos << endl;

	}

	// find和rfind的区别：
	// find从左往右找，rfind从右往左找
	pos =s1. rfind("dea");
	cout << "pos = " << pos << endl;
}

// 替换
void test2() {
	string s1 = "abcdefg";
	// 从位置1起 3 个字符替换为 1234
	s1.replace(1, 3, "1234");
	cout << "s1 = " << s1 << endl;

	s1 = "abcdefg";
	// 从位置1起 3 个字符替换为 12
	s1.replace(1, 3, "12");
	cout << "s1 = " << s1 << endl;

}

int main() {
	test();
	test2();

	system("pause");
	return 0;
}