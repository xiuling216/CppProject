#include <iostream>
#include <string>
#include<set>

using namespace std;

void printSet(const set<int>& s) {
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test() {
	set<int> s;

	s.insert(2);
	s.insert(1);
	s.insert(3);
	s.insert(4);
	s.insert(5);

	printSet(s);

	//erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
	set<int>::const_iterator it = s.erase(s.begin());
	cout << *it << endl;// ������һ��Ԫ�صĵ�����  Ԫ��ֵ2
	printSet(s);

	//erase(elem); //ɾ��������ֵΪelem��Ԫ�ء�
	s.erase(2);
	printSet(s);

	set<int> s2(s);

	//erase(beg, end); //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
	s.erase(s.begin(), s.end());
	printSet(s);

	cout << "s2:" << endl;
	printSet(s2);

	//clear(); //�������Ԫ��
	s2.clear();
	cout << "s2 after clear:" << endl;
	printSet(s2);
}

int main() {
	test();

	system("pause");
	return 0;
}