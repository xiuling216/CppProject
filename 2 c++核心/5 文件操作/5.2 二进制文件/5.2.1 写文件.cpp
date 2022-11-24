
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Person {
public:
	char m_name[64];
	int m_age;
};

void test() {
	// 1 包含头文件
	// 2 创建流对象
	ofstream ofs;

	// 3 打开文件
	ofs.open("Person.txt", ios::out | ios::binary);
	
	// 4 写文件
	Person p = { "张三",20 };
	ofs.write((const char *)&p, sizeof(p));// 强转 (const char *)
	
	// 5 关闭文件
	ofs.close();
}

int main() {
	test();

	system("pause");
	return 0;
}