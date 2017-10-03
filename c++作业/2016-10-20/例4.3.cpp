/*
* @Author: Uknow
* @Date:   2016-10-20 22:01:52
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-20 22:23:01
*/

  /*方法：

头文件的 #include<iostream> 改成 #include<iostream.h>

然后删除语句 using namespace std;


当使用<iostream.h>时，相当于在c中调用库函数，使用的是全局命名空间，也就是早期的c++实现；
当使用<iostream>的时候，
该头文件没有定义全局命名空间，必须使用namespace std；这样才能正确使用cout。

*/
#include <iostream.h> 

class Complex
{
public:
	Complex(){real=0;imag=0;}
	Complex(double r,double i){real=r;imag=i;}
	friend Complex operator + (Complex &c1,Complex &c2);
	void display();

private:
	double real;
	double imag;
	
};


Complex operator + (Complex &c1,Complex &c2)
{return Complex(c1.real+c2.real,c1.imag+c2.imag);}

void Complex::display()
{cout<<"("<<real<<","<<imag<<"i)"<<endl;}

int main()
{
	Complex c1(3,4),c2(5,-10),c3;
	c3=c1+c2;
	cout<<"c1=";c1.display();
	cout<<"c2=";c2.display();
	cout<<"c1+c2=";c3.display();
}