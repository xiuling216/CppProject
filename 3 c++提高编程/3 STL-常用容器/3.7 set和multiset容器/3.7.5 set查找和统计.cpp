#include <iostream>
#include <string>
#include<set>
using namespace std;

void test() {
	set<int> s;
	s.insert(2);
	s.insert(2);
	s.insert(1);
	s.insert(3);
	s.insert(4);
	s.insert(5);

	//find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
	set<int>::iterator pos = s.find(2);
	if (pos != s.end()) {
		cout << "finded:" << *pos << endl;
	}
	else {
		cout << "not find" << endl;
	}

	//count(key); //ͳ��key��Ԫ�ظ���
	int n = s.count(2);
	cout << "s��2�ĸ���:" << n << endl;
	n = s.count(9);
	cout << "s��9�ĸ���:" << n << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}