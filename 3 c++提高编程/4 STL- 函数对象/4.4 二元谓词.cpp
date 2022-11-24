#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

// 二元谓词
class MyCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};
void myPrint(const vector<int>& v) {
	for (auto item : v) {
		cout << item << " ";
	}
	cout << endl;
}

void test() {
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);
	v.push_back(2);

	sort(v.begin(), v.end());
	myPrint(v);

	// 利用仿函数改变排序规则 大到小
	sort(v.begin(), v.end(), MyCompare());
	myPrint(v);

}

int main() {
	test();

	system("pause");
	return 0;
}