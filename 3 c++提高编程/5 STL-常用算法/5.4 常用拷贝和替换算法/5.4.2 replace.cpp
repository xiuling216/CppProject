#include <iostream>
#include <string>
#include<vector>
#include<algorithm>

using namespace std;

// replace �������ھ�Ԫ���滻Ϊ��Ԫ��
void print(int val) {
	cout << val << " ";
}

void test() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(1);
	v.push_back(1);
	v.push_back(3);

	replace(v.begin(), v.end(), 1, 10);

	for_each(v.begin(), v.end(), print);
}

int main() {
	test();

	system("pause");
	return 0;
}