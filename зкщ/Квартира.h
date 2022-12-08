#pragma once
#include "„еловек.h"

using namespace std;
class  вартира
{
	int num1;
	int konst;
	„еловек* chel;
public:
	 вартира() {
		//массив который будет содержать объекты класса человек
		chel = new „еловек[100];
	}
	~ вартира() {
		delete[]chel;
	}
	void input(int a) {
		cout << "INPUT NUMBER OF KOMORKA: " << endl; 
		cin >> num1;
	}
	void Print2() {
		cout << "Komorka number: " << num1 << endl;
	}
	//конструктор копировани€
	 вартира(const  вартира& konst) : konst{num1} {
		cout << "Constructor: " << this << endl;
	}
};

