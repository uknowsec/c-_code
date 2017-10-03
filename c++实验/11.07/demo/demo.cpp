
//demo.cpp

#include <iostream>
#include "currency.h"
#include "Eur.h"
#include "Ja.h"
using namespace std;

int main()
{
	Currency *p;         //定义指向基类的指针
	Ja j(0,0,100);         //建立Ja类对象j
	Eur e(0,0,100);			//建立Eur类对象e
	p=&j;				//使指针指向Ja类对象
	p->print_exchange();    
	p=&e;					//使指针指向Eur类对象
	p->print_exchange();
	return 0;
}
	