//currency.cpp

#include <iostream>
#include "currency.h"
using namespace std;

Currency::Currency()      //无参构造函数
{
	japan=0.0;
	europe=0.0;
}

Currency::Currency(float newj,float newe)  //有参构造函数
{
	japan=newj;
	europe=newe;
}

void Currency::set(float newj,float newe)   //成员函数
{
	japan=newj;
	europe=newe;
}

