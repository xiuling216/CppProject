
#include <iostream>
#include <string>
#include<vector>

using namespace std;

//empty();				//判断容器是否为空
//capacity();			//容器的容量
//size();				//返回容器中元素的个数
//resize(int num);		//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//​						//如果容器变短，则末尾超出容器长度的元素被删除。
//resize(int num, elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//​						//如果容器变短，则末尾超出容器长度的元素被删除

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

	if (v1.empty()) {
		cout << "v1 为空" << endl;
	}
	else {
		cout << "v1 不为空" << endl;
		cout <<"capacity:"<< v1.capacity() << endl;
		cout << "size:" << v1.size() << endl;
	}

	// 手动重新指定容器长度变大为10
	v1.resize(10);
	cout << "v1 手动重新指定容器长度变大" << endl;
	cout << "capacity:" << v1.capacity() << endl; // 容量会扩展成10
	cout << "size:" << v1.size() << endl; // 元素个数会变为10
	printVector(v1); // 以默认值0填充

	// 手动重新指定容器长度变小为3
	v1.resize(3);
	cout << "v1 手动重新指定容器长度变小" << endl;
	cout << "capacity:" << v1.capacity() << endl; // ***容量不变 10
	cout << "size:" << v1.size() << endl; // 元素个数会变少 3
	printVector(v1); // 如果容器变短，则末尾超出容器长度的元素被删除。

	// resize(int num, elem);利用重载版本，指定默认值填充方式，
	v1.resize(5,10);
	cout << "v1 指定默认值填充方式" << endl;
	cout << "capacity:" << v1.capacity() << endl; // ***容量不变 10
	cout << "size:" << v1.size() << endl; // 元素个数等于指定个数5
	printVector(v1); //如果重新指定的比原来的长，用默认值填充10


}

int main() {
	test();

	system("pause");
	return 0;
}