
//Ja.cpp

#include <iostream>
#include "Ja.h"
using namespace std;

Ja::Ja()      //无参构造函数
{
	total=0.0;
}

Ja::Ja(float newj,float newe,float newt):Currency(newj,newe)       //有参构造函数
{
	total=newt;
}

void Ja::print_exchange()         //成员函数
{
	cout<<total<<"日元可兑换美元:"<<total/116.30<<endl;
}
