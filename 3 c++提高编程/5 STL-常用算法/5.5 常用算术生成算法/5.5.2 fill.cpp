#include <iostream>
#include <string>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;
// fill ��������ָ����Χ���䣬���ָ��Ԫ��

void print(int val) {
	cout << val << " ";
}

void test() {
	vector<int>v;
	v.resize(10);

	vector<int>::iterator beg = v.begin();
	vector<int>::iterator end = v.begin() + 5;

	fill(beg, end, 1000);

	for_each(v.begin(), v.end(), print);
	cout << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}