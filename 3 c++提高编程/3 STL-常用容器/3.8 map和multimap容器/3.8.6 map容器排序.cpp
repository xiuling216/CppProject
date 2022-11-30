#include <iostream>
#include <string>
#include<map>
using namespace std;
class MyCompare {
public:
	bool operator()(int v1,int v2)const {
		return v1 > v2;
	}
};

void printMap(const map<int, int, MyCompare>& m) {
	for (map<int, int, MyCompare>::const_iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << (*it).first
			<< " value = " << it->second
			<< endl;
	}
	cout << endl;
}

void test() {
	//map Ĭ��������� ��С����
	// ���÷º����ı�������� �Ӵ�С
	map<int, int, MyCompare>m;
	m.insert(make_pair(3, 30));
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(4, 40));
	printMap(m);
}

int main() {
	test();

	system("pause");
	return 0;
}