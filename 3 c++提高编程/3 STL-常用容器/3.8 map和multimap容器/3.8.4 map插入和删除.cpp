#include <iostream>
#include <string>
#include<map>
using namespace std;

//insert(elem); //在容器中插入元素。
//clear(); //清除所有元素
//erase(pos); //删除pos迭代器所指的元素，返回下一个元素的迭代器。
//erase(beg, end); //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
//erase(key); //删除容器中值为key的元素。
void printMap(const map<int, int>& m) {
	for (auto item : m) {
		cout << " key = " << item.first
			<< " value = " << item.second
			<< " " << endl;
	}
	cout << endl;
}

void test() {
	// map容器插入数据
	map<int, int> m;
	
	//第一种
	m.insert(pair<int, int>(1, 10));

	//第二种
	m.insert(make_pair(2, 20));

	//第三种
	m.insert(map<int, int>::value_type(3, 30));

	//第四种
	m[4] = 40;

	// 不建议用[]来插入数据
	// [] 主要用来通过key来访问到value
	//cout << m[4] << endl;

	printMap(m);

	//删除
	m.erase(m.begin());
	printMap(m);

	m.erase(3);//按照key来删除
	m.erase(10);//删除没有key的元素，不会报错
	printMap(m);

	//m.erase(m.begin(), m.end());// 利用迭代器来清空
	m.clear();// 清空容器
	printMap(m);
}

int main() {
	test();

	system("pause");
	return 0;
}