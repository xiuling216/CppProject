
#include <iostream>
#include <string>
#include<list>
using namespace std;

//size();				//返回容器中元素的个数
//empty();			//判断容器是否为空
//resize(num);		//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//​					//如果容器变短，则末尾超出容器长度的元素被删除。
//resize(num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//					//如果容器变短，则末尾超出容器长度的元素被删除。

void printList(const list<int>& l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test() {
	//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
	list<int> l1;
	for (int i = 0; i < 5; i++) {
		l1.push_back(i);
	}
	printList(l1);
	
	if (l1.empty()) {
		cout << "l1 为空" << endl;
	}
	else {
		cout << "l1 不为空" << endl;
		cout << "l1 size(): " << l1.size() << endl;
	}

	l1.resize(10);
	printList(l1);

	l1.resize(20,6);
	printList(l1);

	l1.resize(3);
	printList(l1);
}

int main() {
	test();

	system("pause");
	return 0;
}