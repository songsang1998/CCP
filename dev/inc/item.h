#pragma once
#ifndef ITEM_H
#define ITEM_H

class item	
{
	
protected:
	int number = 0;
	
public:
	void set(int a);
	void increase(int a);
	void decrease(int a);
	void printitem();
	int getnumber();
};
#endif

