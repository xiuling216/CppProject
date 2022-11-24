
#include <iostream>
#include <string>

using namespace std;
// 利用抽象类定义制作饮品的四个步骤
class AbstracktDrinking {
public:
	virtual void Boil() = 0;

	virtual void Brew() = 0;

	virtual void PourInCup() = 0;

	virtual void PutSomething() = 0;

	void makeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class MakeTea :public AbstracktDrinking {
public:
	virtual void Boil() {
		cout << "1 煮矿泉水" << endl;
	}

	virtual void Brew() {
		cout << "2 放入茶叶泡茶" << endl;
	}

	virtual void PourInCup() {
		cout << "3 倒入杯中" << endl;
	}

	virtual void PutSomething() {
		cout << "4 放入枸杞" << endl;
	}
};

class MakeCoffe :public AbstracktDrinking {
public:
	virtual void Boil() {
		cout << "1 煮农夫山泉" << endl;
	}

	virtual void Brew() {
		cout << "2 放入咖啡" << endl;
	}

	virtual void PourInCup() {
		cout << "3 倒入杯中" << endl;
	}

	virtual void PutSomething() {
		cout << "4 放入牛奶、白糖" << endl;
	}
};

void doWork(AbstracktDrinking* drink) {
	drink->makeDrink();
}

void test() {
	doWork(new MakeTea);

	cout << "======================" << endl;

	doWork(new MakeCoffe);
}

int main() {
	test();

	system("pause");
	return 0;
}