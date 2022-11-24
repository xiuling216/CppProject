#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

// reverse 将容器元素反转

// 将string内容反转
void test() {
	string a = "abcdefg";

	reverse(a.begin(), a.end());

	cout << a << endl;
}

// vector容器元素反转
void print(int val) {
	cout << val << " ";
}

void test2() {
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	reverse(v.begin(), v.end());

	for_each(v.begin(), v.end(), print);
}

int main() {
	test();
	test2();

	system("pause");
	return 0;
}