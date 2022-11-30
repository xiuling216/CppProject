#include <iostream>
#include <string>
#include<set>
using namespace std;

// set ��multiset����
template<class T>
void myPrint(T& s) {
	for (auto item : s) {
		cout << item << " ";
	}
	cout << endl;
}
void test() {
	set<int> s;
	pair<set<int>::iterator, bool> ret=s.insert(1);
	if (ret.second) {
		cout << "��һ�β���ɹ�" << endl;
	}
	else {
		cout << "��һ�β���ʧ��" << endl;
	}

	ret = s.insert(1);
	if (ret.second) {
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else {
		cout << "�ڶ��β���ʧ��" << endl;
	}

	myPrint(s);
}

// multiset ������ظ����ݣ������ڲ���ʱҲ����������
void test2() {
	multiset<int> ms;
	ms.insert(4);
	ms.insert(2);
	ms.insert(1);
	ms.insert(1);
	ms.insert(3);
	ms.insert(1);
	ms.insert(1);

	myPrint(ms);
}

int main() {
	test();

	test2();

	system("pause");
	return 0;
}