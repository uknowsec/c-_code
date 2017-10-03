/*
* @Author: Uknow
* @Date:   2016-10-25 21:37:49
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-25 21:46:19
*/


/*
������ʾ��
��4.7.cpp
I:\c++��ҵ\2016-10-25\��4.7.cpp(31) : error C2248: 'real' : cannot access private member declared in class 'Complex'
        I:\c++��ҵ\2016-10-25\��4.7.cpp(20) : see declaration of 'real'
I:\c++��ҵ\2016-10-25\��4.7.cpp(31) : error C2248: 'imag' : cannot access private member declared in class 'Complex'
        I:\c++��ҵ\2016-10-25\��4.7.cpp(21) : see declaration of 'imag'
I:\c++��ҵ\2016-10-25\��4.7.cpp(40) : error C2593: 'operator <<' is ambiguous
*/

/*
�������1��
#include <iostream>
using namespace std;     ��Ϊ #include<iostream.h>

  ��˵����ͷ�ļ���ʱ�򣬴�����.h����չ������˼�ǲ�ܶ�ġ�����<iostream.h>�Ļ���
  ��ʾ���߱�������ʹ��VisualC++6.0�Ļ������������Լ���������������ͷ�ļ�iostream.h��
  ��<iostream>��ָʹ��ISO C++��׼��������������ͷ�ļ�iostream������ʡ����չ���������ı������������ͬ���ļ���


�������2��
����Ķ���ǰ����ǰ������
class Complex;

ostream& operator <<(ostream&,Complex&);
Complex operator+ (Complex &c2);

  ��Ϊǰ������

*/

#include <iostream>
using namespace std;

class Complex;

ostream& operator <<(ostream&,Complex&);
Complex operator+ (Complex &c2);

class Complex
{
public:
	Complex(){real=0;imag=0;}
	Complex(double r,double i){real=r;imag=i;}
	Complex operator+ (Complex &c2);
	friend ostream& operator <<(ostream&,Complex&);

private:
	double real;
	double imag;
};

Complex Complex::operator + (Complex &c2)
{
	return Complex(real + c2.real,imag+c2.imag);
}

ostream & operator <<(ostream &output,Complex &c)
{
	output<<"("<<c.real<<"+"<<c.imag<<"i)"<<endl;
	return output;
}


int main()
{
	Complex c1(2,4),c2(6,10),c3;
	c3=c1+c2;
	cout << c3;
    return 0;
}