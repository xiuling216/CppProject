#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

// merge ��������������Ԫ�غϲ���һ��Ŀ��������
void print(int val) {
	cout << val << " ";
}

void test() {
	vector<int> v1;
	vector<int> v2;

	// ����������Ҫ������������һ�£������������
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(100 + i);
		// v2.push_back(100 - i); // ��������
	}

	vector<int> v3;
	// ��Ҫ��ǰ��Ŀ����������ռ�
	v3.resize(v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	for_each(v3.begin(), v3.end(), print);
}

int main() {
	test();

	system("pause");
	return 0;
}