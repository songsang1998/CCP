#pragma once
#ifndef FOODSTUFF_H
#define FOODSTUFF_H
#include "./item.h"
class foodstuff : public item {
	int pay;
public:
	foodstuff(int a, int b);
	int getpay();

};
#endif