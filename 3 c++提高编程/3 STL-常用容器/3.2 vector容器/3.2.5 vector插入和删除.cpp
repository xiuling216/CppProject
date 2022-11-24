
#include <iostream>
#include <string>
#include<vector>

using namespace std;

//push_back(ele);									//尾部插入元素ele
//pop_back();										//删除最后一个元素
//insert(const_iterator pos, ele);				//在迭代器指向位置pos插入元素ele
//insert(const_iterator pos, int count, ele);		//在迭代器指向位置pos插入count个元素ele
//erase(const_iterator pos);						 //删除迭代器指向pos位置的元素
//erase(const_iterator start, const_iterator end); //删除迭代器从start到end之间的元素
//clear();										 //删除容器中所有元素

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

	// 尾删
	v1.pop_back();
	printVector(v1);

	//在迭代器指向位置pos插入元素ele
	v1.insert(v1.begin() + 1, 10);
	printVector(v1);

	//insert(const_iterator pos, int count, ele);		
	//在迭代器指向位置pos插入count个元素ele
	v1.insert(v1.begin() + 1,3,10);
	printVector(v1);

	//erase(const_iterator pos);						 
	//删除迭代器指向pos位置的元素
	v1.erase(v1.begin() + 1);
	printVector(v1);

	//erase(const_iterator start, const_iterator end);
	//删除迭代器从[start,end)之间的元素,左闭右开
	v1.erase(v1.begin(),v1.begin()+1);
	printVector(v1);

	//clear();//删除容器中所有元素
	//v1.erase(v1.begin(), v1.end()); 也是清空数据
	v1.clear();
	printVector(v1);
}

int main() {
	test();

	system("pause");
	return 0;
}