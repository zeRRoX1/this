#pragma once
#include <iostream>

using namespace std;
class �������
{
	char* imya;
	char* familiya;
	char* otchestvo;
public:
	�������() {
		imya = new char[255];
		familiya = new char[255];
		otchestvo = new char[255];
	}
	//distructor
	~�������() {
		delete[]imya;
		delete[]familiya;
		delete[]otchestvo;
	}
	void Print1() {
		cout << "Name: " << imya << endl;
		cout << "Last Name: " << familiya << endl;
		cout << "Last Last Name: " << otchestvo << endl;
	}

	void Cout_name() {
		cout << "INPUT NAME: " << endl;
		cin >> imya;
	}
	void Cout_Last_Name() {
		cout << "INPUT LAST NAME: " << endl;
		cin >> familiya;
	}
	void Cout_Last_Last_Name() {
		cout << "INPUT LAST LAST NAME: " << endl;
		cin >> otchestvo;
	}
	//����������� �����������
	�������(const ������� &f){
		cout << "Constructor: " << this << endl;
	}
};

