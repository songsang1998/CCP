#include "cat.h"




Cat::Cat(string n,int B,bool d, string s, int G) {
	name = n; Birth_year = B; disease = d; species = s; Gender = G;
}

void Cat::getdisease()
{
	cin >> disease;
}


	


