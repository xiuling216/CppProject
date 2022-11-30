#pragma once
#include <iostream>
#include <string>
#include<vector>
#include<map>
#include<deque>
#include<algorithm>
#include<functional>
#include<numeric>
#include"speaker.h"
#include<fstream>
using namespace std;

class SpeechManager {
public:
	SpeechManager();

	// 菜单功能
	void showMenu();

	// 退出系统
	void exitSystem();

	// 开始比赛
	void startSpeech();

	// 系统初始化
	void initSys();

	// 创建选手
	void createSpeaker();

	// 抽签
	void  speechDraw();

	// 比赛
	void speechContest();

	// 显示比赛结果
	void showScore();

	// 记录比赛结果到文件
	void saveSpeech();

	// 显示往届比赛结果
	void showRecord();

	// 情况往届比赛结果
	void clearRecord();

	~SpeechManager();

public:
	int m_index; // 比赛的轮数
	vector<int> v_no_first;// 第一轮比赛选手编号容器
	vector<int> v_no_sec; // 第二轮比赛选手编号容器
	vector<int> v_no_victory;// 胜出前三名选手编号容器
	map<int, Speaker> m_speaker;// 比赛结果map。存放选手编号及对应选手
};
