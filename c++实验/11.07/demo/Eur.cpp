

//Eur.cpp

#include <iostream>
#include "Eur.h"
using namespace std;


Eur::Eur()			//�޲ι��캯��
{
	total=0.0;
}

Eur::Eur(float newj,float newe,float newt):Currency(newj,newe)    //�вι��캯��
{
	total=newt;
}

void Eur::print_exchange()               //��Ա����
{
	cout<<total<<"ŷԪ�ɶһ���Ԫ��"<<total*1.1634<<endl;
}