
//Ja.cpp

#include <iostream>
#include "Ja.h"
using namespace std;

Ja::Ja()      //�޲ι��캯��
{
	total=0.0;
}

Ja::Ja(float newj,float newe,float newt):Currency(newj,newe)       //�вι��캯��
{
	total=newt;
}

void Ja::print_exchange()         //��Ա����
{
	cout<<total<<"��Ԫ�ɶһ���Ԫ:"<<total/116.30<<endl;
}
