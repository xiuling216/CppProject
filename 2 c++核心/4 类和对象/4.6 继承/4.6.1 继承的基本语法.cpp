
#include <iostream>
#include <string>

using namespace std;
// 公共页面
class BasePage {
public:
	void head() {
		cout << "首页、公开课、登录、注册……（公共头部）" << endl;
	}

	void footer() {
		cout << "帮助中心、联系方式……（公共底部）" << endl;
	}

	void left() {
		cout << "JAVA、C++、PYTHON……（公共左侧分类列表）" << endl;
	}
};

class JAVA:public BasePage {
public:
	void content() {
		cout << "JAVA 各类视频" << endl;
	}
};

class CPP:public BasePage {
public:
	void content() {
		cout << "CPP 各类视频" << endl;
	}
};

class PYTHON :public BasePage {
public:
	void content() {
		cout << "PYTHON 各类视频" << endl;
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