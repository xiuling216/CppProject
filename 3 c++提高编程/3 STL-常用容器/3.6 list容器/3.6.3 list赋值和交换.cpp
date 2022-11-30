
#include <iostream>
#include <string>
#include<list>
using namespace std;

void printList(const list<int>& l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test() {
	//assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
	list<int> l1;
	for (int i = 0; i < 5; i++) {
		l1.push_back(i);
	}
	printList(l1);

	list<int>l2;
	l2.assign(l1.begin(), l1.end());
	printList(l2);

	//assign(n, elem); //��n��elem������ֵ������
	l2.assign(10, 3);
	printList(l2);

	//list& operator=(const list & lst); //���صȺŲ�����
	list<int> l3;
	l3 = l2;
	printList(l3);

	//swap(lst); //��lst�뱾���Ԫ�ػ�����
	l1.swap(l3);
	cout << "������ģ�" << endl;
	printList(l1);
	printList(l3);

}

int main() {
	test();

	system("pause");
	return 0;
}