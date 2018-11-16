#include "customer.h"

int admission_fee() {
	int r;
	cout << "How many people are there?"<<endl;
	cin >> r;
	return (3000 * r);
	
}
int coffee(item &r) {
	cout << "--------------meun--------------" << endl;
	cout << "1. American 3500 "<<endl;
	cout << "2. Espresso 3500 " << endl;
	cout << "3. caramel macchiato 4000" << endl;
	cout << "4. Hot chocolate 3000" << endl;
	cout << "5. Lemon ice tea 2500" << endl;
	cout << "6. peach ice tea 2500" << endl;
	return 0;
}
int catfood(item &r) {
	return 0;
}
bool customer_Interface(int c, item &money, foodstuff &water, foodstuff&coffee_bean, foodstuff&caramel, foodstuff&milk, foodstuff&lemon, foodstuff&chco, foodstuff&peach) {
	bool lp2 = true;
	int sum=0;
	char a = 0;
	int pass;
	while (lp2) {
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "Hellow, welcome to cat cafe." << endl << "Please select one of the following numbers." << endl;
		cout << "1.Admission Fees " << endl << "2.coffee" << endl << "3.cat item" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "*. manager mode";
		cin >> a;
		switch (a) {
		case '1':
			sum += admission_fee();
			while (1) {
			cout << "Are you going to buy something else?"<<endl;
			cout << "1.Yes 2.No"<<endl;
			
			int num1;
			cin >> num1;
				if (num1 == 1) {
					break;
					
				}
				else if (num1 == 2) {
					lp2 = false;
					break;
					
				}
				else {
					cout << "try again" << endl;
				}	
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
	cout << "Would you like to pay?"<<sum << endl;
	money.increase(sum);
	money.printitem();
	cout << "thank you"<<endl<<endl<<endl << endl << endl;
	
	return true;
}