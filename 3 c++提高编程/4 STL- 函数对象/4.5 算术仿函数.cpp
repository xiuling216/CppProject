#include <iostream>
#include <string>
#include<functional>//内建函数对象头文件
using namespace std;

//template<class T> T plus<T> //加法仿函数
//template<class T> T minus<T> //减法仿函数
//template<class T> T multiplies<T> //乘法仿函数
//template<class T> T divides<T> //除法仿函数
//template<class T> T modulus<T> //取模仿函数
//template<class T> T negate<T> //取反仿函数

// 一元运算 
void test() {
	//negate 取反仿函数
	negate<int> n;
	cout << n(10) << endl;// -10
}

// 二元运算 
void test2() {
	// plus 加法
	plus<int> plus;
	cout<<" 1 + 5 =" << plus(1, 5) << endl;

	//minus 减法
	minus<int> minus;
	cout << " 10 - 2 = " << minus(10, 2) << endl;
}

int main() {
	//test();
	test2();

	system("pause");
	return 0;
}