
#include <iostream>
#include <string>

using namespace std;

//string& insert(int pos, const char* s);			//��ָ��λ��n���������ַ���
//string& insert(int pos, const string& str);		//��ָ��λ��n���������ַ���
//string& insert(int pos, int n, char c);			//��ָ��λ�ò���n���ַ�c
//string& erase(int pos=0, int n = npos);			//ɾ����Pos��ʼ��n���ַ�
void test() {
	// ����
	string s = "abc";
	s.insert(1, "123");
	cout << "s = " << s << endl;

	s.insert(2, 3,'x');
	cout << "s = " << s << endl;

	// ɾ��
	s.erase( 3);
	cout << "s = " << s << endl;

}

int main() {
	test();

	system("pause");
	return 0;
}