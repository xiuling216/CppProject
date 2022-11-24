#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

void print1(int val) {
	cout << val << " ";
}

class print2 {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

void test() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	// 利用普通和函数 print1
	for_each(v.begin(), v.end(), print1);
	cout << endl;

	// 利用仿函数 print2()
	for_each(v.begin(), v.end(), print2());
}

int main() {
	test();

	system("pause");
	return 0;
}