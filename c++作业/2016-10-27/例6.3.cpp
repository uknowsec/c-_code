/*
* @Author: Uknow
* @Date:   2016-10-27 23:28:29
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-27 23:32:08
*/

#include <iostream>
using namespace std;

class Point
{
public:
	Point(){}
	virtual ~Point(){cout<<"executing Point destructor"<<endl;}
	
};

class Circle:public Point
{
public:
	Circle(){}
	~Circle(){cout <<"executing Circle destructor"<<endl;}
private:
	int radus;
	
};

int main()
{
	Point *p=new Circle;
	delete p;
    return 0;
}