
#include <iostream>
#include <string>
#include<vector>

using namespace std;

//vector<T> v;						//采用模板实现类实现，默认构造函数
//vector(v.begin(), v.end());		//将v[begin(), end())区间中的元素拷贝给本身。
//vector(n, elem);					//构造函数将n个elem拷贝给本身。
//vector(const vector& vec);		 //拷贝构造函数。

void printVector(vector<int>& v) {
	for (int item : v) {
		cout << item << " ";
	}
	cout << endl;
}

void test() {
	vector<int> v1;
	for (int i = 1; i < 6; i++) {
		v1.push_back(i);
	}

	printVector(v1);

	vector<int> v2(v1.begin(), v1.end());
	// 用区间的方式来构造vector，只要传入的是一个区间就可以拷贝区间内的数据到新的vector
	//vector<int> v2(v1.begin(), v1.begin() + 3);
	printVector(v2);

	vector<int> v3(10,5);
	printVector(v3);

	vector<int> v4(v3);
	printVector(v4);
}

int main() {
	test();

	system("pause");
	return 0;
}