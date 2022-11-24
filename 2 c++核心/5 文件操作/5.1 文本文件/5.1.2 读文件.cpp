
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void test() {
	// 1 包含头文件: #include <fstream>
	// 2 创建流对象: ifstream ifs;
	ifstream ifs;

	// 3 打开文件并判断文件是否打开成功: ifs.open("文件路径", 打开方式);
	ifs.open("testOutFile.txt", ios::in);
	// 判断是否打开
	if (!ifs.is_open()) {
		cout << "打开文件失败" << endl;
		return;
	}

	// 4 读数据: 四种方式读取
	// 第一种方式
	char buf[1024] = {0};
	while (ifs >> buf) {
		cout << buf << endl;
	}

	// 第二种
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf))) {
	//	cout << buf << endl;
	//}

	// 第三种
	//string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}

	// 第四种  不推荐，按字符读取效率低
	//char c;// 按字符一个个读取
	//while ((c = ifs.get()) != EOF) //EOF  指的是文件尾部
	//{
	//	cout << c;
	//}

	//5 关闭文件: ifs.close();
	ifs.close();
	
}

int main() {
	test();

	system("pause");
	return 0;
}