/*
* @Author: Uknow
* @Date:   2016-11-06 10:50:50
* @Last Modified by:   Uknow
* @Last Modified time: 2016-11-06 11:32:07
*/

//#include <iostream>
//using namespace std;


#include <iostream.h>

class Shape
{
public:
	virtual double area() const {return 0.0;}
	virtual double volume() const {return 0.0;}
	virtual void shapeName() const=0;
	
};

class Point:public Shape
{
public:
	Point(double =0,double =0);
	void setPoint(double,double);
	double getX() const {return x;}
	double getY() const {return y;}
	virtual void shapeName() const {cout<<"Point:";}
	friend ostream & operator << (ostream &,const Point &);

protected:
	double x,y;
	
};

Point::Point(double a,double b)
{
	x=a;
	y=b;
}

void Point::setPoint(double a,double b)
{
	x=a;
	y=b;
}

ostream & operator <<(ostream & output,const Point &p)
{
	output<<"["<<p.x<<","<<p.y<<"]";
	return output;
}

class Circle:public Point
{
public:
	Circle(double x=0,double y=0,double r=0);
	void setRadius(double);
	double getRadius() const;
	virtual double area() const;
	virtual void shapeName() const {cout<<"Circle:";}
	friend ostream & operator <<(ostream &,const Circle &);
protected:
	double radius;
};

Circle::Circle(double a,double b,double r):Point(a,b),radius(r){}

void Circle::setRadius(double r){radius=r;}   //把赋值改到函数体内，不能使用：这种，这是构造函数的语法

double Circle::getRadius() const {return radius;}

double Circle::area() const {return 3.14159*radius*radius;}

ostream &operator << (ostream &output,const Circle &c)
{
	output<<"["<<c.x<<","<<c.y<<"],r="<<c.radius;
	return output;
} 

class Cylinder:public Circle
{
public:
	Cylinder(double x=0,double y=0,double r=0,double h=0);
	void setHeight(double);
	virtual double area() const;
	virtual double volume() const;
	virtual void shapeName() const {cout<<"Cylinder:";}
	friend ostream & operator <<(ostream&,const Cylinder&);
protected:
	double height;
};

Cylinder::Cylinder(double a,double b,double r,double h):Circle(a,b,r),height(h){}

void Cylinder::setHeight(double h){height=h;}

double Cylinder::area() const
{
	return 2*Circle::area()+2*3.14159*radius*height;
}

double Cylinder::volume() const
{
	return Circle::area()*height;
}

ostream & operator <<(ostream &output, const Cylinder& cy)
{
	output<<"["<<cy.x<<","<<cy.y<<"],r="<<cy.radius<<",h="<<cy.height;
	return output;
}

int main()
{
	Point point(3.2,4.5);
	Circle circle(2.4,1.2,5.6);
	Cylinder cylinder(3.5,6.4,5.2,10.5);
	point.shapeName();
	cout<<point<<endl;

	circle.shapeName();
	cout<<circle<<endl;

	cylinder.shapeName();
	cout<<cylinder<<endl<<endl;

	Shape *pt;

	pt=&point;
	pt->shapeName();
	cout<<"x="<<point.getX()<<",y="<<point.getY()<<"\narea="<<pt->area()<<"\nvolume="<<pt->volume()<<"\n\n";

	pt=&circle;
	pt->shapeName();
	cout<<"x="<<circle.getX()<<",y="<<circle.getY()<<"\narea="<<pt->area()<<"\nvolume="<<pt->volume()<<"\n\n";

	pt=&cylinder;
	pt->shapeName();
	cout<<"x="<<cylinder.getX()<<",y="<<cylinder.getY()<<"\narea="<<pt->area()<<"\nvolume="<<pt->volume()<<"\n\n";	
    return 0;
}