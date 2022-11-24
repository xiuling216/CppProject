
#include <iostream>
#include <string>
#include<stack>

using namespace std;

// 栈常用接口
void test() {
	//stack<T> stk; //stack采用模板类实现， stack对象的默认构造形式
	stack<int> s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);

	//stack(const stack& stk); //拷贝构造函数
	stack<int> s2(s1);

	//赋值操作：
	//stack& operator=(const stack& stk); //重载等号操作符
	stack<int> s3;
	s3 = s1;

	//数据存取：
	//push(elem); //向栈顶添加元素
	//pop(); //从栈顶移除第一个元素
	//top(); //返回栈顶元素
	//大小操作：
	//empty(); //判断堆栈是否为空
	//size(); //返回栈的大小
	while (!s1.empty()) {
		cout << "s1 的栈顶元素为：" << s1.top() << endl;
		s1.pop();
	}
	cout << "s1 的size为" << s1.size() << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}