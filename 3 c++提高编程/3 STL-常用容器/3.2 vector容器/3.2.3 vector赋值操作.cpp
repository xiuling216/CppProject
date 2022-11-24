
#include <iostream>
#include <string>
#include<vector>

using namespace std;

//vector& operator=(const vector& vec);	//���صȺŲ�����
//assign(beg, end);						//��[beg, end)�����е����ݿ�����ֵ������
//assign(n, elem);						//��n��elem������ֵ������

void printVector(vector<int>& v) {
	for (int item : v) {
		cout << item << " ";
	}
	cout << endl;
}

void test() {
	vector<int> v1;
	for (int i = 1; i < 6; i++) {
		v1.push_back(i);
	}

	printVector(v1);

	//vector& operator=(const vector& vec);	//���صȺŲ�����
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//assign(n, elem);//��n��elem������ֵ������
	v3.assign(10, 3);
	printVector(v3);
}

int main() {
	test();

	system("pause");
	return 0;
}