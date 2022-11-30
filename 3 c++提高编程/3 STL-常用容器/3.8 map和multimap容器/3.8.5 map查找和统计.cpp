#include <iostream>
#include <string>
#include<map>
using namespace std;

void test() {
	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(3, 40));


	map<int,int>::iterator it = m.find(3);
	if (it !=m.end()) {
		cout << " find! key = " << (*it).first
			<< " value = " << (*it).second
			<< endl;
	}
	else {
		cout << "not find" << endl;
	}

	// ͳ��
	// ����mapֻ�ܲ��벻���ظ�keyֵ��Ԫ�أ�����ͳ�ƽ��ֻ���� 0 �� 1
	// multimap ����ͳ�Ƴ� 0 ��n
	int n = m.count(3);
	cout << "find key =3 times:" << n << endl;

	n = m.count(5);
	cout << "find key =5 times:" << n << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}