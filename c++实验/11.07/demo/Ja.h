
//Ja.h

#pragma once

#include "Currency.h"

class Ja:public Currency         
{
public:
	Ja();     //�����޲ι��캯��
	Ja(float,float,float);   //�����вι��캯��
	void print_exchange();    //������Ա����
	 
protected:
	float total;      //���ݳ�Ա

};