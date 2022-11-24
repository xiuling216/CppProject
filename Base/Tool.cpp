
#include "Tool.h"

int max(int a, int b) {
	return a > b ? a : b;
}

//字符串分割函数
std::vector<std::string> split(std::string str, std::string pattern)
{
	std::string::size_type pos;
	std::vector<std::string> result;
	str += pattern;
	int size_str = str.size();
	int size_pattern = pattern.size();
	for (int i = 0; i < size_str; i++)
	{
		pos = str.find(pattern, i);
		if (pos != str.npos) {  // pos等于-1时没找到
			string s = str.substr(i, pos - i);
			result.push_back(s);
			i = pos + size_pattern - 1;
		}
	}
	return result;
}

// 生成小于某个最大数的随机数
// 在调用之前要做到真正的随机，需要在main里加入随机数种子：srand((unsigned int)time(NULL));
int random(int max) {
	return rand() % max;
}

void pointLearn() {
	// 1 指针定义
	int a = 10;
	// 定义指针
	int* p;
	// 让指针指向a的地址
	p = &a;
	cout << "a的地址："<<&a<<endl;
	cout << "指针p的值：" << p << endl;

	// 2 指针使用
	*p = 2000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
}


void bubbleSort(int* arr, int len) {
	// 需要记住两个for循环，循环的范围
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void printArr(int* p, int len) {
	for (int i = 0; i < 10; i++) {
		cout << *p << endl;
		p++;
	}
}