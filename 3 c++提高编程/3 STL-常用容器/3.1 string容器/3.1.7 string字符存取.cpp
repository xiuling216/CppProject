

#include <iostream>
#include <string>

using namespace std;

void test() {
	string s = "abcdefg";
	
	// ��ȡ�����ַ�
	cout << s[1] << endl;
	cout << s.at(1) << endl;

	// �޸ĵ����ַ�
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