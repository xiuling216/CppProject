#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

class MyCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

void printVector(const vector<int>& v) {
	for (auto item : v) {
		cout << item << " ";
	}
	cout << endl;
}

void test() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	vector<int> v2(v);

	printVector(v);

	// ʹ��sortĬ������
	sort(v.begin(), v.end());
	printVector(v);

	// �Լ�д�º��� ����
	sort(v.begin(), v.end(), MyCompare());
	printVector(v);

	//����functional �� �ڽ���ϵ�º�����greater<int>() ����
	// greater<int>()��ʵ�����Լ������MyCompare()
	cout << "------------v2" << endl;
	printVector(v2);
	sort(v2.begin(), v2.end(), greater<int>());
}

int main() {
	test();

	system("pause");
	return 0;
}