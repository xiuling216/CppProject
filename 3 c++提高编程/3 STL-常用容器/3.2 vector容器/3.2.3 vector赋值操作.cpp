
#include <iostream>
#include <string>
#include<vector>

using namespace std;

//vector& operator=(const vector& vec);	//重载等号操作符
//assign(beg, end);						//将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem);						//将n个elem拷贝赋值给本身。

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

	//vector& operator=(const vector& vec);	//重载等号操作符
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//assign(n, elem);//将n个elem拷贝赋值给本身。
	v3.assign(10, 3);
	printVector(v3);
}

int main() {
	test();

	system("pause");
	return 0;
}