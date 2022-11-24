
#include <iostream>
#include <string>

using namespace std;
class Person {
public:
	Person(string name, int age) {
		m_name = name;
		m_age = age;
	}

	// жиди == КХ
	bool operator==(Person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	// жиди != КХ
	bool operator!=(Person& p) {
		if (this->m_name != p.m_name || this->m_age != p.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

public:
	string m_name;
	int m_age;
};

void test() {
	Person p1("p1",10);
	Person p2("p1", 10);
	Person p3("p3", 10);

	if (p1 == p2) {
		cout << "p1==p2" << endl;
	}
	else {
		cout << "p1!=p2" << endl;
	}
	
	if(p1!=p3)
	{
		cout << "p1!=p3" << endl;
	}
	else {
		cout << "p1==p3" << endl;
	}
}

int main() {
	test();

	system("pause");
	return 0;
}