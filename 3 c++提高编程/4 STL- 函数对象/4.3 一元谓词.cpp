#include <iostream>
#include <string>
#include<vector>
using namespace std;

// һԪν��
class GreaterFive {
public:
	bool operator()(int val)const {
		return val > 5;
	}
};

void test() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	// ���Ҵ���5������
	// GreaterFive() ��������������
	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
	if (pos == v.end()) {
		cout << "δ�ҵ�����5������" << endl;
	}
	else {
		cout << "δ�ҵ�����5������:" << *pos << endl;
	}
}

int main() {
	test();

	system("pause");
	return 0;
}