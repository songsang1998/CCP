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
	Cat();
	void getdisease();
	void setname(string n);
	void setbirth(int b);
	void setdisease(bool d);
	void setspecies(string s);
	void setGender(int g);
};
#endif