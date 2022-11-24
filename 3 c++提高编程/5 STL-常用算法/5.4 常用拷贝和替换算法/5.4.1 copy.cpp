#include <iostream>
#include <string>
#include<vector>
#include<algorithm>

using namespace std;

// copy 将容器内指定范围内元素拷贝到目标容器
void print(int val) {
	cout << val << " ";
}

void test() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int> tv;
	// 使用copy前需要提前给目标容器开辟空间
	tv.resize(v.size());
	copy(v.begin(), v.end()+5, tv.begin());

	for_each(tv.begin(), tv.end(), print);
}

int main() {
	test();

	system("pause");
	return 0;
}