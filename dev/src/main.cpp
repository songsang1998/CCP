#include <iostream>
#include <string>
#include <ctime>
#include "../inc/manager.h"
#include "../inc/customer.h"
#include "../inc/cat.h"
#include "../inc/foodstuff.h"
#include "../inc/item.h"




using namespace std;


int main() {
	item money;
	money.set(1000000);
	foodstuff water(50,100);
	foodstuff Coffee_Bean(300,30);
	foodstuff Caramel(100,20);
	foodstuff milk(100,30);
	foodstuff lemon(50,30);
	foodstuff Chocolate(100,30);
	foodstuff peach(50,30);
	foodstuff Chaotour(300,30);
	foodstuff Catstick(400, 30);
	foodstuff GreeniesPhilly(1200,20);
	foodstuff ShivaCans(700, 25);
	bool lp1 = true;
	bool guest = true;
	int password = 1234;




	while (lp1) {


		if (guest == true) {
			guest = customer_Interface(password, money, water, Coffee_Bean, Caramel, milk, lemon, Chocolate, peach,Chaotour,Catstick,GreeniesPhilly,ShivaCans);
		}
		else {
			guest = manager_Interface(password, money, water, Coffee_Bean, Caramel, milk, lemon, Chocolate, peach,Chaotour, Catstick, GreeniesPhilly, ShivaCans);
		}
	}
}