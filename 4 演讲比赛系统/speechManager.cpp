#include "speechManager.h"

SpeechManager::SpeechManager() {

}

void SpeechManager::showMenu() {
	cout << "********************************************" << endl;
	cout << "*************  欢迎参加演讲比赛 ************" << endl;
	cout << "*************  1.开始演讲比赛  *************" << endl;
	cout << "*************  2.查看往届记录  *************" << endl;
	cout << "*************  3.清空比赛记录  *************" << endl;
	cout << "*************  0.退出比赛程序  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

//开始比赛  比赛整个流程控制函数
void SpeechManager::startSpeech() {
	// 系统初始化
	initSys();

	// 比赛流程
	for (m_index = 1; m_index <= 2; m_index++) {
	// 1 抽签
		speechDraw();
	
	// 2 比赛
		speechContest();

	// 3 显示比赛结果
		showScore();
	}

	// 4 记录比赛结果到文件
	saveSpeech();
}

// 显示往届比赛结果
void SpeechManager::showRecord() {
	ifstream ifs;
	ifs.open("speech.csv", ios::in);

	if (!ifs.is_open()) {
		cout << "往届记录文件不存在" << endl;
		ifs.close();
		return;
	}

	// 文件被清空
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		cout << "没有往届记录" << endl;
		ifs.close();
		return;
	}

	ifs.putback(ch);
	string data="";

	int index = 0;
	while (ifs >> data) {
		index++;
		int pos = -1;
		int start = 0;
		vector<string> v_tmp;//存放每届比赛结果
		while (true) {
			pos = data.find(",", start);
			if (pos == -1) {
				break;
			}
			string str = data.substr(start, pos - start);
			v_tmp.push_back(str);
			start = pos + 1;
		}

		cout << "-------------第" << index << "届------------" << endl;
		cout << " 冠军编号：" << v_tmp[0] << " 姓名：" << v_tmp[1] << " 分数：" << v_tmp[2] << endl;
		cout << " 季军编号：" << v_tmp[3] << " 姓名：" << v_tmp[4] << " 分数：" << v_tmp[5] << endl;
		cout << " 亚军编号：" << v_tmp[6] << " 姓名：" << v_tmp[7] << " 分数：" << v_tmp[8] << endl;

	}
	
	system("pause");
	system("cls");
}

// 情况往届比赛结果
void SpeechManager::clearRecord() {
	cout << "确定清空往届记录？" << endl;
	cout << "1、是" << endl;
	cout << "2、否" << endl;

	int in;
	cin >> in;
	if (in == 1) {
		ifstream ifs;
		ifs.open("speech.csv", ios::out | ios::trunc);
		cout << "清空成功！" << endl;
	}
	
	system("pause");
	system("cls");

}

// 创建选手
void SpeechManager::createSpeaker() {
	string str = "ABCDEFGHIJKL";
	for (int i = 0; i < 12; i++) {
		Speaker sp;
		string name = "选手";
		name+= str[i];
		sp.m_name = name;
		sp.m_score[0] = 0;
		sp.m_score[1] = 0;
		int no = 10000 + i;// 选手编号
		v_no_first.push_back(no);// 赋值第一轮选手编号队列
		m_speaker.insert(make_pair(no, sp));// 赋值比赛结果map
	}
}

// 抽签
void  SpeechManager::speechDraw() {
	cout << "--------第" << m_index << "轮比赛开始抽签————" << endl;
	cout << "抽签后比赛顺序如下：" << endl;
	
	if (m_index == 1) {
		random_shuffle(v_no_first.begin(), v_no_first.end());//洗牌打乱
		for (auto item : v_no_first) {
			cout << item << " ";
		}
	}
	else {
		random_shuffle(v_no_sec.begin(), v_no_sec.end());//洗牌打乱
		for (auto item : v_no_sec) {
			cout << item << " ";
		}
	}
	cout << endl;
	system("pause");
}

// 比赛
void SpeechManager::speechContest() {
	cout << "--------第" << m_index << "轮比赛开始----------" << endl;
	vector<int> v_src;
	if (m_index == 1) {
		v_src = v_no_first;
	}
	else {
		v_src = v_no_sec;
	}

	map<double, int, greater<double>>  group_score;// 临时存放该轮比赛分数及选手编号

	int num = 0;// 比赛人数
	for (vector<int>::iterator it = v_src.begin(); it != v_src.end(); it++) {
		num++;

		// 10位评委打分
		deque<double> d_score;// 选手分数队列容器
		for (int i = 0; i < 10; i++) {
			double score = (rand() % 401 + 600)/10.0f;//60-100分
			//cout << score << " ";
			d_score.push_back(score);
		}
		//cout << endl;

		// 去掉最高分最低分
		sort(d_score.begin(), d_score.end(), greater<double>());
		d_score.pop_front();
		d_score.pop_back();

		// 求平均分放到比赛结果容器中
		double sum = accumulate(d_score.begin(), d_score.end(), 0);
		double avg = sum / (double)d_score.size();
		m_speaker[*it].m_score[m_index - 1] = avg;// 将该轮比赛结果放入比赛结果容器
		group_score.insert(make_pair(avg, *it));// 分数和编号放入临时容器

		if (num % 6 == 0) {
			// 显示该轮比赛情况
			cout << "第" << num / 6 << "组比赛结果如下：" << endl;
			for (map<double, int, greater<double>>::iterator p = group_score.begin();
				p != group_score.end(); p++) {
				cout << "编号：" << (*p).second
					<< " 姓名：" << m_speaker[p->second].m_name
					<< " 分数：" << m_speaker[p->second].m_score[m_index - 1] << endl;
			}

			// 选出前三名，进入第二轮/胜利选手编号容器。
			int count = 0;
			for (map<double, int, greater<double>>::iterator p = group_score.begin();
				p != group_score.end() && count < 3; p++, count++) {
				if (m_index == 1) {
					v_no_sec.push_back((*p).second);
				}
				else {
					v_no_victory.push_back((*p).second);
				}
			}

			group_score.clear();

		}
		
	}

	cout << "-----------第" << m_index << "轮比赛结束-----------------";
	system("pause");

}

// 显示比赛结果
void SpeechManager::showScore() {
	cout << "--------第" << m_index << "轮晋级选手结果如下----------" << endl;
	vector<int> v_src;
	if (m_index == 1) {
		v_src = v_no_sec;
	}
	else {
		v_src = v_no_victory;
	}
	for (vector<int>::iterator it = v_src.begin(); it != v_src.end();it++) {
		cout << "编号：" << *it
			<< " 姓名：" << m_speaker[*it].m_name
			<< " 分数：" << m_speaker[*it].m_score[m_index - 1]
			<< endl;
	}
	cout << endl;
	system("pause");
	system("cls");
}

// 记录比赛结果到文件
void SpeechManager::saveSpeech() {
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);
	for (vector<int>::iterator it = v_no_victory.begin(); it != v_no_victory.end(); it++) {
		ofs << *it << ","
			<< m_speaker[*it].m_name <<","
			<< m_speaker[*it].m_score[1] << ",";
	}
	ofs << endl;// 每一届比赛结果写一行

	ofs.close();
	cout << "----------比赛结果已保存到文件-------------" << endl;
	system("pause");
	system("cls");
}

void SpeechManager::exitSystem() {
	cout << "欢迎下次使用：" << endl;
	system("pause");
	exit(0);
}

// 系统初始化
void SpeechManager::initSys() {
	m_index = 1;
	v_no_first.clear();
	v_no_sec.clear();
	v_no_victory.clear();
	m_speaker.clear();

	// 创建选手
	createSpeaker();

}
SpeechManager::~SpeechManager() {
}

