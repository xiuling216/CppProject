
#include <iostream>
#include <string>

using namespace std;
template<class T>
class Base {
	T b;
};

// 错误写法
// 子类继承父类是类模版时，子类在声明时，需要指定父类中T的类型
//class Son :public Base {
//};

// 正确写法如下，指定T为int
class Son :public Base<int> {
};

void test1() {
	Son s;
}

// 如果想灵活指定父类中T的数据类型，子类也需变为模版
// T 是base中数据类型，Y是Son2中数据类型
template<class T,class Y>
class Son2 :public Base<T> {
	Y y;
};

void test2() {
	Son2<int, string> s;
}

int main() {
	test1();
	test2();

	system("pause");
	return 0;
}