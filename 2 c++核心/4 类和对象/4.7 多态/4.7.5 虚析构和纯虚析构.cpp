
#include <iostream>
#include <string>

using namespace std;
class Animal {
public:
	// 纯虚函数
	virtual void speak()=0;

	// 构造函数不可以是虚函数
	// virtual Animal() = 0;

	// 先调 父类构造函数，再调 子类构造函数
	Animal() {
		cout << "Animal 构造函数" << endl;
	}

	// 使用父类指针指向子类对象，在释放时，析构函数调用情况：
	// 1 如果父类是 析构函数，则只走 父类析构，不走 子类析构
	// 2 如果父类是 虚析构函数，则先走 子类析构，再走 父类析构
	// 3 如果父类是 纯虚析构函数，同样先走 子类析构，再走 父类析构
	
	// 析构
	/* ~Animal() {
		cout << "Animal 析构函数" << endl;
	}*/

	// 虚析构
	/* virtual ~Animal() {
		cout << "Animal 虚析构函数" << endl;
	}*/

	// 纯虚析构
	// 纯虚析构定义方法：
	// 1 在父类定义纯虚析构： virtual ~类名() = 0;
	// 2 在父类外定义纯虚构函数对应函数实现：类名::~类名(){}
	virtual ~Animal() = 0;

};

Animal:: ~Animal() {
	cout << "Animal 纯虚析构函数" << endl;
}

class Cat :public Animal {
public:
	void speak() {
		cout << "cat 在说话" << endl;
	}

	Cat(string name) {
		cout << "Cat 构造函数" << endl;
		m_name = new string(name);
	}

	~Cat() {
		cout << "Cat 析构函数" << endl;
		if (m_name != NULL) {
			delete m_name;
			m_name = NULL;
		}
	}

	string* m_name;
};

void test() {
	Animal* animal = new Cat("Tom");
	animal->speak();

	delete animal;
}

int main() {
	test();

	system("pause");
	return 0;
}