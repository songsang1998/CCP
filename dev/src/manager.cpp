#include "manager.h"
#include <iostream>
#include <string>
#include <queue>
#include "cat.h"
#include <ctime>
using namespace std;
queue<Cat>Q;

queue<Cat>temp;


int Password_Setting(int &d) {
	int i;
	system("cls");
	cout << "Input new password";

	cin >> i;

	d = i;


	bool t = true;

	while (t) {
		cout << "do you want to manage more?" << endl << "1.yes" << "2.no" << endl;
		cin.clear();
		cin.ignore(100, '\n');
		int b = 0;
		cin >> b;
		if (b == 1) {

			system("cls");
			return 0;

		}
		else if (b == 2) {

			system("cls");
			return 1;

		}
		else {

			cout << "try again" << endl;
		}
	}
	return 0;
}
int Cafe_Management(item &money, foodstuff &water, foodstuff&coffee_bean, foodstuff&caramel, foodstuff&milk, foodstuff&lemon, foodstuff&chco, foodstuff&peach, foodstuff &Chaotour, foodstuff &Catstick, foodstuff &GreeniesPhilly, foodstuff &ShivaCans) {



	cout << "1.item print&Buy " << endl << "2.money print" << endl;
	char a;
	cin >> a;
	while (1)
		if (a == '1') {
			cout << "--------------item print--------------" << endl;
			cout << "1. water: ";
			water.printitem();
			cout << "2. coffee_bean ";
			coffee_bean.printitem();
			cout << "3. caramel: ";
			caramel.printitem();
			cout << "4. milk: ";
			milk.printitem();
			cout << "5. lemon: ";
			lemon.printitem();
			cout << "6. chco: ";
			chco.printitem();
			cout << "7. peach: ";
			peach.printitem();
			cout << "8.Chaotour: ";
			Chaotour.printitem();
			cout << "9.Catstick ";
			Catstick.printitem();
			cout << "10.GreeniesPhilly: ";
			GreeniesPhilly.printitem();
			cout << "11.ShivaCans: ";
			ShivaCans.printitem();
			cout << "12. exit" << endl << endl;
			int Buy;
			cin >> Buy;
			int numbuy = 0;
			int sumBuy = 0;
			switch (Buy) {
			case 1:

				system("cls");
				cout << "How many would you like to buy?";
				cin >> numbuy;
				sumBuy = water.getpay()*numbuy;
				if (money.getnumber() > sumBuy) {
					money.decrease(sumBuy);
					water.increase(numbuy);
					cout << "Price" << sumBuy << endl;
				}
				else {
					cout << " There is not enough money. " << endl;
				}
				break;
			case 2:

				system("cls");
				cout << "How many would you like to buy?";
				cin >> numbuy;
				sumBuy = coffee_bean.getpay()*numbuy;
				if (money.getnumber() > sumBuy) {
					money.decrease(sumBuy);
					coffee_bean.increase(numbuy);
					cout << "Price" << sumBuy << endl;
				}
				else {
					cout << " There is not enough money. " << endl;
				}
				break;
			case 3:

				system("cls");
				cout << "How many would you like to buy?";
				cin >> numbuy;
				sumBuy = caramel.getpay()*numbuy;
				if (money.getnumber() > sumBuy) {
					money.decrease(sumBuy);
					caramel.increase(numbuy);
					cout << "Price" << sumBuy << endl;
				}
				else {
					cout << " There is not enough money. " << endl;
				}
				break;
			case 4:

				system("cls");
				cout << "How many would you like to buy?";
				cin >> numbuy;
				sumBuy = milk.getpay()*numbuy;
				if (money.getnumber() > sumBuy) {
					money.decrease(sumBuy);
					milk.increase(numbuy);
					cout << "Price" << sumBuy << endl;
				}
				else {
					cout << " There is not enough money. " << endl;
				}
				break;
			case 5:

				system("cls");
				cout << "How many would you like to buy?";
				cin >> numbuy;
				sumBuy = lemon.getpay()*numbuy;
				if (money.getnumber() > sumBuy) {
					money.decrease(sumBuy);
					lemon.increase(numbuy);
					cout << "Price" << sumBuy << endl;
				}
				else {
					cout << " There is not enough money. " << endl;
				}
				break;
			case 6:

				system("cls");
				cout << "How many would you like to buy?";
				cin >> numbuy;
				sumBuy = chco.getpay()*numbuy;
				if (money.getnumber() > sumBuy) {
					money.decrease(sumBuy);
					chco.increase(numbuy);
					cout << "Price" << sumBuy << endl;
				}
				else {
					cout << " There is not enough money. " << endl;
				}
				break;
			case 7:

				system("cls");
				cout << "How many would you like to buy?";
				cin >> numbuy;
				sumBuy = peach.getpay()*numbuy;
				if (money.getnumber() > sumBuy) {
					money.decrease(sumBuy);
					peach.increase(numbuy);
					cout << "Price" << sumBuy << endl;
				}
				else {
					cout << " There is not enough money. " << endl;
				}
				break;
			case 8:

				system("cls");
				cout << "How many would you like to buy?";
				cin >> numbuy;
				sumBuy = Chaotour.getpay()*numbuy;
				if (money.getnumber() > sumBuy) {
					money.decrease(sumBuy);
					Chaotour.increase(numbuy);
					cout << "Price" << sumBuy << endl;
				}
				else {
					cout << " There is not enough money. " << endl;
				}
				break;
			case 9:

				system("cls");
				cout << "How many would you like to buy?";
				cin >> numbuy;
				sumBuy = Catstick.getpay()*numbuy;
				if (money.getnumber() > sumBuy) {
					money.decrease(sumBuy);
					Catstick.increase(numbuy);
					cout << "Price" << sumBuy << endl;
				}
				else {
					cout << " There is not enough money. " << endl;
				}
				break;
			case 10:

				system("cls");
				cout << "How many would you like to buy?";
				cin >> numbuy;
				sumBuy = GreeniesPhilly.getpay()*numbuy;
				if (money.getnumber() > sumBuy) {
					money.decrease(sumBuy);
					GreeniesPhilly.increase(numbuy);
					cout << "Price" << sumBuy << endl;
				}
				else {
					cout << " There is not enough money. " << endl;
				}
				break;
			case 11:

				system("cls");
				cout << "How many would you like to buy?";
				cin >> numbuy;
				sumBuy = ShivaCans.getpay()*numbuy;
				if (money.getnumber() > sumBuy) {
					money.decrease(sumBuy);
					ShivaCans.increase(numbuy);
					cout << "Price" << sumBuy << endl;
				}
				else {
					cout << " There is not enough money. " << endl;
				}
				break;
			case 12:
				break;
			default:
				cout << "Please re-enter" << endl;
				int enter;
				cin >> enter;
				system("cls");
				break;
			}
			if (Buy == 12) {
				break;
			}
		}
		else if (a == '2') {
			cout << "your money:";
			money.printitem();
			break;
		}
		else {
			cout << "try again" << endl;
			int enter;
			cin.clear();
			cin.ignore(100, '\n');
			cin >> enter;

			system("cls");
			return 0;

		}


	while (1) {
		cout << "do you want to manage more?" << endl << "1.yes" << "2.no" << endl;
		cin.clear();
		cin.ignore(100, '\n');
		int b = 0;
		cin >> b;
		if (b == 1) {

			system("cls");
			return 0;

		}
		else if (b == 2) {

			system("cls");
			return 1;

		}
		else {

			cout << "try again" << endl;
		}
	}
	return 0;
}

int Cat_Management() {

	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);

	string n; int B; char d; string s; char G;
	int w = Q.size();
	for (int r = 0; r < w; r++) {
		cout << "cat. " << r + 1 << endl << "name : " << Q.front().name << endl << "age : " << now->tm_year + 1900 + 1 - Q.front().Birth_year << endl << "species : " << Q.front().species << endl << "Gender : " << Q.front().Gender << endl << "disease : " << Q.front().disease << endl << endl;
		temp.push(Q.front()); Q.pop();
	}
	int e = temp.size();
	for (int r = 0; r < e; r++) {
		Q.push(temp.front()); temp.pop();
	}
	cout << "1.Add a cat" << endl << "2.Delete a cat" << endl << "3.change cat's condition" << endl;
	char a;
	cin >> a;
	switch (a) {
	case '1':
	{cout << "Input your cat infomation in this way(name, Birth_year, disease(o or x), species, Gender(M or W) ";
	cin >> n >> B >> d >> s >> G;
	Q.push(Cat(n, B, d, s, G));




	bool t = true;

	while (t) {
		cout << "do you want to manage more?" << endl << "1.yes" << "2.no" << endl;
		cin.clear();
		cin.ignore(100, '\n');
		int b = 0;
		cin >> b;
		if (b == 1) {

			system("cls");
			return 0;

		}
		else if (b == 2) {

			system("cls");
			return 1;

		}
		else {

			cout << "try again" << endl;
		}
	}
	}

	break;

	case '2':
	{int g = 0;
	w = Q.size();
	for (int r = 0; r < w; r++) {
		cout << "cat. " << r + 1 << endl << "name : " << Q.front().name << endl << "age : " << now->tm_year + 1900 + 1 - Q.front().Birth_year
			<< endl << "species : " << Q.front().species << endl << "Gender : " << Q.front().Gender << endl << "disease : " << Q.front().disease << endl << endl;
		temp.push(Q.front()); Q.pop();
	}
	e = temp.size();
	for (int r = 0; r < e; r++) {
		Q.push(temp.front()); temp.pop();

	}cout << "Please enter the number of the cat to delete";

	cin >> g;
	g--;
	for (int r = 0; r < w; r++) {
		if (r < g) {
			cout << "cat. " << r + 1 << endl << "name : " << Q.front().name << endl << "age : " << now->tm_year + 1900 + 1 - Q.front().Birth_year
				<< endl << "species : " << Q.front().species << endl << "Gender : " << Q.front().Gender << endl << "disease : " << Q.front().disease << endl << endl;
			temp.push(Q.front()); Q.pop();
		}
		else if (r == g) {
			Q.pop();
		}
		else {
			cout << "cat. " << r << endl << "name : " << Q.front().name << endl << "age : " << now->tm_year + 1900 + 1 - Q.front().Birth_year << endl << "species : " << Q.front().species << endl << "Gender : " << Q.front().Gender << endl << "disease : " << Q.front().disease << endl << endl;
			temp.push(Q.front()); Q.pop();
		}
	}
	int e = temp.size();
	for (int r = 0; r < e; r++) {
		Q.push(temp.front()); temp.pop();
	}

	bool t = true;

	while (t) {
		cout << "do you want to manage more?" << endl << "1.yes" << "2.no" << endl;
		cin.clear();
		cin.ignore(100, '\n');
		int b = 0;
		cin >> b;
		if (b == 1) {

			system("cls");
			return 0;

		}
		else if (b == 2) {
			system("cls");
			return 1;

		}
		else {

			cout << "try again";
		}

	}
	}
	break;
	case '3':
	{int g = 0;
	cout << "Please enter the number of the cat to change state" << endl;

	cin >> g;
	g--;
	cout << "Please enter the state(o or x)" << endl;
	char l;
	cin >> l;
	for (int r = 0; r < w; r++) {
		if (r < g) {
			temp.push(Q.front()); Q.pop();
		}
		else if (r == g && l == 'o') {

			Q.front().getdisease('o');

		}
		else if (r == g && l == 'x') {

			Q.front().getdisease('x');

		}
		else {

			temp.push(Q.front()); Q.pop();
		}
	}
	int e = temp.size();
	for (int r = 0; r < e; r++) {
		Q.push(temp.front()); temp.pop();
	}










	bool t = true;

	while (t) {
		cout << "do you want to manage more?" << endl << "1.yes" << "2.no" << endl;
		cin.clear();
		cin.ignore(100, '\n');
		int b = 0;
		cin >> b;
		if (b == 1) {
			system("cls");
			return 0;

		}
		else if (b == 2) {
			system("cls");
			return 1;

		}
		else {

			cout << "try again";
		}

	}
	}

	break;
	}
}


bool manager_Interface(int &c, item &money, foodstuff &water, foodstuff&coffee_bean, foodstuff&caramel, foodstuff&milk, foodstuff&lemon, foodstuff&chco, foodstuff&peach, foodstuff &Chaotour, foodstuff &Catstick, foodstuff &GreeniesPhilly, foodstuff &ShivaCans) {
	while (1)
	{
		cout << "Welcome to Manager Mode." << endl << "Please select one of the numbers." << endl;
		cout << "1.Password Settings" << endl << "2.Cafe management" << endl << "3.Cat management" << endl;
		char b;
		cin >> b;
		switch (b) {
		case '1':
			if (Password_Setting(c) == 1) {

				system("cls");
				return true;
			}
			break;
		case '2':
			if (Cafe_Management(money, water, coffee_bean, caramel, milk, lemon, chco, peach, Chaotour, Catstick, GreeniesPhilly, ShivaCans) == 1) {
				system("cls");
				return true;
			}
			break;
		case '3':
			if (Cat_Management() == 1) {
				system("cls");
				return true;
			}



		}
	}
}