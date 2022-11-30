#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
//#include<numeric>
using namespace std;

//set_difference �������

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

	// ��v1��v2�Ĳ
	vector<int> vt1;
	// ����Ҫ�ȸ�Ŀ���������ٿռ�
	// ��������������������û�в���ռ�����趨Ϊ��һ�������Ĵ�С
	vt1.resize(v1.size());

	// ����Ŀ�����������һ��Ԫ�صĵ�������ַ
	vector<int>::iterator itEnd = set_difference(v1.begin(),v1.end(),
										v2.begin(),v2.end(),vt1.begin());
	cout << "v1��v2�Ĳ��" << endl;
	for_each(vt1.begin(), itEnd, print);
	cout << endl;
	

	// ��v2��v1�Ĳ��
	vector<int> vt2;
	// ����Ҫ�ȸ�Ŀ���������ٿռ�
	// ��������������������û�в���ռ�����趨Ϊ��һ�������Ĵ�С
	vt2.resize(v2.size());

	// ����Ŀ�����������һ��Ԫ�صĵ�������ַ
	vector<int>::iterator itEnd2 = set_difference(v2.begin(), v2.end(),
		v1.begin(), v1.end(), vt2.begin());
	cout << "v2��v1�Ĳ��" << endl;
	for_each(vt2.begin(), itEnd2, print);
	cout << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}