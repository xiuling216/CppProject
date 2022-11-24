
#include <iostream>
#include <string>

using namespace std;

// 交换函数
template<class T>
void mySwap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

// 选择排序算法
template<class T>
void mySort(T arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		// 选定i下标的元素值为当前轮排序的最大值下标
		int max = i;
		for (int k = i + 1; k < len; k++) {
			// 若认定的最大值 比 遍历出的值 小，说明k下标的元素才是最大值
			if (arr[max] < arr[k]) 
			{
				max = k;  // 更新最大值下标
			}
		}
		if (max != i) {
			mySwap(arr[max],arr[i]);  // 交换max和i元素值
		}
	}
}

// 打印数组
template<class T>
void printArr(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

// 测试char数组
void test() {
	char arr[] = { 'd','e','a','b','c' };
	int len = sizeof(arr) / sizeof(char);
	mySort(arr, len);
	printArr(arr, len);
}

// 测试int数组
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