
#include <iostream>
#include <string>
#include<deque>

using namespace std;

//deque& operator=(const deque& deq); //���صȺŲ�����
//assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
//assign(n, elem); //��n��elem������ֵ������

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
	
	//deque& operator=(const deque& deq); //���صȺŲ�����
	deque<int> d2;
	d2 = d;
	printDeque(d2);

	
	//assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
	deque<int> d3;
	d3.assign(d.begin(), d.begin()+2);
	printDeque(d3);

	//assign(n, elem); //��n��elem������ֵ������
	deque<int> d4;
	d4.assign(10, 5);
	printDeque(d4);
}

int main() {
	test();

	system("pause");
	return 0;
}