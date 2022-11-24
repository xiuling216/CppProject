#include <iostream>
#include <string>

using namespace std;
class CPU {
public:
	virtual void caculate() = 0;
};

class Memory {
public:
	virtual void storage() = 0;
};

class VidoCard {
public:
	virtual void display() = 0;
};

class Computer {
public:
	Computer(CPU* cpu, Memory* mem,VidoCard* vc) {
		m_cpu = cpu ;
		m_mem = mem;
		m_vc = vc;
	}

	void dowork() {
		m_cpu->caculate();
		m_mem->storage();
		m_vc->display();
	}

	~Computer() {
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
	}

private:
	CPU* m_cpu;
	Memory* m_mem;
	VidoCard* m_vc;
};

// Intel�������
class IntelCPU :public CPU {
	void caculate() {
		cout << "Intel CPU �� ����" << endl;
	}
};

class IntelMemory :public Memory {
	void storage() {
		cout << "Intel �ڴ��� �� ����" << endl;
	}
};

class IntelVidoCard :public VidoCard {
	void display() {
		cout << "Intel �Կ� �� ��ʾ" << endl;
	}
};

// Huawei�������
class HuaweiCPU :public CPU {
	void caculate() {
		cout << "Huawei CPU �� ����" << endl;
	}
};

class HuaweiMemory :public Memory {
	void storage() {
		cout << "Huawei �ڴ��� �� ����" << endl;
	}
};

class HuaweiVidoCard :public VidoCard {
	void display() {
		cout << "Huawei �Կ� �� ��ʾ" << endl;
	}
};

void test() {
	cout << "------------------------------" << endl;
	cout << "��װ��һ̨���ԣ�" << endl;
	IntelCPU* intelCPU = new IntelCPU;
	IntelMemory* intelMemory = new IntelMemory;
	IntelVidoCard* intelVidoCard = new IntelVidoCard;
	Computer* computer1 = new Computer(intelCPU, intelMemory, intelVidoCard);
	computer1->dowork();
	delete computer1;
	/*if (intelCPU != NULL) {
		delete intelCPU;
		intelCPU = NULL;
	}*/

	cout << "------------------------------" << endl;
	cout << "��װ�ڶ�̨���ԣ�" << endl;
	Computer* computer2 = new Computer(new HuaweiCPU, new HuaweiMemory, new HuaweiVidoCard);
	computer2->dowork();
	delete computer2;

	cout << "------------------------------" << endl;
	cout << "��װ����̨���ԣ�" << endl;
	Computer* computer3 = new Computer(new HuaweiCPU, new IntelMemory, new HuaweiVidoCard);
	computer3->dowork();
	delete computer3;
}

int main() {
	test();

	system("pause");
	return 0;
}