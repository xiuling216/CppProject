#include <iostream>
#include <string>
#include<map>
using namespace std;

//insert(elem); //�������в���Ԫ�ء�
//clear(); //�������Ԫ��
//erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
//erase(beg, end); //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
//erase(key); //ɾ��������ֵΪkey��Ԫ�ء�
void printMap(const map<int, int>& m) {
	for (auto item : m) {
		cout << " key = " << item.first
			<< " value = " << item.second
			<< " " << endl;
	}
	cout << endl;
}

void test() {
	// map������������
	map<int, int> m;
	
	//��һ��
	m.insert(pair<int, int>(1, 10));

	//�ڶ���
	m.insert(make_pair(2, 20));

	//������
	m.insert(map<int, int>::value_type(3, 30));

	//������
	m[4] = 40;

	// ��������[]����������
	// [] ��Ҫ����ͨ��key�����ʵ�value
	//cout << m[4] << endl;

	printMap(m);

	//ɾ��
	m.erase(m.begin());
	printMap(m);

	m.erase(3);//����key��ɾ��
	m.erase(10);//ɾ��û��key��Ԫ�أ����ᱨ��
	printMap(m);

	//m.erase(m.begin(), m.end());// ���õ����������
	m.clear();// �������
	printMap(m);
}

int main() {
	test();

	system("pause");
	return 0;
}