
//Ja.h

#pragma once 


#include "Currency.h"

class Eur:public Currency          
{
public:
	Eur();             //�����޲ι��캯��
	Eur(float,float,float);    //�����вι��캯��
	void print_exchange();     //������Ա����

protected:
	float total;       //���ݳ�Ա
};