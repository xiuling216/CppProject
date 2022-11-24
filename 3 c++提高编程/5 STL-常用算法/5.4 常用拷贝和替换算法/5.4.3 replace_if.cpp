#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

// replace_if 将容器区间内满足条件的元素，替换成新元素
bool greater3less9(int val) {
	// 大于三且小于9
	return val > 3 && val < 9;
}

void print(int val) {
	cout << val << " ";
}

void test() {
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), print);
	cout << endl;

	// 将大于3且小于9的元素替换成100
	replace_if(v.begin(), v.end(), greater3less9,100);

	for_each(v.begin(), v.end(), print);
}

int main() {
	test();

	system("pause");
	return 0;
}