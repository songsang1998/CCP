#include "../inc/customer.h"
#include <stdlib.h>

string enter;
int admission_fee() {
	int r;
	cout << "How many people are there?" << endl;
	cin >> r;
	return (3000 * r);

}

int coffee(foodstuff &water, foodstuff &coffee_bean, foodstuff&caramel, foodstuff&milk, foodstuff&lemon, foodstuff&chco, foodstuff&peach) {
	while (1) {
		cout << "--------------meun--------------" << endl;
		cout << "1. Americano 3500 " << endl;
		cout << "2. Espresso 3500 " << endl;
		cout << "3. caramel macchiato 4000" << endl;
		cout << "4. Hot chocolate 3000" << endl;
		cout << "5. Lemon ice tea 2500" << endl;
		cout << "6. peach ice tea 2500" << endl;
		cout << "7. random order 2000 (only one)" << endl;
		int max[6];
		char coffech;
		cin >> coffech;
		system("clear");
		switch (coffech) {
		case '1':
			if (water.getnumber() >= 3 && coffee_bean.getnumber() >= 1) {
				while (1) {
					cout << "1.Hot? 2.Cool?" << endl;
					int ch21;
					cin >> ch21;
					if (ch21 == 1) {
						cout << "Hot Americano choice" << endl << endl;

						break;
					}
					else if (ch21 == 2) {
						cout << "Cool Americano choice" << endl << endl;

						break;
					}
					else {
						cout << "try again" << endl << endl;

					}

				}
				while (1) {
					int max1 = (water.getnumber() / 3) < (coffee_bean.getnumber()) ? (water.getnumber() / 3) : coffee_bean.getnumber();
					cout << "How many would you like to buy? max:" << max1 << endl << endl;
					int many21;
					cin >> many21;
					if (many21 <= max1) {
						water.decrease(3 * many21);
						coffee_bean.decrease(many21);
						return (many21 * 3500);
					}
					else {
						cout << "Sorry I don't have enough foodstuff." << endl << endl;
					}
				}
			}
			else {
				cout << "Sorry I don't have enough foodstuff." << endl << endl;
				return -1;
			}

		case '2':
			if (water.getnumber() >= 1 && coffee_bean.getnumber() >= 1) {
				while (1) {
					cout << "1.Hot? 2.Cool?" << endl;
					int ch22;
					cin >> ch22;
					if (ch22 == 1) {
						cout << "Hot Espresso choice" << endl << endl;

						break;
					}
					else if (ch22 == 2) {
						cout << "Cool Espresso choice" << endl << endl;

						break;
					}
					else {
						cout << "try again" << endl << endl;

					}

				}
				while (1) {
					int max2 = (water.getnumber()) < (coffee_bean.getnumber()) ? water.getnumber() : coffee_bean.getnumber();
					cout << "How many would you like to buy? max:" << max2 << endl << endl;
					int many22;
					cin >> many22;
					if (many22 <= max2) {
						water.decrease(many22);
						coffee_bean.decrease(many22);
						return (many22 * 3500);
					}
					else {
						cout << "Sorry I don't have enough foodstuff." << endl << endl;
					}
				}
			}
			else {
				cout << "Sorry I don't have enough foodstuff." << endl << endl;
				return -1;
			}

		case '3':
			if (caramel.getnumber() >= 1 && coffee_bean.getnumber() >= 1 && water.getnumber() >= 1 && milk.getnumber() >= 2) {
				while (1) {
					cout << "1.Hot? 2.Cool?" << endl;
					int ch23;
					cin >> ch23;
					if (ch23 == 1) {
						cout << "Hot caramel macchiato choice" << endl << endl;
						break;
					}
					else if (ch23 == 2) {
						cout << "Cool caramel macchiato choice" << endl << endl;
						break;
					}
					else {
						cout << "try again" << endl << endl;

					}

				}
				while (1) {
					int max3;
					int small1 = caramel.getnumber() < coffee_bean.getnumber() ? caramel.getnumber() : coffee_bean.getnumber();
					int small2 = water.getnumber() < (milk.getnumber() / 2) ? water.getnumber() : (milk.getnumber() / 2);
					max3 = small1 < small2 ? small1 : small2;

					cout << "How many would you like to buy? max:" << max3 << endl << endl;
					int many23;
					cin >> many23;
					if (many23 <= max3) {
						water.decrease(many23);
						coffee_bean.decrease(many23);
						caramel.decrease(many23);
						milk.decrease(2 * many23);
						return (many23 * 4000);
					}
					else {
						cout << "Sorry I don't have enough foodstuff." << endl << endl;
					}
				}
			}
			else {
				cout << "Sorry I don't have enough foodstuff." << endl << endl;
				return -1;
			}

		case '4':
			if (water.getnumber() >= 1 && chco.getnumber() >= 1 && milk.getnumber() >= 2) {
				cout << "Hot chocolate choice" << endl << endl;
				while (1) {
					int max4;
					int small3 = water.getnumber() < chco.getnumber() ? water.getnumber() : chco.getnumber();
					if (small3 < (milk.getnumber() / 2))
					{
						max4 = small3;
					}
					else {
						max4 = (milk.getnumber() / 2);
					}
					cout << "How many would you like to buy? max:" << max4 << endl << endl;
					int many24;
					cin >> many24;
					if (many24 <= max4) {
						water.decrease(many24);
						chco.decrease(many24);
						milk.decrease(2 * many24);
						return (many24 * 3000);
					}
					else {
						cout << "Sorry I don't have enough foodstuff." << endl << endl;
					}
				}
			}
			else {
				cout << "Sorry I don't have enough foodstuff." << endl << endl;
				return -1;
			}

		case '5':
			if (water.getnumber() >= 3 && lemon.getnumber() >= 1) {
				cout << "lemon ice tea choice" << endl << endl;
				while (1) {
					int max5 = (water.getnumber() / 3) < (lemon.getnumber()) ? (water.getnumber() / 3) : lemon.getnumber();
					cout << "How many would you like to buy? max:" << max5 << endl << endl;
					int many25;
					cin >> many25;
					if (many25 <= max5) {
						water.decrease(3 * many25);
						lemon.decrease(many25);
						return (many25 * 3000);
					}
					else {
						cout << "Sorry I don't have enough foodstuff." << endl << endl;
					}
				}
			}
			else {
				cout << "Sorry I don't have enough foodstuff." << endl << endl;
				return -1;
			}
		case '6':
			if (water.getnumber() >= 3 && peach.getnumber() >= 1) {
				cout << "peach ice tea choice" << endl << endl;
				while (1) {
					int max6 = (water.getnumber() / 3) < (lemon.getnumber()) ? (water.getnumber() / 3) : peach.getnumber();
					cout << "How many would you like to buy? max:" << max6 << endl << endl;
					int many26;
					cin >> many26;
					if (many26 <= max6) {
						water.decrease(3 * many26);
						peach.decrease(many26);
						return (many26 * 3000);
					}
					else {
						cout << "Sorry I don't have enough foodstuff." << endl << endl;
					}
				}
			}
			else {
				cout << "Sorry I don't have enough foodstuff." << endl << endl;
				return -1;
			}
		case '7':
			max[0] = (water.getnumber() / 3) < (coffee_bean.getnumber()) ? (water.getnumber() / 3) : coffee_bean.getnumber();
			max[1] = (water.getnumber()) < (coffee_bean.getnumber()) ? water.getnumber() : coffee_bean.getnumber();
			int temp1 = caramel.getnumber() < coffee_bean.getnumber() ? caramel.getnumber() : coffee_bean.getnumber();
			int temp2 = water.getnumber() < (milk.getnumber() / 2) ? water.getnumber() : (milk.getnumber() / 2);
			max[2] = temp1 < temp2 ? temp1 : temp2;
			int temp3 = water.getnumber() < chco.getnumber() ? water.getnumber() : chco.getnumber();
			if (temp3 < (milk.getnumber() / 2))
			{
				max[3] = temp3;
			}
			else {
				max[3] = (milk.getnumber() / 2);
			}
			max[4] = (water.getnumber() / 3) < (lemon.getnumber()) ? (water.getnumber() / 3) : lemon.getnumber();
			max[5] = (water.getnumber() / 3) < (lemon.getnumber()) ? (water.getnumber() / 3) : peach.getnumber();
			int maxnumber = 0;
			int maxmum = 0;
			for (int maxi = 0; maxi < 6; maxi++) {
				if (maxmum < max[maxi]) {
					maxmum = max[maxi];
					maxnumber = maxi + 1;
				}
			}
			if (maxnumber == 1) {
				while (1) {
					cout << "1.Hot? 2.Cool?" << endl;
					int ch271;
					cin >> ch271;
					if (ch271 == 1) {
						cout << "Hot Americano choice" << endl << endl;
						water.decrease(3);
						coffee_bean.decrease(1);
						return 2000;
					}
					else if (ch271 == 2) {
						cout << "Cool Americano choice" << endl << endl;
						water.decrease(3);
						coffee_bean.decrease(1);
						return 2000;
					}
					else {
						cout << "try again" << endl << endl;

					}

				}
			}
			else if (maxnumber == 2) {
				while (1) {
					cout << "1.Hot? 2.Cool?" << endl;
					int ch272;
					cin >> ch272;
					if (ch272 == 1) {
						cout << "Hot Espresso choice" << endl << endl;
						water.decrease(1);
						coffee_bean.decrease(1);
						return 2000;
					}
					else if (ch272 == 2) {
						cout << "Cool Espresso choice" << endl << endl;
						water.decrease(1);
						coffee_bean.decrease(1);
						return 2000;
					}
					else {
						cout << "try again" << endl << endl;

					}
				}

			}
			else if (maxnumber == 3) {
				while (1) {
					cout << "1.Hot? 2.Cool?" << endl;
					int ch273;
					cin >> ch273;
					if (ch273 == 1) {
						cout << "Hot caramel macchiato choice" << endl << endl;
						water.decrease(1);
						coffee_bean.decrease(1);
						caramel.decrease(1);
						milk.decrease(2);
						return 2000;
					}
					else if (ch273 == 2) {
						cout << "Cool caramel macchiato choice" << endl << endl;
						water.decrease(1);
						coffee_bean.decrease(1);
						caramel.decrease(1);
						milk.decrease(2);
						return 2000;
					}
					else {
						cout << "try again" << endl << endl;

					}

				}

			}
			else if (maxnumber == 4) {
				cout << "Hot chocolate choice" << endl << endl;
				water.decrease(1);
				chco.decrease(1);
				milk.decrease(2);
				return 2000;


			}
			else if (maxnumber == 5) {
				cout << "lemon ice tea choice" << endl << endl;
				water.decrease(3);
				lemon.decrease(1);
				return 2000;

			}
			else if (maxnumber == 6) {
				cout << "peach ice tea choice" << endl << endl;
				water.decrease(3);
				peach.decrease(1);
				return 2000;
			}
			else {
				cout << "Sorry I don't have enough foodstuff." << endl << endl;
				return -1;
			}

		


		}

	}
}
int catfood(foodstuff &Chaotour, foodstuff &Catstick, foodstuff &GreeniesPhilly, foodstuff &ShivaCans) {
	while (1) {
		cout << "--------------meun--------------" << endl;
		cout << "1. Chaotour 1500 " << endl;
		cout << "2. Catstick 2000 " << endl;
		cout << "3. GreeniesPhilly 5000" << endl;
		cout << "4. ShivaCans 2500" << endl;
		char coffech;
		cin >> coffech;
		switch (coffech) {
		case '1':
			if (Chaotour.getnumber() >= 1) {

				while (1) {

					cout << "How many would you like to buy? max:" << Chaotour.getnumber() << endl << endl;
					int many31;
					cin >> many31;
					if (many31 <= Chaotour.getnumber()) {
						Chaotour.decrease(many31);
						return (many31 * 1500);
					}
					else {
						cout << "Sorry I don't have enough foodstuff." << endl << endl;
					}
				}
			}
			else {
				cout << "Sorry I don't have enough foodstuff." << endl << endl;
				return -1;
			}
			break;
		case '2':
			if (Catstick.getnumber() >= 1) {

				while (1) {

					cout << "How many would you like to buy? max:" << Catstick.getnumber() << endl << endl;
					int many32;
					cin >> many32;
					if (many32 <= Catstick.getnumber()) {
						Catstick.decrease(many32);
							return (many32 * 1500);
					}
					else {
						cout << "Sorry I don't have enough foodstuff." << endl << endl;
						cin.clear();
						cin.ignore(100, '\n');
						cin >> enter;

						system("clear");
					}
				}
			}
			else {
				cout << "Sorry I don't have enough foodstuff." << endl << endl;
				cin.clear();
				cin.ignore(100, '\n');
				cin >> enter;

				system("clear");
				return -1;
			}
		case '3':
			if (GreeniesPhilly.getnumber() >= 1) {

				while (1) {

					cout << "How many would you like to buy? max:" << GreeniesPhilly.getnumber() << endl << endl;
					int many33;
					cin >> many33;
					if (many33 <= GreeniesPhilly.getnumber()) {
						GreeniesPhilly.decrease(many33);
						return (many33 * 5000);
					}
					else {
						cout << "Sorry I don't have enough foodstuff." << endl << endl;
						cin.clear();
						cin.ignore(100, '\n');
						cin >> enter;

						system("clear");
					}
				}
			}
			else {
				cout << "Sorry I don't have enough foodstuff." << endl << endl;
				cin.clear();
				cin.ignore(100, '\n');
				cin >> enter;

				system("clear");
				return -1;
			}
		case '4':
			if (ShivaCans.getnumber() >= 1) {

				while (1) {

					cout << "How many would you like to buy? max:" << ShivaCans.getnumber() << endl << endl;
					int many34;
					cin >> many34;
					if (many34 <= ShivaCans.getnumber()) {
						ShivaCans.decrease(many34);
						return (many34 * 2000);
					}
					else {
						cout << "Sorry I don't have enough foodstuff." << endl << endl;
						cin.clear();
						cin.ignore(100, '\n');
						cin >> enter;

						system("clear");
					}
				}
			}
			else {
				cout << "Sorry I don't have enough foodstuff." << endl << endl;
				cin.clear();
				cin.ignore(100, '\n');
				cin >> enter;

				system("clear");
				return -1;
			}
		default:
			cout << "try again" << endl << endl;
		}



	}

}
bool customer_Interface(int c, item &money, foodstuff &water, foodstuff&coffee_bean, foodstuff&caramel, foodstuff&milk, foodstuff&lemon, foodstuff&chco, foodstuff&peach, foodstuff &Chaotour, foodstuff &Catstick, foodstuff &GreeniesPhilly, foodstuff &ShivaCans) {
	bool lp2 = true;
	int sum = 0;
	char a = 0;
	int pass;
	while (lp2) {

		cout << "---------------------Hellow, welcome to cat cafe.----------------------" << endl << "--------------Please select one of the following numbers.--------------" << endl;
		cout << "1.Admission Fees " << endl << "2.coffee" << endl << "3.cat item" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "                                                        *. manager mode" << endl;
		cin >> a;
		system("clear");
		switch (a) {
		case '1':
			sum += admission_fee();

			while (1) {
				cout << "Are you going to buy something else?" << endl;
				cout << "1.Yes 2.No" << endl << endl;

				int num1;
				cin >> num1;
				if (num1 == 1) {
					system("clear");
					break;

				}
				else if (num1 == 2) {
					system("clear");
					lp2 = false;
					break;

				}
				else {
					cout << "try again" << endl << endl;

				}
			}


			break;
		case '2':
			int checkcoffee;
			checkcoffee = coffee(water, coffee_bean, caramel, milk, lemon, chco, peach);
			if (checkcoffee != -1) {
				while (1) {

					sum += checkcoffee;
					cout << "Are you going to buy something else?" << endl;
					cout << "1.Yes 2.No" << endl << endl;

					int num1;
					cin >> num1;
					if (num1 == 1) {


						system("clear");
						break;

					}
					else if (num1 == 2) {

						system("clear");
						lp2 = false;
						break;

					}
					else {
						cout << "try again" << endl << endl;

					}
				}
			}
			break;
		case '3':
			int checkcatfood;
			checkcatfood = catfood(Chaotour, Catstick, GreeniesPhilly, ShivaCans);
			if (checkcatfood != -1) {
				while (1) {

					sum += checkcatfood;
					cout << "Are you going to buy something else?" << endl;
					cout << "1.Yes 2.No" << endl << endl;

					int num1;
					cin >> num1;
					if (num1 == 1) {

						system("clear");
						break;

					}
					else if (num1 == 2) {

						system("clear");
						lp2 = false;
						break;

					}
					else {
						cout << "try again" << endl << endl;


					}
				}
			}
			break;

		case '*':
			cout << "press your password!";
			cin >> pass;
			if (c == pass) {
				system("clear");
				return false;
			}
			else {

				cout << "Incorrect password.";
				cin.clear();
				cin.ignore(100, '\n');
				cin >> enter;

				system("clear");
			}
			break;


		default:
			cout << "Please re-enter";
			cin.clear();
			cin.ignore(100, '\n');
			cin >> enter;

			system("clear");

		}


	}
	cout << "Would you like to pay?" << sum << endl << endl;
	money.increase(sum);
	cin.clear();
	cin.ignore(100, '\n');
	cin >> enter;
	if (enter == "no") {
		cout << "Return to the initialization plane.";
		return true;
	}
	else {
		system("clear");
	}
	cout << "thank you" << endl << endl << endl << endl << endl;
	cin.clear();
	cin.ignore(100, '\n');
	cin >> enter;

	system("clear");

	return true;
}