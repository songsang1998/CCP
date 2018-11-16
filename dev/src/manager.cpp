#include "manager.h"
#include <iostream>
#include <string>
#include <queue>
#include "cat.h"
using namespace std;
queue<Cat>Q;

queue<Cat>temp;


int Password_Setting(int &d) {
	int i;
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
			return 0;

		}
		else if (b == 2) {
			return 1;

		}
		else {

			cout << "try again";
		}
	}
	return 0;
}
int Cafe_Management() {





	bool t = true;

	while (t) {
		cout << "do you want to manage more?" << endl << "1.yes" << "2.no" << endl;
		cin.clear();
		cin.ignore(100, '\n');
		int b = 0;
		cin >> b;
		if (b == 1) {
			return 0;

		}
		else if (b == 2) {
			return 1;

		}
		else {

			cout << "try again";
		}
	}
	return 0;
}

int Cat_Management() {


	string n; int B; char d; string s; char G;
	int w = Q.size();
		for (int r=0; r < w; r++) {
			cout<<"cat. " << r + 1 <<endl << "name : " << Q.front().name << endl << "Birth_year : " << Q.front().Birth_year << endl << "species : " << Q.front().species << endl << "Gender : " << Q.front().Gender << endl << "disease : " << Q.front().disease << endl << endl;
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
			return 0;

		}
		else if (b == 2) {
			return 1;

		}
		else {

			cout << "try again";
		}
	}
	}

	break;

	case '2':
	{int g = 0; 
	w = Q.size();
	for (int r = 0; r < w; r++) {
		cout << "cat. " << r + 1 << endl << "name : " << Q.front().name << endl << "Birth_year : " << Q.front().Birth_year
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
			cout << "cat. " << r + 1 << endl << "name : " << Q.front().name << endl << "Birth_year : " << Q.front().Birth_year
				<< endl << "species : " << Q.front().species << endl << "Gender : " << Q.front().Gender << endl << "disease : " << Q.front().disease << endl << endl;
			temp.push(Q.front()); Q.pop();
		}
		else if (r == g) {
			Q.pop();
		}
		else {
			cout  << "cat. " << r  << endl << "name : " << Q.front().name << endl << "Birth_year : " << Q.front().Birth_year
				<< endl << "species : " << Q.front().species << endl << "Gender : " << Q.front().Gender << endl << "disease : " << Q.front().disease << endl << endl;
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
				return 0;

			}
			else if (b == 2) {
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
		cout << "Please enter the number of the cat to delete";

	cin >> g;
	g--;
	cout << "Please enter the state(o or x)";
	char l;
	cin >> l;
	for (int r = 0; r < w; r++) {
		if (r < g) {
			temp.push(Q.front()); Q.pop();
		}
		else if (r == g && l=='o') {

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
				return 0;

			}
			else if (b == 2) {
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


bool manager_Interface(int &c) {
	while (1)
	{
		cout << "Welcome to Manager Mode." << endl << "Please select one of the numbers." << endl;
		cout << "1.Password Settings" << endl << "2.Cafe management" << endl << "3.Cat management" << endl;
		char b;
		cin >> b;
		switch (b) {
		case '1':
			if (Password_Setting(c) == 1) {
				return true;
			}
			break;
		case '2':
			if (Cafe_Management() == 1) {
				return true;
			}
			break;
		case '3':
			if (Cat_Management() == 1) {
				return true;
			}



		}
	}
}