#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

// binary_search ����Ԫ���Ƿ����
void test() {
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(5);
	v.push_back(4);

	// ֻ�������������в���׼ȷ�ģ����û��sort������Գ� δ�ҵ�
	sort(v.begin(), v.end());
	bool ret = binary_search(v.begin(), v.end(), 3);
	if (ret) {
		cout << "�ҵ�Ԫ��" << endl;
	}
	else {
		cout << "δ�ҵ�Ԫ��" << endl;
	}
}

int main() {
	test();

	system("pause");
	return 0;
}