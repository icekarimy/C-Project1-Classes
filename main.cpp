﻿// main.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include "date.h"
#include <string> 
#include "car.h"
#include <iostream>
using namespace std;

int main()
{
	date dateDefault;
    dateDefault.toString();
	dateDefault.printDate(0);
	dateDefault.printDate(1);
	dateDefault.printDate(2);
	dateDefault.printDate(3);
	cout << "___________________________" << endl;
	car newCar(80, 88.7, true);
	newCar.toString();
	newCar.setEngineState(false);
	newCar.toString();
	cout << "___________________________" << endl;
	date newDate(31, "mar", 1980);
	newDate.toString();
	newDate.printDate(0);
	newDate.printDate(1);
	newDate.printDate(2);
	newDate.printDate(3);
	cin.ignore(2);
    return 0;
}

