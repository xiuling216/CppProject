#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

// 查找相邻重复元素 adjacent_find
void test() {
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(3);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos != v.end()) {
		cout << "查找到相邻元素重复：" << *pos << endl;
	}
	else {
		cout << "未找到相邻重复元素" << endl;
	}


}

int main() {
	test();

	system("pause");
	return 0;
}