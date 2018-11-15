#include <iostream>
#include <string>
#include <ctime>
#include "manager.h"
#include "customer.h"
#include "cat.h"
#include "item.h"


using namespace std;







int main() {
	bool lp1 = true;
	bool guest = true;
	string password = "1234";
	cat cats[100];
	item myitem;

	
	while (lp1) {
		

		if (guest = true) {
			guest = customer_Interface(password);
		}
		else {
			guest = manager_Interface(password);
		}
	}
}