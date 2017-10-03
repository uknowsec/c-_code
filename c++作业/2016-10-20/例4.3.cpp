/*
* @Author: Uknow
* @Date:   2016-10-20 22:01:52
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-20 22:23:01
*/

  /*������

ͷ�ļ��� #include<iostream> �ĳ� #include<iostream.h>

Ȼ��ɾ����� using namespace std;


��ʹ��<iostream.h>ʱ���൱����c�е��ÿ⺯����ʹ�õ���ȫ�������ռ䣬Ҳ�������ڵ�c++ʵ�֣�
��ʹ��<iostream>��ʱ��
��ͷ�ļ�û�ж���ȫ�������ռ䣬����ʹ��namespace std������������ȷʹ��cout��

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