
#include <iostream>
#include <string>

using namespace std;
// ����ҳ��
class BasePage {
public:
	void head() {
		cout << "��ҳ�������Ρ���¼��ע�ᡭ��������ͷ����" << endl;
	}

	void footer() {
		cout << "�������ġ���ϵ��ʽ�����������ײ���" << endl;
	}

	void left() {
		cout << "JAVA��C++��PYTHON�����������������б�" << endl;
	}
};

class JAVA:public BasePage {
public:
	void content() {
		cout << "JAVA ������Ƶ" << endl;
	}
};

class CPP:public BasePage {
public:
	void content() {
		cout << "CPP ������Ƶ" << endl;
	}
};

class PYTHON :public BasePage {
public:
	void content() {
		cout << "PYTHON ������Ƶ" << endl;
	}
};

void test() {
	cout << "java--------------------------------------" << endl;
	JAVA j;
	j.head();
	j.footer();
	j.left();
	j.content();

	cout << "CPP--------------------------------------" << endl;
	CPP cpp;
	cpp.head();
	cpp.footer();
	cpp.left();
	cpp.content();

	cout << "PYTHON--------------------------------------" << endl;
	PYTHON PYTHON;
	PYTHON.head();
	PYTHON.footer();
	PYTHON.left();
	PYTHON.content();
}

int main() {
	test();

	system("pause");
	return 0;
}