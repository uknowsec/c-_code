
//currency.h

#pragma once

class Currency
{
public:
	Currency();			                       //�������캯��
	Currency(float,float);  
	void set(float,float);					//������Ա����
	virtual void print_exchange() = 0;      //���麯��

protected:
	float japan;					//���ݳ�Ա
	float europe;
};

