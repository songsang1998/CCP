#include <iostream>
#include <string>
#include <ctime>
#include "manager.h"
#include "customer.h"
#include "cat.h"
#include "foodstuff.h"
#include "item.h"




using namespace std;


int main() {
	item money;
	money.set(1000000);
	foodstuff water(50);
	foodstuff Coffee_Bean(300);
	foodstuff Caramel(100);
	foodstuff milk(100);
	foodstuff lemon(50);
	foodstuff Chocolate(100);
	foodstuff peach(50);

	bool lp1 = true;
	bool guest = true;
	int password = 1234;




	while (lp1) {

		
		if (guest == true) {
			guest = customer_Interface(password);
		}
		else {
			guest = manager_Interface(password);
		}
	}
}