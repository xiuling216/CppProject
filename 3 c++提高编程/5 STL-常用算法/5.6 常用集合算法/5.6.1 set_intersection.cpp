#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
//#include<numeric>
using namespace std;

//set_intersection ����������

void print(int val) {
	cout << val << " ";
}

void test() {
	vector<int> v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i+5);
	}
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	for_each(v2.begin(), v2.end(), print);
	cout << endl;

	vector<int> vt;
	// �󽻼� Ҫ�ȿ���Ŀ�������ռ�
	// ����ȡĿ���������н�С�Ŀռ�
	vt.resize(min(v1.size(),v2.size()));

	// ����Ŀ�����������һ��Ԫ�صĵ�������ַ
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());

	cout << "������" << endl;
	for_each(vt.begin(), itEnd, print);
	cout << endl;

}

int main() {
	test();

	system("pause");
	return 0;
}