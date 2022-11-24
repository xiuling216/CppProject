
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>  // ʹ���㷨 for_eachʱ������

using namespace std;

void myPrint(int val) {
	cout << val << endl;
}

void test() {
	// ����vector���� ����
	vector<int> v;

	// ��������
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	// ͨ�����������������е�����
 

	//vector<int>::iterator it = v.begin(); // ��ʼ��������ָ�������еĵ�һ��Ԫ��
	//vector<int>::iterator end = v.end(); // ������������ָ�����������һ��Ԫ�ص���һλ
	// ����1
	//while (it != end) {
	//	cout << *it << endl; // it ����ָ�룬ͨ��*it�����ã����Ԫ��ֵ
	//	it++;
	//}

	// ����2 ���򵥵�forѭ�����
	//for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
	//	cout << *it << endl;
	//}

	// ����3 ʹ���㷨
	// ʹ��STL�ṩ��׼�����㷨 ͷ�ļ� algorithm
	//for_each(v.begin(),v.end(), myPrint);

	// ����4 ����
	// c++11/14������ �µ�forѭ������for(x:range)
	// for (auto item: v) ������auto�Զ������Ƶ�.������������������д��
	for (int item: v) {
		cout << item << endl;
	}
}

int main() {
	test();

	system("pause");
	return 0;
}