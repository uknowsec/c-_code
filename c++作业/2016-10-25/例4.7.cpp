/*
* @Author: Uknow
* @Date:   2016-10-25 21:37:49
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-25 21:46:19
*/


/*
错误提示：
例4.7.cpp
I:\c++作业\2016-10-25\例4.7.cpp(31) : error C2248: 'real' : cannot access private member declared in class 'Complex'
        I:\c++作业\2016-10-25\例4.7.cpp(20) : see declaration of 'real'
I:\c++作业\2016-10-25\例4.7.cpp(31) : error C2248: 'imag' : cannot access private member declared in class 'Complex'
        I:\c++作业\2016-10-25\例4.7.cpp(21) : see declaration of 'imag'
I:\c++作业\2016-10-25\例4.7.cpp(40) : error C2593: 'operator <<' is ambiguous
*/

/*
解决方案1：
#include <iostream>
using namespace std;     改为 #include<iostream.h>

  先说包含头文件的时候，带不带.h的扩展名的意思是差很多的。若用<iostream.h>的话，
  表示告诉编译器，使用VisualC++6.0的基础开发环境自己的输入输出流类库头文件iostream.h。
  而<iostream>是指使用ISO C++标准的输入输出流类库头文件iostream。并非省略扩展名，包含的本身就是两个不同的文件。


解决方案2：
在类的定义前加上前导声明
class Complex;

ostream& operator <<(ostream&,Complex&);
Complex operator+ (Complex &c2);

  作为前导声明

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