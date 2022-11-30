#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
class Transform {
public:
	int operator()(int val) {
		return val + 100;
	}
};

class MyPrint{
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

void test() {
	vector<int> v;
	for (int i = 0; i < 5; i++) {
		v.push_back(i);
	}

	vector<int> v2;//Ŀ������
	v2.resize(v.size());// ����Ҫ��Ŀ��������ǰ���ٿռ䣬���ٰ��������ռ�Ĵ�С���ɡ�
	transform(v.begin(), v.end(), v2.begin(), Transform());

	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}