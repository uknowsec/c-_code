
//currency.h

#pragma once

class Currency
{
public:
	Currency();			                       //声明构造函数
	Currency(float,float);  
	void set(float,float);					//声明成员函数
	virtual void print_exchange() = 0;      //纯虚函数

protected:
	float japan;					//数据成员
	float europe;
};

