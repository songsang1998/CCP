#include "cat.h"




Cat::Cat(string n, int b, char d, string s, char g) {
	Birth_year = b;
	species = s;
	Gender = g;
	name = n;
	disease = d;
}
	void Cat::getdisease(char d) {

		disease = d;

	}

