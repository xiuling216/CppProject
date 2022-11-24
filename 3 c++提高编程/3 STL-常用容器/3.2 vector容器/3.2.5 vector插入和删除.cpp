
#include <iostream>
#include <string>
#include<vector>

using namespace std;

//push_back(ele);									//β������Ԫ��ele
//pop_back();										//ɾ�����һ��Ԫ��
//insert(const_iterator pos, ele);				//�ڵ�����ָ��λ��pos����Ԫ��ele
//insert(const_iterator pos, int count, ele);		//�ڵ�����ָ��λ��pos����count��Ԫ��ele
//erase(const_iterator pos);						 //ɾ��������ָ��posλ�õ�Ԫ��
//erase(const_iterator start, const_iterator end); //ɾ����������start��end֮���Ԫ��
//clear();										 //ɾ������������Ԫ��

void printVector(vector<int> v) {
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test() {
	vector<int> v1;
	for (int i = 1; i < 6; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	// βɾ
	v1.pop_back();
	printVector(v1);

	//�ڵ�����ָ��λ��pos����Ԫ��ele
	v1.insert(v1.begin() + 1, 10);
	printVector(v1);

	//insert(const_iterator pos, int count, ele);		
	//�ڵ�����ָ��λ��pos����count��Ԫ��ele
	v1.insert(v1.begin() + 1,3,10);
	printVector(v1);

	//erase(const_iterator pos);						 
	//ɾ��������ָ��posλ�õ�Ԫ��
	v1.erase(v1.begin() + 1);
	printVector(v1);

	//erase(const_iterator start, const_iterator end);
	//ɾ����������[start,end)֮���Ԫ��,����ҿ�
	v1.erase(v1.begin(),v1.begin()+1);
	printVector(v1);

	//clear();//ɾ������������Ԫ��
	//v1.erase(v1.begin(), v1.end()); Ҳ���������
	v1.clear();
	printVector(v1);
}

int main() {
	test();

	system("pause");
	return 0;
}