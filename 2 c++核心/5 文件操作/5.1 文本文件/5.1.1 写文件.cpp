
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void test() {
	ofstream ofs;

	ofs.open("testOutFile.txt",ios::out | ios::trunc);

	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;

	ofs.close();
}

int main() {
	test();

	system("pause");
	return 0;
}