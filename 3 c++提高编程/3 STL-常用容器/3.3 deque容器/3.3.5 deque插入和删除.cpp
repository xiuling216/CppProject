
#include <iostream>
#include <string>
#include<deque>

using namespace std;

void printDeque(const deque<int>& d) {
	// const_iterator const������
	for (deque<int>::const_iterator it = d.begin(); it < d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test() {
	deque<int> d;
	for (int i = 0; i < 5; i++) {
		d.push_back(i);//������β�����һ������
	}

	printDeque(d);
	
	//push_front(elem); //������ͷ������һ������
	d.push_front(8);
	printDeque(d);
	
	//pop_back(); //ɾ���������һ������
	d.pop_back();
	printDeque(d);
	
	//pop_front(); //ɾ��������һ������
	d.pop_front();
	printDeque(d);

	//// ָ��λ�ò�����
	//insert(pos, elem); //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
	d.insert(d.begin(), 100);
	printDeque(d);
	
	//insert(pos, n, elem); //��posλ�ò���n��elem���ݣ��޷���ֵ��
	d.insert(d.begin() + 1, 2, 200);
	printDeque(d);	

	//insert(pos, beg, end); //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
	deque<int> d2;
	d2.insert(d2.begin(), d.begin(), d.end());
	printDeque(d2);

	//clear(); //�����������������
	d2.clear();
	printDeque(d2);
	
	//erase(beg, end); //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
	d.erase(d.begin(), d.begin() + 1);
	printDeque(d);
	
	//erase(pos); //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
	d.erase(d.begin() + 2);
	printDeque(d);

}

int main() {
	test();

	system("pause");
	return 0;
}