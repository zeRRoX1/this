#pragma once
#include "�������.h"

using namespace std;
class ��������
{
	int num1;
	int konst;
	�������* chel;
public:
	��������() {
		//������ ������� ����� ��������� ������� ������ �������
		chel = new �������[100];
	}
	~��������() {
		delete[]chel;
	}
	void input(int a) {
		cout << "INPUT NUMBER OF KOMORKA: " << endl; 
		cin >> num1;
	}
	void Print2() {
		cout << "Komorka number: " << num1 << endl;
	}
	//����������� �����������
	��������(const ��������& konst) : konst{num1} {
		cout << "Constructor: " << this << endl;
	}
};

