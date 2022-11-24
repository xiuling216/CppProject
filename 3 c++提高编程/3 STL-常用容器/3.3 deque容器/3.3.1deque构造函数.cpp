
#include <iostream>
#include <string>
#include<deque>
using namespace std;

//deque<T> deqT;			//Ĭ�Ϲ�����ʽ
//deque(beg, end);		//���캯����[beg, end)�����е�Ԫ�ؿ���������
//deque(n, elem);			//���캯����n��elem����������
//deque(const deque& deq); //�������캯��

void printDeque(const deque<int>& d) {
	// const_iterator const������
	for (deque<int>::const_iterator it = d.begin(); it < d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test() {
	deque<int> d;
	for (int i = 0; i < 5; i++) {
		d.push_back(i);
	}

	printDeque(d);

	//deque(beg, end);		//���캯����[beg, end)�����е�Ԫ�ؿ���������
	deque<int> d2(d.begin(), d.end());
	printDeque(d2);

	//deque(n, elem);			//���캯����n��elem����������
	deque<int> d3(10, 5);
	printDeque(d3);

	//deque(const deque& deq); //�������캯��
	deque<int> d4(d3);
	printDeque(d4);

	cout << d.front() << endl;  // ��һ��Ԫ��
	cout << d.back() << endl;  // ���һ��Ԫ��
	cout << *d.begin() << endl;  // ��һ��Ԫ��
	cout << *(d.end() - 1) << endl;  // ���һ��Ԫ��
	cout << *d.rbegin() << endl;  // ���һ��Ԫ��
	cout << *(d.rend()-1) << endl;  // ��һ��Ԫ��
}

int main() {
	test();

	system("pause");
	return 0;
}