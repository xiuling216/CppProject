
#include <iostream>
#include <string>
#include<vector>

using namespace std;

//at(int idx);	 //返回索引idx所指的数据
//operator[];	 //返回索引idx所指的数据
//front();		 //返回容器中第一个数据元素
//back();		 //返回容器中最后一个数据元素

void test() {
	vector<int> v1;
	for (int i = 1; i < 6; i++) {
		v1.push_back(i);
	}
	cout << v1.at(3) << endl;  // 第三个
	cout << v1[3]<< endl;  // 第三个
	cout << v1.front() << endl;  // 第一个
	cout << v1.back() << endl;  // 最后一个
}

int main() {
	test();

	system("pause");
	return 0;
}