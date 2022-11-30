
#include <iostream>
#include <string>
#include<list>
using namespace std;

void printList(const list<int>& l) {
	for (auto item : l) {
		cout << item << " ";
	}
	cout << endl;
}
void test() {
	list<int> l1;
	for (int i = 0; i < 5; i++) {
		//push_back(elem);//������β������һ��Ԫ��
		l1.push_back(i);
	}
	//push_front(elem);//��������ͷ����һ��Ԫ��
	l1.push_front(5);
	printList(l1);// 5 0 1 2 3 4

	//pop_front();//��������ͷ�Ƴ���һ��Ԫ��
	l1.pop_front();
	printList(l1);// 0 1 2 3 4

	//pop_back();//ɾ�����������һ��Ԫ��
	l1.pop_back();
	printList(l1);// 0 1 2 3 

	//insert(pos, elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
	l1.insert(l1.begin(), 100);
	printList(l1);// 100 0 1 2 3

	//insert(pos, n, elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
	l1.insert(l1.end(), 3, 200);
	printList(l1);//100 0 1 2 3 200 200 200 

	//insert(pos, beg, end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
	l1.insert(l1.begin(), l1.begin(), l1.end());
	printList(l1);//100 0 1 2 3 200 200 200 100 0 1 2 3 200 200 200 
	
	//erase(beg, end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
	l1.erase(l1.begin(), ++l1.begin());
	printList(l1);//0 1 2 3 200 200 200 100 0 1 2 3 200 200 200 

	//erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
	l1.erase(++l1.begin());
	printList(l1);//0 2 3 200 200 200 100 0 1 2 3 200 200 200 
	
	//remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
	l1.remove(200);
	printList(l1);//0 2 3 100 0 1 2 3

	//clear();//�Ƴ���������������
	l1.clear();
	printList(l1);


}

int main() {
	test();

	system("pause");
	return 0;
}