
#include <iostream>
#include <string>
#include<vector>

using namespace std;

void test() {
	vector<int> v;

	// 利用预留空间
	v.reserve(100000);
	// cout << v[0] << endl; // 会报错，0位置元素不可访问，未初始化。

	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);

		if (p != &v[0]) {  // 如果v做了动态内存扩展p就不会指向&v[0] 
			p = &v[0];  // 让指针p指向v的首地址
			num++;  // 如果v做了动态内存扩展,num就增加一次
		}
	}

	cout << num << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}