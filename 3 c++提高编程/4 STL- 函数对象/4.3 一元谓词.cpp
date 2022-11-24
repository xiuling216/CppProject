#include <iostream>
#include <string>
#include<vector>
using namespace std;

// 一元谓词
class GreaterFive {
public:
	bool operator()(int val)const {
		return val > 5;
	}
};

void test() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	// 查找大于5的数字
	// GreaterFive() 是匿名函数对象
	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
	if (pos == v.end()) {
		cout << "未找到大于5的数字" << endl;
	}
	else {
		cout << "未找到大于5的数字:" << *pos << endl;
	}
}

int main() {
	test();

	system("pause");
	return 0;
}