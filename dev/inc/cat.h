#pragma once
#ifndef CAT_H
#define CAT_H
#include <string>
#include <iostream>
using namespace std;

class Cat
{
public:

	string name;
	int Birth_year;
	bool disease;
	string species;
	int Gender;
	Cat(string n,int b, int d, string s, int g);
	void getdisease(int d);
};
#endif