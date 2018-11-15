#include "manager.h"
#include <iostream>
#include <string>
using namespace std;

int Password_Setting(string &d) {
	
	return 0; 
}
int Cafe_Management() {
	
	return 0; 
}

int Cat_Management() {
	
	return 0; 
}


bool manager_Interface(string &c){
	while (1)
	{
		cout << "Welcome to Manager Mode." << endl << "Please select one of the numbers." << endl;
		cout << "1.Password Settings" << endl << "2.Cafe management" << endl << "3.Cat management"<<endl;
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