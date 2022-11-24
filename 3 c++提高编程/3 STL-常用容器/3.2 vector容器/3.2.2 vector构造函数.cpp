
#include <iostream>
#include <string>
#include<vector>

using namespace std;

//vector<T> v;						//����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//vector(v.begin(), v.end());		//��v[begin(), end())�����е�Ԫ�ؿ���������
//vector(n, elem);					//���캯����n��elem����������
//vector(const vector& vec);		 //�������캯����

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

	vector<int> v2(v1.begin(), v1.end());
	// ������ķ�ʽ������vector��ֻҪ�������һ������Ϳ��Կ��������ڵ����ݵ��µ�vector
	//vector<int> v2(v1.begin(), v1.begin() + 3);
	printVector(v2);

	vector<int> v3(10,5);
	printVector(v3);

	vector<int> v4(v3);
	printVector(v4);
}

int main() {
	test();

	system("pause");
	return 0;
}