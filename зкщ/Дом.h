#pragma once
#include "��������.h"

using namespace std;
class ���
{
	int num;
	int konst2;
	��������* komorka;
public:
	���() {
		komorka = new ��������[255];
	}
	~���() {
		delete[]komorka;
	}
	void Number(int num) {
		cout << "INPUT NUMER OF HOUSE: " << endl;
		cin >> num;
	}
	void Print3() {
		cout << "HOUSE NUMBER: " << num << endl;
	}
	//����������� �����������
	���(const ���& konst2) : konst2{num} {
		cout << "Constructor: " << this << endl;
	}
};

