#include <iostream>
#include <fstream> // for file I/O
using namespace std;

int main()
{
	ofstream outFile; // create object for output
	outFile.open("20���ڼӷ�.txt"); // associate with a file  ���ļ��Ͷ�����������
	srand((unsigned int)time(NULL));// �����������Ҫ

	int num1 = 0; // ����1
	int num2 = 0; // ����2
	int sum = 0; // ����
	int cnt = 0; // ÿ����ʽ����
	for (int i = 0; i < 400;) {
		num1 = rand() % 10; //����1Ϊ 10���������
		num2 = rand() % 10; //����1Ϊ 10���������
		sum = num1 + num2;
		if (num1 + num2 > 10 && num1 + num2 <= 20) {
			i++;
			// ��Ŀ
			outFile << num1 << " + " << num2 << " = ";

			// ����Ϊ��ʽ��ո�ͻ��и�ʽ
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


	outFile.close(); // done with file  �����ļ�һ��Ҫ��������
	return 0;
}