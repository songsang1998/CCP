#include <iostream>
#include <string>
#include <ctime>
#include "manager.h"
#include "customer.h"
#include "cat.h"




using namespace std;


int main() {

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