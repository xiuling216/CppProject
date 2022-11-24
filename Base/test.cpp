
#include <iostream>
#include <string>
#include<vector>
#include "Tool.h"
using namespace std;



void printStr(const vector<std::string>& res) {
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
        if (i < res.size() - 1)
        {
            cout << " ";
        }
    }
}

void test() {
    string str = "this is a sentence";

    std::vector<std::string> res = split(str, " ");

    reverse(res.begin(), res.end());

    printStr(res);
}

int main() {
	test();

	system("pause");
	return 0;
}