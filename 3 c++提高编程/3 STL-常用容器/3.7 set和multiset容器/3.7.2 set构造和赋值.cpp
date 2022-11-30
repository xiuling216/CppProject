#include <iostream>
#include <string>
#include<set>
using namespace std;
void printSet(const set<int>& s) {
	for (auto item : s) {
		cout << item << " ";
	}
	cout << endl;
}

void test() {
	set<int> s;
	// set��������ֻ��insert��ʽ
	s.insert(2);
	s.insert(4);
	s.insert(2);
	s.insert(3);
	s.insert(1);

	// ���ܲ����ظ���ֵ�������ظ����룬Ҳֻ����һ������
	// Ԫ���ڲ���ʱ�Զ�������Ĭ�ϰ�������
	printSet(s);

	// �������캯��
	set<int> s2(s);
	printSet(s2);

	//��ֵ
	set<int> s3;
	s3 = s2;
	printSet(s3);


}

int main() {
	test();

	system("pause");
	return 0;
}