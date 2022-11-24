#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

// binary_search 查找元素是否存在
void test() {
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(5);
	v.push_back(4);

	// 只有在有序序列中才是准确的，如果没有sort排序测试出 未找到
	sort(v.begin(), v.end());
	bool ret = binary_search(v.begin(), v.end(), 3);
	if (ret) {
		cout << "找到元素" << endl;
	}
	else {
		cout << "未找到元素" << endl;
	}
}

int main() {
	test();

	system("pause");
	return 0;
}