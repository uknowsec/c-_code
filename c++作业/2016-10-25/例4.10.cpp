/*
* @Author: Uknow
* @Date:   2016-10-25 22:38:20
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-25 22:42:50
*/

/*
������ʾ��
��4.10.cpp
I:\c++��ҵ\2016-10-25\��4.10.cpp(23) : fatal error C1001: INTERNAL COMPILER ERROR
        (compiler file 'msc1.cpp', line 1786) 
         Please choose the Technical Support command on the Visual C++ 
         Help menu, or open the Technical Support help file for more information

�������1��
	#include <iostream>
	using namespace std;           �ĳ�Ϊ  #include<iostream.h>

�������2��
class Complex;
Complex operator + (Complex c1,Complex c2);
������Ϊǰ������

*/


#include <iostream>
using namespace std;

class Complex;
Complex operator + (Complex c1,Complex c2);

class Complex
{
public:

	Complex(){real=0;imag=0;}
	Complex(double r){real=r;imag=0;}
	Complex(double r,double i){real=r,imag=i;}
	friend Complex operator + (Complex c1,Complex c2);
	void display();

private:
	double real;
	double imag;
	
};

Complex operator + (Complex c1,Complex c2)
{
	return Complex(c1.real+c2.real,c1.imag+c2.imag);
}

void Complex::display()
{
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}

int main()
{
	Complex c1(3,4),c2(5,-10),c3;
	c3=c1+2.5;
	c3.display();
    return 0;
}