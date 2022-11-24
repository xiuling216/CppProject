
#include <iostream>
#include <string>
#include<list>
using namespace std;

void printList(const list<int>& l) {
	for (auto item : l) {
		cout << item << " ";
	}
	cout << endl;
}
void test() {
	list<int> l1;
	for (int i = 0; i < 5; i++) {
		//push_back(elem);//在容器尾部加入一个元素
		l1.push_back(i);
	}
	//push_front(elem);//在容器开头插入一个元素
	l1.push_front(5);
	printList(l1);// 5 0 1 2 3 4

	//pop_front();//从容器开头移除第一个元素
	l1.pop_front();
	printList(l1);// 0 1 2 3 4

	//pop_back();//删除容器中最后一个元素
	l1.pop_back();
	printList(l1);// 0 1 2 3 

	//insert(pos, elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
	l1.insert(l1.begin(), 100);
	printList(l1);// 100 0 1 2 3

	//insert(pos, n, elem);//在pos位置插入n个elem数据，无返回值。
	l1.insert(l1.end(), 3, 200);
	printList(l1);//100 0 1 2 3 200 200 200 

	//insert(pos, beg, end);//在pos位置插入[beg,end)区间的数据，无返回值。
	l1.insert(l1.begin(), l1.begin(), l1.end());
	printList(l1);//100 0 1 2 3 200 200 200 100 0 1 2 3 200 200 200 
	
	//erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置。
	l1.erase(l1.begin(), ++l1.begin());
	printList(l1);//0 1 2 3 200 200 200 100 0 1 2 3 200 200 200 

	//erase(pos);//删除pos位置的数据，返回下一个数据的位置。
	l1.erase(++l1.begin());
	printList(l1);//0 2 3 200 200 200 100 0 1 2 3 200 200 200 
	
	//remove(elem);//删除容器中所有与elem值匹配的元素。
	l1.remove(200);
	printList(l1);//0 2 3 100 0 1 2 3

	//clear();//移除容器的所有数据
	l1.clear();
	printList(l1);


}

int main() {
	test();

	system("pause");
	return 0;
}