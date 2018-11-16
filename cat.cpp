#include "cat.h"




Cat::Cat() {

}

void Cat::setbirth(int b) {
	Birth_year = b;
}
void Cat::setdisease(bool d) {
	disease = d;
}
void Cat::setspecies(string s) {
	species = s;
}
void Cat::setGender(int g) {
	Gender = g;
}

void Cat::setname(string n)
{
	name = n;
}
void Cat::getdisease()
{
	cin >> disease;
}



