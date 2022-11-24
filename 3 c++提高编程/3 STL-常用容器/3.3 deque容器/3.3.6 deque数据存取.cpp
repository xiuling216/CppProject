
#include <iostream>
#include <string>
#include<deque>
using namespace std;


void printDeque(const deque<int>& d) {
	for (auto item : d) {
		cout << item << " ";
	}
	cout << endl;
}

void test() {
	deque<int> d;
	for (int i = 0; i < 5; i++) {
		d.push_front(i);
	}
	printDeque(d);

	//at(int idx); //��������idx��ָ������
	cout << d.at(2) << endl;
	
	//operator[]; //��������idx��ָ������
	cout << d[2] << endl;

	//front(); //���������е�һ������Ԫ��
	cout << d.front() << endl;

	//back(); //�������������һ������Ԫ��
	cout << d.back() << endl;

}

int main() {
	test();

	system("pause");
	return 0;
}