
#include <iostream>
#include <string>
#include<queue>
using namespace std;


void test() {
	//���캯����
	//	queue<T> que; //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
	queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);

	//queue(const queue & que); //�������캯��
	queue<int> q2(q1);

	//��ֵ������
	//	queue& operator=(const queue & que); //���صȺŲ�����
	queue<int> q3;
	q3 = q2;

	//���ݴ�ȡ��
	//push(elem); //����β���Ԫ��
	//pop(); //�Ӷ�ͷ�Ƴ���һ��Ԫ��
	//back(); //�������һ��Ԫ��
	//front(); //���ص�һ��Ԫ��

	while (!q3.empty()) {
		cout << "q3 �Ķ�ͷԪ��Ϊ��" << q3.front()<<endl;
		cout << "q3 �Ķ�βԪ��Ϊ��" << q3.back()<<endl;
		q3.pop();
	}

	cout << "q3 �ĳ���Ϊ��" << q3.size() << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}