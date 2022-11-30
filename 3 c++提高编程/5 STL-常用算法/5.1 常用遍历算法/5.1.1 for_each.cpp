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

	// ������ͨ�ͺ��� print1
	for_each(v.begin(), v.end(), print1);
	cout << endl;

	// ���÷º��� print2()
	for_each(v.begin(), v.end(), print2());
}

int main() {
	test();

	system("pause");
	return 0;
}