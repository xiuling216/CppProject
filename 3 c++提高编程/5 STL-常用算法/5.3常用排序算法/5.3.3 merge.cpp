#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

// merge 将两个有序容器元素合并到一个目标容器中
void print(int val) {
	cout << val << " ";
}

void test() {
	vector<int> v1;
	vector<int> v2;

	// 两个容器需要是有序，且排序一致，都是升序或降序
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(100 + i);
		// v2.push_back(100 - i); // 程序会崩溃
	}

	vector<int> v3;
	// 需要提前给目标容器分配空间
	v3.resize(v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	for_each(v3.begin(), v3.end(), print);
}

int main() {
	test();

	system("pause");
	return 0;
}