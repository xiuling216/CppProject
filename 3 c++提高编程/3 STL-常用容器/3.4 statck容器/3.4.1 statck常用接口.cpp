
#include <iostream>
#include <string>
#include<stack>

using namespace std;

// ջ���ýӿ�
void test() {
	//stack<T> stk; //stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
	stack<int> s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);

	//stack(const stack& stk); //�������캯��
	stack<int> s2(s1);

	//��ֵ������
	//stack& operator=(const stack& stk); //���صȺŲ�����
	stack<int> s3;
	s3 = s1;

	//���ݴ�ȡ��
	//push(elem); //��ջ�����Ԫ��
	//pop(); //��ջ���Ƴ���һ��Ԫ��
	//top(); //����ջ��Ԫ��
	//��С������
	//empty(); //�ж϶�ջ�Ƿ�Ϊ��
	//size(); //����ջ�Ĵ�С
	while (!s1.empty()) {
		cout << "s1 ��ջ��Ԫ��Ϊ��" << s1.top() << endl;
		s1.pop();
	}
	cout << "s1 ��sizeΪ" << s1.size() << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}