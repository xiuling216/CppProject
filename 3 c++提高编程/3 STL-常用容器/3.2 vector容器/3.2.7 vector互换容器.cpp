
#include <iostream>
#include <string>
#include<vector>
using namespace std;

void printVector(vector<int> v) {
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test() {
	cout << "����ǰ��" << endl;
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2;
	for (int i = 9; i >=0; i--) {
		v2.push_back(i);
	}
	printVector(v2);
	
	cout << "������" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);

}
// ʵ����;
// ����swap���������ڴ�ռ�
void test2() {
	vector<int> v;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}
	cout << "v������Ϊ��" << v.capacity() << endl;  // 138255
	cout << "v�ĳ���Ϊ��" << v.size() << endl;  // 100000
	
	v.resize(3);  // ����ָ����С������С��ĺ�Сʱ��capacity����ռ�ÿռ�ܴ󣬲�����С
	cout << "v������Ϊ��" << v.capacity() << endl;  // 138255
	cout << "v�ĳ���Ϊ��" << v.size() << endl;  // 3

	// ����swap�����ڴ�
	// vector<int>(v) ����vʾ����һ����������������������������ͳ���ֻ��3
	// swap(v) ������������������v
	vector<int>(v).swap(v);
	cout << "v������Ϊ��" << v.capacity() << endl;  // 3
	cout << "v�ĳ���Ϊ��" << v.size() << endl;  // 3

}

int main() {
	test2();

	system("pause");
	return 0;
}