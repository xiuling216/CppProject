
#include <iostream>
#include <string>
#include<queue>
using namespace std;


void test() {
	//构造函数：
	//	queue<T> que; //queue采用模板类实现，queue对象的默认构造形式
	queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);

	//queue(const queue & que); //拷贝构造函数
	queue<int> q2(q1);

	//赋值操作：
	//	queue& operator=(const queue & que); //重载等号操作符
	queue<int> q3;
	q3 = q2;

	//数据存取：
	//push(elem); //往队尾添加元素
	//pop(); //从队头移除第一个元素
	//back(); //返回最后一个元素
	//front(); //返回第一个元素

	while (!q3.empty()) {
		cout << "q3 的队头元素为：" << q3.front()<<endl;
		cout << "q3 的队尾元素为：" << q3.back()<<endl;
		q3.pop();
	}

	cout << "q3 的长度为：" << q3.size() << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}