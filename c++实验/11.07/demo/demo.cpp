
//demo.cpp

#include <iostream>
#include "currency.h"
#include "Eur.h"
#include "Ja.h"
using namespace std;

int main()
{
	Currency *p;         //����ָ������ָ��
	Ja j(0,0,100);         //����Ja�����j
	Eur e(0,0,100);			//����Eur�����e
	p=&j;				//ʹָ��ָ��Ja�����
	p->print_exchange();    
	p=&e;					//ʹָ��ָ��Eur�����
	p->print_exchange();
	return 0;
}
	