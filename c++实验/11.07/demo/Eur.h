
//Ja.h

#pragma once 


#include "Currency.h"

class Eur:public Currency          
{
public:
	Eur();             //声明无参构造函数
	Eur(float,float,float);    //声明有参构造函数
	void print_exchange();     //声明成员函数

protected:
	float total;       //数据成员
};