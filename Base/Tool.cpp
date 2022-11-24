
#include "Tool.h"

int max(int a, int b) {
	return a > b ? a : b;
}

//�ַ����ָ��
std::vector<std::string> split(std::string str, std::string pattern)
{
	std::string::size_type pos;
	std::vector<std::string> result;
	str += pattern;
	int size_str = str.size();
	int size_pattern = pattern.size();
	for (int i = 0; i < size_str; i++)
	{
		pos = str.find(pattern, i);
		if (pos != str.npos) {  // pos����-1ʱû�ҵ�
			string s = str.substr(i, pos - i);
			result.push_back(s);
			i = pos + size_pattern - 1;
		}
	}
	return result;
}

// ����С��ĳ��������������
// �ڵ���֮ǰҪ�����������������Ҫ��main�������������ӣ�srand((unsigned int)time(NULL));
int random(int max) {
	return rand() % max;
}

void pointLearn() {
	// 1 ָ�붨��
	int a = 10;
	// ����ָ��
	int* p;
	// ��ָ��ָ��a�ĵ�ַ
	p = &a;
	cout << "a�ĵ�ַ��"<<&a<<endl;
	cout << "ָ��p��ֵ��" << p << endl;

	// 2 ָ��ʹ��
	*p = 2000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
}


void bubbleSort(int* arr, int len) {
	// ��Ҫ��ס����forѭ����ѭ���ķ�Χ
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void printArr(int* p, int len) {
	for (int i = 0; i < 10; i++) {
		cout << *p << endl;
		p++;
	}
}