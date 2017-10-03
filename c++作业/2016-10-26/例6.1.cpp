/*
* @Author: Uknow
* @Date:   2016-10-26 22:20:27
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-26 23:53:56
*/

#include <iostream.h>

class Point
{
public:
	Point(double x=0,double y=0);
	void setPoint(double,double);
	double getX() const {return x;}
	double getY() const {return y;}
	friend ostream & operator << (ostream &,const Point &);

protected:
	double x,y;
};

Point::Point(double a,double b)
{x=a;y=b;}

void Point::setPoint(double a,double b)
{x=a;y=b;}

ostream & operator << (ostream & output,const Point &p)
{
	output<<"["<<p.x<<","<<p.y<<"]"<<endl;
	return output;
}



class Circle:public Point
{
public:
	Circle(double x=0,double y=0,double r=0);
	void setRadius(double);
	double getRadius() const;
	double area() const;
	friend ostream & operator<<(ostream &,const Circle &);

protected:
	double radius;

};

Circle::Circle(double a,double b,double r):Point(a,b),radius(r){}

void Circle::setRadius(double r)
{radius=r;}

double Circle::getRadius() const {return radius;}

double Circle::area() const
{
	return 3.14159*radius*radius; 
}

ostream & operator <<(ostream & output,const Circle &c)
{
	output <<"Center=["<<c.x<<","<<c.y<<"],r="<<c.radius<<",area="<<c.area()<<endl;
	return output;
}



class Cylinder:public Circle
{
public:
	Cylinder(double x=0,double y=0,double r=0,double h=0);
	void setHeight (double);
	double getHeight() const;
	double area() const;
	double volume() const;
	friend ostream & operator << (ostream&, const Cylinder&);
protected:
	double height;

	
};


Cylinder::Cylinder(double a,double b,double r,double h)
:Circle(a,b,r),height(h){}

void Cylinder::setHeight(double h){height=h;}

double Cylinder::getHeight() const {return height;}

double Cylinder::area() const
{
	return 2*Circle::area()+2*3.14159*radius*height;
}

double Cylinder::volume() const
{return Circle::area()*height;}

ostream & operator <<(ostream & output,const Cylinder& cy)
{
	output<<"Center=["<<cy.x<<","<<cy.y<<"],r="
	<<cy.radius<<",h="<<cy.height<<"\narea="<<cy.area()<<",volume="<<cy.volume()<<endl;
	return output;
}



/*
int main()
{
	Point p(3.5,6.4);
	cout<<"x="<<p.getX()<<",y="<<p.getY()<<endl;
	p.setPoint(8.5,6.8);
	cout<<"p(new):"<<p<<endl;
    return 0;
}
*/


/*

int main()
{
	Circle c(3.5,6.4,5.2);
	cout<<"original circle:\nx="<<c.getX()<<",y="<<c.getY()<<",r="
	<<c.getRadius()<<",area="<<c.area()<<endl;
	c.setRadius(7.5);
	c.setPoint(5,5);
	cout<<"new circle:\n"<<c;
	Point &pRef=c;
	cout<<"pRef:"<<pRef;
	return 0;
}

*/



int main()
{
	Cylinder cy1(3.5,6.4,5.2,10);
	cout<<"original cylinder:\nx="<<cy1.getX()<<",y="<<cy1.getY()<<",r="
	<<cy1.getRadius()<<",h="<<cy1.getHeight()<<"\narea="<<cy1.area()
	<<",volume="<<cy1.volume()<<endl;

	cy1.setHeight(15);
	cy1.setRadius(7.5);
	cy1.setPoint(5,5);
	cout<<"\nnew cylinder:\n"<<cy1;
	Point &pRef=cy1;
	cout<<"\npRef as a point:"<<pRef;
	Circle &cRef=cy1;
	cout<<"\ncRef as a Circle:"<<cRef;
	return 0;
}

