
#include <iostream>
#include <string>
#include<vector>

using namespace std;

void test() {
	vector<int> v;

	// ����Ԥ���ռ�
	v.reserve(100000);
	// cout << v[0] << endl; // �ᱨ��0λ��Ԫ�ز��ɷ��ʣ�δ��ʼ����

	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);

		if (p != &v[0]) {  // ���v���˶�̬�ڴ���չp�Ͳ���ָ��&v[0] 
			p = &v[0];  // ��ָ��pָ��v���׵�ַ
			num++;  // ���v���˶�̬�ڴ���չ,num������һ��
		}
	}

	cout << num << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}