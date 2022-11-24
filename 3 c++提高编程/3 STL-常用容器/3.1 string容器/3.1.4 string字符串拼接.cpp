
#include <iostream>
#include <string>

using namespace std;

//string& operator+=(const char* str);				//����+=������
//string& operator+=(const char c);					//����+=������
//string& operator+=(const string& str);			//����+=������
//string& append(const char* s);					//���ַ���s���ӵ���ǰ�ַ�����β
//string& append(const char* s, int n);				//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//string& append(const string& s);					//ͬoperator+=(const string& str)
//string& append(const string& s, int pos, int n);	//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β

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