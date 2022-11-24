#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
#include<ctime>

using namespace std;

// random_shuffle 洗牌 将制定范围内元素打乱次序

void print(int val) {
	cout << val << " ";
}

void test() {
	// 随机数种子，让random_shuffle真实的随机起来
	srand((unsigned int)time(NULL));

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), print);
	cout << endl;

	// 洗牌打乱顺序
	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(), print);
}

int main() {
	test();

	system("pause");
	return 0;
}