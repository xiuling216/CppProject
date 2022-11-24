#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
//#include<numeric>
using namespace std;

//set_difference 求容器差集

void print(int val) {
	cout << val << " ";
}

void test() {
	vector<int> v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i+5);
	}
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	for_each(v2.begin(), v2.end(), print);
	cout << endl;

	// 求v1和v2的差集
	vector<int> vt1;
	// 求差集需要先给目标容器开辟空间
	// 最特殊的情况，两个容器没有差集，空间可以设定为第一个容器的大小
	vt1.resize(v1.size());

	// 返回目标容器的最后一个元素的迭代器地址
	vector<int>::iterator itEnd = set_difference(v1.begin(),v1.end(),
										v2.begin(),v2.end(),vt1.begin());
	cout << "v1和v2的差集：" << endl;
	for_each(vt1.begin(), itEnd, print);
	cout << endl;
	

	// 求v2和v1的差集：
	vector<int> vt2;
	// 求差集需要先给目标容器开辟空间
	// 最特殊的情况，两个容器没有差集，空间可以设定为第一个容器的大小
	vt2.resize(v2.size());

	// 返回目标容器的最后一个元素的迭代器地址
	vector<int>::iterator itEnd2 = set_difference(v2.begin(), v2.end(),
		v1.begin(), v1.end(), vt2.begin());
	cout << "v2和v1的差集：" << endl;
	for_each(vt2.begin(), itEnd2, print);
	cout << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}