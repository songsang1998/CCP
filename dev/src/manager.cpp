#include "manager.h"
#include <iostream>
#include <string>
#include <queue>
#include "cat.h"
using namespace std;
int i = 0;
int q = 1;
Cat *p = new Cat[q];

int Password_Setting(int d) {

	return 0;
}
int Cafe_Management() {

	return 0;
}

int Cat_Management() {


	string n; int B; int d; string s; int G;
		for (int r=0; r < q-1; r++) {
			cout << "name : " << p[r].name << endl << "Birth_year : " << p[r].Birth_year << endl << "species : " << p[r].species << endl << "Gender : " << p[r].Gender << endl << "disease : " << p[r].disease << endl;
		}
	
	cout << "1.Add a cat" << endl << "2.Delete a cat" << endl << "3.change cat's condition" << endl;
	char a;
	cin >> a;
	switch (a) {
	case '1':
	{cout << "Input your cat infomation in this way(name Birth_year disease(true or false) species Gender(M or W) ";
	cin >> n >> B >> d >> s >> G;
	p[i].setbirth(B);
	p[i].setdisease(d);
	p[i].setspecies(s);
	p[i].setGender(G);
	p[i].setname(n);
	i++;
	q++;



	bool t = true;

	while (t) {
	cout << "do you want to manage more?" << endl << "1.yes" << "2.no" << endl;
	cin.clear();
	cin.ignore(100,'\n');
	int b=0;
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



		break;
	case '3':

		break;
	}
}


bool manager_Interface(int c) {
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