
#include <iostream>
#include <string>
#include<deque>
using namespace std;

//deque.empty();			//判断容器是否为空
//deque.size();			//返回容器中元素的个数
//deque.resize(num);		//重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
//​						//如果容器变短，则末尾超出容器长度的元素被删除。
//deque.resize(num, elem); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
//​						//如果容器变短，则末尾超出容器长度的元素被删除。
void printDeque(const deque<int>& d) {
	// const_iterator const迭代器
	for (deque<int>::const_iterator it = d.begin(); it < d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test() {
	deque<int> d;
	for (int i = 0; i < 5; i++) {
		d.push_back(i);
	}
	printDeque(d);

	if (d.empty()) {
		cout << "d 为空" << endl;
	}
	else {
		cout << "d 不为空" << endl;
		cout << "d中元素个数为：" << d.size() << endl;
	}

	//deque.resize(num);//重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
	//如果容器变短，则末尾超出容器长度的元素被删除。
	d.resize(10);
	printDeque(d);

	d.resize(8);
	printDeque(d);

	//deque.resize(num, elem); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
    //如果容器变短，则末尾超出容器长度的元素被删除。
	d.resize(10, 3);
	printDeque(d);

	d.resize(5, 3);
	printDeque(d);
}

int main() {
	test();

	system("pause");
	return 0;
}