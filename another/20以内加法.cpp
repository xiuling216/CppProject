#include <iostream>
#include <fstream> // for file I/O
using namespace std;

int main()
{
	ofstream outFile; // create object for output
	outFile.open("20以内加法.txt"); // associate with a file  将文件和对象链接起来
	srand((unsigned int)time(NULL));// 产生随机数需要

	int num1 = 0; // 数字1
	int num2 = 0; // 数字2
	int sum = 0; // 总数
	int cnt = 0; // 每行算式个数
	for (int i = 0; i < 400;) {
		num1 = rand() % 10; //数字1为 10以内随机数
		num2 = rand() % 10; //数字1为 10以内随机数
		sum = num1 + num2;
		if (num1 + num2 > 10 && num1 + num2 <= 20) {
			i++;
			// 题目
			outFile << num1 << " + " << num2 << " = ";

			// 以下为算式间空格和换行格式
			cnt++;
			if (cnt <= 5) {
				outFile << "\t";
			}
			else {
				cnt = 0;
				outFile << endl;
			}

		}
	}


	outFile.close(); // done with file  用完文件一定要把它关上
	return 0;
}