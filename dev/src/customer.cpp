#include "customer.h"

int admission_fee(item &c) {
	
	return 0;
}
int coffee(item &r) {
	return 0;
}
int catfood(item &r) {
	return 0;
}
bool customer_Interface(int c, item &money, foodstuff &water, foodstuff&coffee_bean, foodstuff&caramel, foodstuff&milk, foodstuff&lemon, foodstuff&chco, foodstuff&peach) {
	bool lp2 = true;
	
	char a = 0;
	int pass;
	while (lp2) {
		cout << "Hellow, welcome to cat cafe." << endl << "Please select one of the following numbers." << endl;
		cout << "1.Admission Fees " << endl << "2.coffee" << endl << "3.cat item" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "*. manager mode";
		cin >> a;
		switch (a) {
		case '1':
			if (admission_fee(money) == 1) {
				lp2 = false;
			}
			break;
		case '2':
			if (coffee(money) == 1) {
				lp2 = false;
			}
			break;
		case '3':
			if (coffee(money) == 1) {
				lp2 = false;
			}
			break;
		case '#':
		case '*':
			cout << "press your password!";
			cin >> pass;
			if (c == pass) {
				return false;
			}
			else {
				cout << "Incorrect password.";
			}
			break;


		default:
			cout << "Please re-enter";
		}

	}
	return false;
}