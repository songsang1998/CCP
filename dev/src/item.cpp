#include "item.h"
#include <iostream>
using namespace std;
void item::set(int a) {
	number = a;
}
void item::increase(int a) {
	number += a;
}
void item::decrease(int a) {
	number -= a;
}

void item::printitem() {
	cout << number << endl;
}
int item::getnumber() {
	return number;
}
