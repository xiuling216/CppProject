
#include <iostream>
#include <string>

using namespace std;

//int find(const string& str, int pos = 0) const;		//����str��һ�γ���λ��,��pos��ʼ����
//int find(const char* s, int pos = 0) const;			//����s��һ�γ���λ��,��pos��ʼ����
//int find(const char* s, int pos, int n) const;		//��posλ�ò���s��ǰn���ַ���һ��λ��
//int find(const char c, int pos = 0) const;			//�����ַ�c��һ�γ���λ��,��pos��ʼ����
//int rfind(const string& str, int pos = npos) const;	//����str���һ��λ��,��pos��ʼ����
//int rfind(const char* s, int pos = npos) const;		//����s���һ�γ���λ��,��pos��ʼ����
//int rfind(const char* s, int pos, int n) const;		//��pos����s��ǰn���ַ����һ��λ��
//int rfind(const char c, int pos = 0) const;			//�����ַ�c���һ�γ���λ��
//string& replace(int pos, int n, const string& str);   //�滻��pos��ʼn���ַ�Ϊ�ַ���str
//string& replace(int pos, int n, const char* s);		//�滻��pos��ʼ��n���ַ�Ϊ�ַ���s

// ����
void test() {
	string s1 = "abcdefgde";
	int pos = s1.find("de");
	if (pos == -1) {
		cout << "not find" << endl;
	}
	else {
		cout << "pos = " << pos << endl;

	}

	// find��rfind������
	// find���������ң�rfind����������
	pos =s1. rfind("dea");
	cout << "pos = " << pos << endl;
}

// �滻
void test2() {
	string s1 = "abcdefg";
	// ��λ��1�� 3 ���ַ��滻Ϊ 1234
	s1.replace(1, 3, "1234");
	cout << "s1 = " << s1 << endl;

	s1 = "abcdefg";
	// ��λ��1�� 3 ���ַ��滻Ϊ 12
	s1.replace(1, 3, "12");
	cout << "s1 = " << s1 << endl;

}

int main() {
	test();
	test2();

	system("pause");
	return 0;
}