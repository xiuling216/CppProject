
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>  // 使用算法 for_each时需引入

using namespace std;

void myPrint(int val) {
	cout << val << endl;
}

void test() {
	// 创建vector容器 数组
	vector<int> v;

	// 插入数据
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	// 通过迭代器访问容器中的数据
 

	//vector<int>::iterator it = v.begin(); // 起始迭代器，指向容器中的第一个元素
	//vector<int>::iterator end = v.end(); // 结束迭代器，指向容器中最后一个元素的下一位
	// 遍历1
	//while (it != end) {
	//	cout << *it << endl; // it 看成指针，通过*it解引用，输出元素值
	//	it++;
	//}

	// 遍历2 更简单的for循环输出
	//for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
	//	cout << *it << endl;
	//}

	// 遍历3 使用算法
	// 使用STL提供标准遍历算法 头文件 algorithm
	//for_each(v.begin(),v.end(), myPrint);

	// 遍历4 更简单
	// c++11/14新特性 新的for循环——for(x:range)
	// for (auto item: v) 可以用auto自动类型推导.若给定数据类型下面写法
	for (int item: v) {
		cout << item << endl;
	}
}

int main() {
	test();

	system("pause");
	return 0;
}