

#include <iostream>
#include <string>
#include<list>
using namespace std;

//list<T> lst; //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
//list(beg, end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
//list(n, elem); //���캯����n��elem����������
//list(const list& lst); //�������캯����
void printList(const list<int>& l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test() {
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_front(3);
	l.push_front(4);
	printList(l);

	list<int> l2(l.begin(), l.end());
	printList(l2);

	list<int> l3(l2);
	printList(l3);

	list<int>l4(10, 3);
	printList(l4);

}

int main() {
	test();

	system("pause");
	return 0;
}