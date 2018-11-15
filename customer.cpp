#include "customer.h"


int admission_fee(int &r) {
	//인원수를 입력받아서 요금에 입장료*인원수를 합친후 추가주문 선택
	return 0; //일단은
}
int coffee(int &r) {
	//커피 종류 띄어줌 주문,HoT/ICE,갯수후 추가주문 선택, 재료 소진
	return 0; //일단은
}
int catfood(int &r) {
	//고양이 먹이 요금에 합친후 추가주문 할지 선택
	return 0; //일단은
}
bool customer_Interface(string &c) {
	bool lp2 = true;
	int fee = 0;
	char a = 0;
	string pass;
	while (lp2) {
		cout << "안녕하세요, 고양이 카페에 오신것을 환영합니다." << endl << "아래 번호중 하나를 선택하세요." << endl;
		cout << "1. 입장료" << endl << "2.커피" << endl << "3.고양이 용품" << endl << endl << endl << endl << endl << "*. 관리자 모드";
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
			
			// 입력받은 값과 password값을 비교해서 맞을 경우 return boolean 할수 있다.
		default:
			cout << "다시 입력 해주세요";
		}
		
	}
	return false;
}