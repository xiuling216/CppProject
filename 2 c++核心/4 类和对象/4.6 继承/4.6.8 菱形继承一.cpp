
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	int m_max_age;
};

class Sheep:public Animal {

};

class Tuo :public Animal {

};

class SheepTuo :public Sheep,public Tuo {

};

void test() {
	SheepTuo sheep_tuo;
	// sheep_tuo.m_max_age = 50; //  无法直接访问，会报错
	sheep_tuo.Sheep::m_max_age = 50;
	sheep_tuo.Tuo::m_max_age = 60;
	// 菱形继承，当两个父类拥有同名成员，需要加作用域来区分才能访问
	cout << "sheep_tuo.Sheep::m_max_age = "<< sheep_tuo.Sheep::m_max_age << endl;
	cout << "sheep_tuo.Tuo::m_max_age = " << sheep_tuo.Tuo::m_max_age << endl;
	// 占用内存 8
	cout << "sizeof(sheep_tuo) = " << sizeof(sheep_tuo) << endl;

	// 但是上述代码产生了问题，羊驼有两份最大年龄数据，造成资源浪费。
	// 这个时候要使用虚基类来解决
	// 4.6.8 菱形继承二来解决
}

int main() {
	test();

	system("pause");
	return 0;
}