#include <iostream>
#include <string>
#include<deque>
#include<algorithm>// ��׼�㷨ͷ�ļ�
using namespace std;


void printDeque(const deque<int>& d) {
	for (auto item : d) {
		cout << item << " ";
	}
	cout << endl;
}

void test() {
	deque<int> d;
	d.push_back(30);
	d.push_back(50);
	d.push_back(20);
	d.push_back(40);
	d.push_back(10);
	printDeque(d);

	// ����Ĭ�ϴ�С����
	// ����֧��������ʵĵ���������������������sort������
	// vector����Ҳ֧��sort����
	sort(d.begin(), d.end());
	printDeque(d);
}

int main() {
	test();

	system("pause");
	return 0;
}