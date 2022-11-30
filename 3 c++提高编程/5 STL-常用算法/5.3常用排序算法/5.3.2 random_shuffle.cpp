#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
#include<ctime>

using namespace std;

// random_shuffle ϴ�� ���ƶ���Χ��Ԫ�ش��Ҵ���

void print(int val) {
	cout << val << " ";
}

void test() {
	// ��������ӣ���random_shuffle��ʵ���������
	srand((unsigned int)time(NULL));

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), print);
	cout << endl;

	// ϴ�ƴ���˳��
	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(), print);
}

int main() {
	test();

	system("pause");
	return 0;
}