#include <iostream>
#include <string>
#include "speechManager.cpp"
#include<ctime>


int main() {
	srand((unsigned int)time(NULL));
	SpeechManager sm;

	int choice = 0;//用户输入

	while (true) {
		sm.showMenu();

		cout << "请输入你的选择：" << endl;
		cin >> choice;

		switch (choice) {
		case 1://开始比赛
			sm.startSpeech();
			break;
		case 2://查看往界记录
			sm.showRecord();
			break;
		case 3://清空比赛记录
			sm.clearRecord();
			break;
		case 0://退出系统
			sm.exitSystem();
			break;
		default:
			system("cls");//清屏
			break;
		}
	}

	system("pause");
	return 0;
}