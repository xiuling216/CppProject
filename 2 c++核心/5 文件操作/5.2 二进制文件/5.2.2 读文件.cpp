
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

	//2 创建流对象
	ifstream ifs;

	//3 打开文件 并判断文件是否成功打开
	ifs.open("Person.txt", ios::in | ios::binary);//需要指定读取方式 ios::binary
	if (!ifs.is_open()) {
		cout << "打开文件失败" << endl;
		return;
	}

	//4 读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "读取二进制文件内容：" << endl;
	cout << p.m_name << endl;
	cout << p.m_age << endl;

	//5 关闭文件
	ifs.close();
}

int main() {
	test();

	system("pause");
	return 0;
}