#include <iostream>
#include <string>
#include<vector>
#include<numeric>
using namespace std;
//accumulate ��������������Ԫ��֮��
void test() {
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int>::iterator beg = v.begin();
	vector<int>::iterator end = v.begin()+5;
	// ����ǰ4��Ԫ��֮��
	int ret=accumulate(beg,end, 0);

	cout << ret << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}