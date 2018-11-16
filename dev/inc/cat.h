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
	Cat(string n, int b, char d, string s, char g);
	void getdisease(char d);
};
#endif