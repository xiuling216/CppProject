
#include <iostream>
#include <string>

using namespace std;
// ���ó����ඨ��������Ʒ���ĸ�����
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
		cout << "1 ���Ȫˮ" << endl;
	}

	virtual void Brew() {
		cout << "2 �����Ҷ�ݲ�" << endl;
	}

	virtual void PourInCup() {
		cout << "3 ���뱭��" << endl;
	}

	virtual void PutSomething() {
		cout << "4 �������" << endl;
	}
};

class MakeCoffe :public AbstracktDrinking {
public:
	virtual void Boil() {
		cout << "1 ��ũ��ɽȪ" << endl;
	}

	virtual void Brew() {
		cout << "2 ���뿧��" << endl;
	}

	virtual void PourInCup() {
		cout << "3 ���뱭��" << endl;
	}

	virtual void PutSomething() {
		cout << "4 ����ţ�̡�����" << endl;
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