#include <iostream>
#include <string>
#include<list>
using namespace std;

void test() {
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);

	// l[0];  // ����
	// l.at(0);  // ����
	// ԭ��list������˫��������������������������֧��������ʣ������������Դ洢��

	cout << "first item: " << l.front() << endl;
	cout << "last item: " << l.back() << endl;
	list<int>::iterator it = l.begin();
	it++;// ֧��˫��
	it++++;
	it--;
	//it = it + 1;//��֧��������� ������+1��


}

int main() {
	test();

	system("pause");
	return 0;
}