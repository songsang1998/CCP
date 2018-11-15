#include "manager.h"
#include <iostream>
#include <string>
using namespace std;

int Password_Setting(string &d) {
	//비밀번호 재설정
	return 0; //일단은
}
int Cafe_Management() {
	//카페 관리
	return 0; //일단은
}

int Cat_Management() {
	//고양이 관리
	return 0; //일단은
}


bool manager_Interface(string &c){
	while (1)
	{
		cout << "관리자모드에 오신것을 환영합니다." << endl << "아래 번호중 하나를 선택하세요." << endl;
		cout << "1.암호설정" << endl << "2.카페관리" << endl << "3.고양이 먹이";
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