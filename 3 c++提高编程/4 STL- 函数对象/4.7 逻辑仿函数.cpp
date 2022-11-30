#include <iostream>
#include <string>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;

void printVector(const vector<bool>& v) {
	for (auto item : v) {
		cout << item << " ";
	}
	cout << endl;
}


void test() {
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	printVector(v);

	// �����߼��Ƿº�������v�����ݰ��˵�v2����������ȡ��
	vector<bool>v2;
	v2.resize(v.size());
	// transform ���˺���
	// logical_not<bool>() �߼��Ƿº���
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	printVector(v2);
}

int main() {
	test();

	system("pause");
	return 0;
}