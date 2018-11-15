#include "customer.h"


int admission_fee(int &r) {
		return 0;
}
int coffee(int &r) {
		return 0; 
}
int catfood(int &r) {
		return 0; 
}
bool customer_Interface(string &c) {
	bool lp2 = true;
	int fee = 0;
	char a = 0;
	string pass;
	while (lp2) {
		cout << "Hellow, welcome to cat cafe." << endl << "Please select one of the following numbers. << endl;
		cout << "1.Admission Fees " << endl << "2.coffee" << endl << "3.cat item" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl <<"*. manager mode";
		cin >> a;
		switch (a) {
		case '1':
			if (admission_fee(fee) == 1) {
				lp2 = false;
			}
			break;
		case '2':
			if (coffee(fee) == 1) {
				lp2 = false;
			}
			break;
		case '3':
			if (coffee(fee) == 1) {
				lp2 = false;
			}
			break;
		case '#':
		case '*':
			getline(cin, pass);
			if (c == pass) {
				return true;
			}
			else
				break;
			

		default:
			cout << "Please re-enter";
		}
		
	}
	return false;
}