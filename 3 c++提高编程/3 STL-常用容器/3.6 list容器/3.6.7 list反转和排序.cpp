#include <iostream>
#include <string>
#include<list>
#include<algorithm>

using namespace std;
void printList(const list<int>& l) {
	for (auto item : l) {
		cout << item << " ";
	}
	cout << endl;

}
bool myCompare(int v1, int v2) {
	// ���� ���õ�һ���� > �ڶ�����
	return v1 > v2;
}

void test() {
	list<int> l;
	for (int i = 0; i < 5; i++) {
		l.push_back(i);
	}
	printList(l);

	l.reverse();
	printList(l);

	//���в�֧��������ʵ��������������������ñ�׼�㷨
	// ��֧��������ʵ��������������ڲ����ṩ��Ӧ���㷨
	//sort(l.begin(), l.end());
	
	//ʹ�������ڲ��㷨���� sort����Ĭ������
	l.sort();
	cout << "����" << endl;
	printList(l);

	l.sort(myCompare);
	cout << "����" << endl;
	printList(l);
}

int main() {
	test();

	system("pause");
	return 0;
}