#include "speechManager.h"

SpeechManager::SpeechManager() {

}

void SpeechManager::showMenu() {
	cout << "********************************************" << endl;
	cout << "*************  ��ӭ�μ��ݽ����� ************" << endl;
	cout << "*************  1.��ʼ�ݽ�����  *************" << endl;
	cout << "*************  2.�鿴�����¼  *************" << endl;
	cout << "*************  3.��ձ�����¼  *************" << endl;
	cout << "*************  0.�˳���������  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

//��ʼ����  �����������̿��ƺ���
void SpeechManager::startSpeech() {
	// ϵͳ��ʼ��
	initSys();

	// ��������
	for (m_index = 1; m_index <= 2; m_index++) {
	// 1 ��ǩ
		speechDraw();
	
	// 2 ����
		speechContest();

	// 3 ��ʾ�������
		showScore();
	}

	// 4 ��¼����������ļ�
	saveSpeech();
}

// ��ʾ����������
void SpeechManager::showRecord() {
	ifstream ifs;
	ifs.open("speech.csv", ios::in);

	if (!ifs.is_open()) {
		cout << "�����¼�ļ�������" << endl;
		ifs.close();
		return;
	}

	// �ļ������
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		cout << "û�������¼" << endl;
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
		vector<string> v_tmp;//���ÿ��������
		while (true) {
			pos = data.find(",", start);
			if (pos == -1) {
				break;
			}
			string str = data.substr(start, pos - start);
			v_tmp.push_back(str);
			start = pos + 1;
		}

		cout << "-------------��" << index << "��------------" << endl;
		cout << " �ھ���ţ�" << v_tmp[0] << " ������" << v_tmp[1] << " ������" << v_tmp[2] << endl;
		cout << " ������ţ�" << v_tmp[3] << " ������" << v_tmp[4] << " ������" << v_tmp[5] << endl;
		cout << " �Ǿ���ţ�" << v_tmp[6] << " ������" << v_tmp[7] << " ������" << v_tmp[8] << endl;

	}
	
	system("pause");
	system("cls");
}

// �������������
void SpeechManager::clearRecord() {
	cout << "ȷ����������¼��" << endl;
	cout << "1����" << endl;
	cout << "2����" << endl;

	int in;
	cin >> in;
	if (in == 1) {
		ifstream ifs;
		ifs.open("speech.csv", ios::out | ios::trunc);
		cout << "��ճɹ���" << endl;
	}
	
	system("pause");
	system("cls");

}

// ����ѡ��
void SpeechManager::createSpeaker() {
	string str = "ABCDEFGHIJKL";
	for (int i = 0; i < 12; i++) {
		Speaker sp;
		string name = "ѡ��";
		name+= str[i];
		sp.m_name = name;
		sp.m_score[0] = 0;
		sp.m_score[1] = 0;
		int no = 10000 + i;// ѡ�ֱ��
		v_no_first.push_back(no);// ��ֵ��һ��ѡ�ֱ�Ŷ���
		m_speaker.insert(make_pair(no, sp));// ��ֵ�������map
	}
}

// ��ǩ
void  SpeechManager::speechDraw() {
	cout << "--------��" << m_index << "�ֱ�����ʼ��ǩ��������" << endl;
	cout << "��ǩ�����˳�����£�" << endl;
	
	if (m_index == 1) {
		random_shuffle(v_no_first.begin(), v_no_first.end());//ϴ�ƴ���
		for (auto item : v_no_first) {
			cout << item << " ";
		}
	}
	else {
		random_shuffle(v_no_sec.begin(), v_no_sec.end());//ϴ�ƴ���
		for (auto item : v_no_sec) {
			cout << item << " ";
		}
	}
	cout << endl;
	system("pause");
}

// ����
void SpeechManager::speechContest() {
	cout << "--------��" << m_index << "�ֱ�����ʼ----------" << endl;
	vector<int> v_src;
	if (m_index == 1) {
		v_src = v_no_first;
	}
	else {
		v_src = v_no_sec;
	}

	map<double, int, greater<double>>  group_score;// ��ʱ��Ÿ��ֱ���������ѡ�ֱ��

	int num = 0;// ��������
	for (vector<int>::iterator it = v_src.begin(); it != v_src.end(); it++) {
		num++;

		// 10λ��ί���
		deque<double> d_score;// ѡ�ַ�����������
		for (int i = 0; i < 10; i++) {
			double score = (rand() % 401 + 600)/10.0f;//60-100��
			//cout << score << " ";
			d_score.push_back(score);
		}
		//cout << endl;

		// ȥ����߷���ͷ�
		sort(d_score.begin(), d_score.end(), greater<double>());
		d_score.pop_front();
		d_score.pop_back();

		// ��ƽ���ַŵ��������������
		double sum = accumulate(d_score.begin(), d_score.end(), 0);
		double avg = sum / (double)d_score.size();
		m_speaker[*it].m_score[m_index - 1] = avg;// �����ֱ��������������������
		group_score.insert(make_pair(avg, *it));// �����ͱ�ŷ�����ʱ����

		if (num % 6 == 0) {
			// ��ʾ���ֱ������
			cout << "��" << num / 6 << "�����������£�" << endl;
			for (map<double, int, greater<double>>::iterator p = group_score.begin();
				p != group_score.end(); p++) {
				cout << "��ţ�" << (*p).second
					<< " ������" << m_speaker[p->second].m_name
					<< " ������" << m_speaker[p->second].m_score[m_index - 1] << endl;
			}

			// ѡ��ǰ����������ڶ���/ʤ��ѡ�ֱ��������
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

	cout << "-----------��" << m_index << "�ֱ�������-----------------";
	system("pause");

}

// ��ʾ�������
void SpeechManager::showScore() {
	cout << "--------��" << m_index << "�ֽ���ѡ�ֽ������----------" << endl;
	vector<int> v_src;
	if (m_index == 1) {
		v_src = v_no_sec;
	}
	else {
		v_src = v_no_victory;
	}
	for (vector<int>::iterator it = v_src.begin(); it != v_src.end();it++) {
		cout << "��ţ�" << *it
			<< " ������" << m_speaker[*it].m_name
			<< " ������" << m_speaker[*it].m_score[m_index - 1]
			<< endl;
	}
	cout << endl;
	system("pause");
	system("cls");
}

// ��¼����������ļ�
void SpeechManager::saveSpeech() {
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);
	for (vector<int>::iterator it = v_no_victory.begin(); it != v_no_victory.end(); it++) {
		ofs << *it << ","
			<< m_speaker[*it].m_name <<","
			<< m_speaker[*it].m_score[1] << ",";
	}
	ofs << endl;// ÿһ��������дһ��

	ofs.close();
	cout << "----------��������ѱ��浽�ļ�-------------" << endl;
	system("pause");
	system("cls");
}

void SpeechManager::exitSystem() {
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}

// ϵͳ��ʼ��
void SpeechManager::initSys() {
	m_index = 1;
	v_no_first.clear();
	v_no_sec.clear();
	v_no_victory.clear();
	m_speaker.clear();

	// ����ѡ��
	createSpeaker();

}
SpeechManager::~SpeechManager() {
}

