
#include <iostream>
#include <string>
#include<vector>

using namespace std;

//at(int idx);	 //��������idx��ָ������
//operator[];	 //��������idx��ָ������
//front();		 //���������е�һ������Ԫ��
//back();		 //�������������һ������Ԫ��

void test() {
	vector<int> v1;
	for (int i = 1; i < 6; i++) {
		v1.push_back(i);
	}
	cout << v1.at(3) << endl;  // ������
	cout << v1[3]<< endl;  // ������
	cout << v1.front() << endl;  // ��һ��
	cout << v1.back() << endl;  // ���һ��
}

int main() {
	test();

	system("pause");
	return 0;
}