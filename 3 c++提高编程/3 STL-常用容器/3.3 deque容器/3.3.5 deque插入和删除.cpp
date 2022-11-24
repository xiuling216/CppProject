
#include <iostream>
#include <string>
#include<deque>

using namespace std;

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
		d.push_back(i);//在容器尾部添加一个数据
	}

	printDeque(d);
	
	//push_front(elem); //在容器头部插入一个数据
	d.push_front(8);
	printDeque(d);
	
	//pop_back(); //删除容器最后一个数据
	d.pop_back();
	printDeque(d);
	
	//pop_front(); //删除容器第一个数据
	d.pop_front();
	printDeque(d);

	//// 指定位置操作：
	//insert(pos, elem); //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
	d.insert(d.begin(), 100);
	printDeque(d);
	
	//insert(pos, n, elem); //在pos位置插入n个elem数据，无返回值。
	d.insert(d.begin() + 1, 2, 200);
	printDeque(d);	

	//insert(pos, beg, end); //在pos位置插入[beg,end)区间的数据，无返回值。
	deque<int> d2;
	d2.insert(d2.begin(), d.begin(), d.end());
	printDeque(d2);

	//clear(); //清空容器的所有数据
	d2.clear();
	printDeque(d2);
	
	//erase(beg, end); //删除[beg,end)区间的数据，返回下一个数据的位置。
	d.erase(d.begin(), d.begin() + 1);
	printDeque(d);
	
	//erase(pos); //删除pos位置的数据，返回下一个数据的位置
	d.erase(d.begin() + 2);
	printDeque(d);

}

int main() {
	test();

	system("pause");
	return 0;
}