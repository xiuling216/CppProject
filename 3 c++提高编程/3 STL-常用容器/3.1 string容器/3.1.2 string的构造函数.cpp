
#include <iostream>
#include <string>

using namespace std;
// string�Ĺ��캯��
// string();					����һ�����ַ��������磺string str;
// string(const char* s);		ʹ���ַ���s��ʼ��
// string(const string& str)	ʹ��һ��string�����ʼ����һ��string����
// string(int n,char c)			ʹ��n���ַ�c��ʼ��string
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