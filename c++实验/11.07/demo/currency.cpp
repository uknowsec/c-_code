//currency.cpp

#include <iostream>
#include "currency.h"
using namespace std;

Currency::Currency()      //�޲ι��캯��
{
	japan=0.0;
	europe=0.0;
}

Currency::Currency(float newj,float newe)  //�вι��캯��
{
	japan=newj;
	europe=newe;
}

void Currency::set(float newj,float newe)   //��Ա����
{
	japan=newj;
	europe=newe;
}

