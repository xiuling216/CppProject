#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

// ���������ظ�Ԫ�� adjacent_find
void test() {
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(3);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos != v.end()) {
		cout << "���ҵ�����Ԫ���ظ���" << *pos << endl;
	}
	else {
		cout << "δ�ҵ������ظ�Ԫ��" << endl;
	}


}

int main() {
	test();

	system("pause");
	return 0;
}