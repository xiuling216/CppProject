
#include <iostream>
#include <string>

using namespace std;

//string& insert(int pos, const char* s);			//在指定位置n处，插入字符串
//string& insert(int pos, const string& str);		//在指定位置n处，插入字符串
//string& insert(int pos, int n, char c);			//在指定位置插入n个字符c
//string& erase(int pos=0, int n = npos);			//删除从Pos开始的n个字符
void test() {
	// 插入
	string s = "abc";
	s.insert(1, "123");
	cout << "s = " << s << endl;

	s.insert(2, 3,'x');
	cout << "s = " << s << endl;

	// 删除
	s.erase( 3);
	cout << "s = " << s << endl;

}

int main() {
	test();

	system("pause");
	return 0;
}