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

	// �˵�����
	void showMenu();

	// �˳�ϵͳ
	void exitSystem();

	// ��ʼ����
	void startSpeech();

	// ϵͳ��ʼ��
	void initSys();

	// ����ѡ��
	void createSpeaker();

	// ��ǩ
	void  speechDraw();

	// ����
	void speechContest();

	// ��ʾ�������
	void showScore();

	// ��¼����������ļ�
	void saveSpeech();

	// ��ʾ����������
	void showRecord();

	// �������������
	void clearRecord();

	~SpeechManager();

public:
	int m_index; // ����������
	vector<int> v_no_first;// ��һ�ֱ���ѡ�ֱ������
	vector<int> v_no_sec; // �ڶ��ֱ���ѡ�ֱ������
	vector<int> v_no_victory;// ʤ��ǰ����ѡ�ֱ������
	map<int, Speaker> m_speaker;// �������map�����ѡ�ֱ�ż���Ӧѡ��
};
