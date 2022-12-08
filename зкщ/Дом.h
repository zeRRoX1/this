#pragma once
#include "Квартира.h"

using namespace std;
class Дом
{
	int num;
	int konst2;
	Квартира* komorka;
public:
	Дом() {
		komorka = new Квартира[255];
	}
	~Дом() {
		delete[]komorka;
	}
	void Number(int num) {
		cout << "INPUT NUMER OF HOUSE: " << endl;
		cin >> num;
	}
	void Print3() {
		cout << "HOUSE NUMBER: " << num << endl;
	}
	//конструктор копирования
	Дом(const Дом& konst2) : konst2{num} {
		cout << "Constructor: " << this << endl;
	}
};

