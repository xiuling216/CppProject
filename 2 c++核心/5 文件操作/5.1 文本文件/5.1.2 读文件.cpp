
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void test() {
	// 1 ����ͷ�ļ�: #include <fstream>
	// 2 ����������: ifstream ifs;
	ifstream ifs;

	// 3 ���ļ����ж��ļ��Ƿ�򿪳ɹ�: ifs.open("�ļ�·��", �򿪷�ʽ);
	ifs.open("testOutFile.txt", ios::in);
	// �ж��Ƿ��
	if (!ifs.is_open()) {
		cout << "���ļ�ʧ��" << endl;
		return;
	}

	// 4 ������: ���ַ�ʽ��ȡ
	// ��һ�ַ�ʽ
	char buf[1024] = {0};
	while (ifs >> buf) {
		cout << buf << endl;
	}

	// �ڶ���
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf))) {
	//	cout << buf << endl;
	//}

	// ������
	//string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}

	// ������  ���Ƽ������ַ���ȡЧ�ʵ�
	//char c;// ���ַ�һ������ȡ
	//while ((c = ifs.get()) != EOF) //EOF  ָ�����ļ�β��
	//{
	//	cout << c;
	//}

	//5 �ر��ļ�: ifs.close();
	ifs.close();
	
}

int main() {
	test();

	system("pause");
	return 0;
}