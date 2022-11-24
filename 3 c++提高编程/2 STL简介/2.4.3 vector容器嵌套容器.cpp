
#include <iostream>
#include <string>
#include<vector>

using namespace std;

void test() {
	// 定义一个容器嵌套容器
	vector<vector<int>> v;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;

	for (int i = 1; i < 4; i++) {
		v1.push_back(i);
		v2.push_back(i+1);
		v3.push_back(i+2);
	}

	// 将容器元素插入到容器
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);

	// 遍历1
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
			cout << *vit << " ";
		}
		cout << endl;
	}

	// 遍历2
	/*for (vector<int> item : v) {
		for (int o : item) {
			cout << o << " ";
		}
		cout << endl;
	}*/
}

int main() {
	test();

	system("pause");
	return 0;
}