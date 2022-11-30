#include <iostream>
#include <string>
#include<set>
using namespace std;

//size(); //����������Ԫ�ص���Ŀ
//empty(); //�ж������Ƿ�Ϊ��
//swap(st); //����������������
void printSet(const set<int>& s) {
	for (auto item : s) {
		cout << item << " ";
	}
	cout << endl;
}

void test() {
	set<int> s;
	s.insert(2);
	s.insert(1);
	s.insert(1);
	s.insert(3);
	printSet(s);

	if (s.empty()) {
		cout << "s is empty" << endl;
	}
	else {
		cout << "s is not empty" << endl;
		cout << "s size:" << s.size() << endl;
	}

	set<int> s2;
	s2.insert(10);
	s2.insert(30);
	s2.insert(20);
	printSet(s2);

	cout << "change s and s2:" << endl;
	s.swap(s2);
	printSet(s);
	printSet(s2);
}


int main() {
	test();

	system("pause");
	return 0;
}