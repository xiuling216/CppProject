#include <iostream>
#include <string>
#include<vector>
#include<algorithm>

using namespace std;

// copy ��������ָ����Χ��Ԫ�ؿ�����Ŀ������
void print(int val) {
	cout << val << " ";
}

void test() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int> tv;
	// ʹ��copyǰ��Ҫ��ǰ��Ŀ���������ٿռ�
	tv.resize(v.size());
	copy(v.begin(), v.end()+5, tv.begin());

	for_each(tv.begin(), tv.end(), print);
}

int main() {
	test();

	system("pause");
	return 0;
}