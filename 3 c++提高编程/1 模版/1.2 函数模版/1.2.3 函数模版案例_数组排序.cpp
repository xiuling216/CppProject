
#include <iostream>
#include <string>

using namespace std;

// ��������
template<class T>
void mySwap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

// ѡ�������㷨
template<class T>
void mySort(T arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		// ѡ��i�±��Ԫ��ֵΪ��ǰ����������ֵ�±�
		int max = i;
		for (int k = i + 1; k < len; k++) {
			// ���϶������ֵ �� ��������ֵ С��˵��k�±��Ԫ�ز������ֵ
			if (arr[max] < arr[k]) 
			{
				max = k;  // �������ֵ�±�
			}
		}
		if (max != i) {
			mySwap(arr[max],arr[i]);  // ����max��iԪ��ֵ
		}
	}
}

// ��ӡ����
template<class T>
void printArr(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

// ����char����
void test() {
	char arr[] = { 'd','e','a','b','c' };
	int len = sizeof(arr) / sizeof(char);
	mySort(arr, len);
	printArr(arr, len);
}

// ����int����
void testInt() {
	int arr[] = { 4,2,3,1,6,5,7 };
	int len = sizeof(arr) / sizeof(int);
	mySort(arr, len);
	printArr(arr, len);
}

int main() {
	test();
	testInt();

	system("pause");
	return 0;
}