#include "cat.h"




Cat::Cat(string n, int b, int d, string s, int g) {
	Birth_year = b;
	species = s;
	Gender = g;
	name = n;
	if (d == 1) {
		disease = true;
	}else { disease = false; }
}

void Cat::getdisease(int d)
{
	if (d == 1) {
		disease = true;
	}
	else { disease = false; }

}



