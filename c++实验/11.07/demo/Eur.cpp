

//Eur.cpp

#include <iostream>
#include "Eur.h"
using namespace std;


Eur::Eur()			//无参构造函数
{
	total=0.0;
}

Eur::Eur(float newj,float newe,float newt):Currency(newj,newe)    //有参构造函数
{
	total=newt;
}

void Eur::print_exchange()               //成员函数
{
	cout<<total<<"欧元可兑换美元："<<total*1.1634<<endl;
}