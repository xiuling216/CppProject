
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	int m_max_age;
};

// 利用虚继承 来解决 菱形继承 两份数据的问题
// 在继承的基类之前加上 关键字 virtual 变为虚基类
// Aniaml 称为虚基类
class Sheep:virtual public Animal {

};

class Tuo :virtual public Animal {

};

class SheepTuo :public Sheep,public Tuo {

};

void test() {
	// 羊驼有两份最大年龄数据，造成资源浪费。
	// 这个时候要使用虚基类来解决
	SheepTuo sheep_tuo2;
	sheep_tuo2.m_max_age = 60;
	// 可以直接访问羊驼的最大年龄，也可以通过作用域访问到羊和骆驼的最大年龄，三个数据打印都是一样的，只有一份数据。
	cout << "sheep_tuo2.m_max_age = " << sheep_tuo2.m_max_age << endl;
	cout << "sheep_tuo2.Sheep::m_max_age = " << sheep_tuo2.Sheep::m_max_age << endl;
	cout << "sheep_tuo2.Tuo::m_max_age = " << sheep_tuo2.Tuo::m_max_age << endl;

	// 占用内存 12
	// 可以看出利用虚基类占用内存会增大
	cout << "sizeof(sheep_tuo2) = " << sizeof(sheep_tuo2) << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}