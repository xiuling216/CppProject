
#include <iostream>
#include <string>

using namespace std;

//string��ֵ����
//string& operator=(const char* s);			char*�����ַ���		��ֵ����ǰstring
//string& operator=(const string& s);		string����s			��ֵ����ǰstring
//string& operator=(char c);				�ַ�				��ֵ����ǰstring
//string& assign(const char* s);			�ַ���s				��ֵ����ǰstring
//string& assign(const char* s, int n);		�ַ���s��ǰn���ַ�	��ֵ����ǰstring
//string& assign(const string& s);			�ַ���s				��ֵ����ǰstring
//string& assign(int n, char c);			��n���ַ�c			��ֵ����ǰstring

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