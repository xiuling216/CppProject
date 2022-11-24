#include <iostream>
#include <string>
#include<map>
using namespace std;

void printMap(const map<int, int>& m) {
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << (*it).first
			<< " value = " << it->second
			<< endl;
	}
	cout << endl;
}

void test() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));
	printMap(m);

	if (m.empty()) {
		cout << " map is empty" << endl;
	}
	else {
		cout << "map is not empty" << endl;
		cout << "map size: " << m.size() << endl;
	}
}

// ½»»»
void test2() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));
	cout << "map size: " << m.size() << endl;
	printMap(m);

	map<int, int> m2;
	m2.insert(pair<int, int>(4, 40));
	m2.insert(pair<int, int>(5, 50));
	m2.insert(pair<int, int>(6, 60));
	cout << "map size: " << m2.size() << endl;
	printMap(m2);

	m.swap(m2);

	cout << "change:" << endl;
	cout << "map size: " << m.size() << endl;
	printMap(m);
	cout << "map size: " << m2.size() << endl;
	printMap(m2);
}

int main() {
	test2();

	system("pause");
	return 0;
}