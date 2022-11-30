#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

// replace_if ����������������������Ԫ�أ��滻����Ԫ��
bool greater3less9(int val) {
	// ��������С��9
	return val > 3 && val < 9;
}

void print(int val) {
	cout << val << " ";
}

void test() {
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), print);
	cout << endl;

	// ������3��С��9��Ԫ���滻��100
	replace_if(v.begin(), v.end(), greater3less9,100);

	for_each(v.begin(), v.end(), print);
}

int main() {
	test();

	system("pause");
	return 0;
}