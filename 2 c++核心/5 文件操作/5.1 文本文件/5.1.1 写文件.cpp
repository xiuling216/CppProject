
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void test() {
	ofstream ofs;

	ofs.open("testOutFile.txt",ios::out | ios::trunc);

	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;

	ofs.close();
}

int main() {
	test();

	system("pause");
	return 0;
}