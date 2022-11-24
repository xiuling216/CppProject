#include <iostream>
#include <string>
#include<vector>
#include<numeric>
using namespace std;
//accumulate 计算容器区间内元素之和
void test() {
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int>::iterator beg = v.begin();
	vector<int>::iterator end = v.begin()+5;
	// 计算前4个元素之和
	int ret=accumulate(beg,end, 0);

	cout << ret << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}