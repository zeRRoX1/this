#include <iostream>
#include "Дом.h"
#include "Квартира.h"
#include "Человек.h"

int main()
{
	Дом house;
	Квартира komorka;
	Человек	people;
	int a1 = 0;
	int a2 = 0;

	people.Cout_name();
	people.Cout_Last_Name();
	people.Cout_Last_Last_Name();
	komorka.input(a1);
	house.Number(a2);

	house.Print3();
	komorka.Print2();
	people.Print1();

}
