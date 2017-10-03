#include<iostream>			//cylinder.cpp
#include "cylinder.h"		//包含cylinder.h
#include "point.h"			//包含point.h
#include "circle.h"			//包含circle.h
#define PI 3.14159265       //宏定义PI
using namespace std;

Cylinder::Cylinder(float newh,float newr,float newx,float newy):Circle(newr),p(newx,newy)  //派生类构造函数
{
	h=newh;
}

Cylinder::volume()             //派生类成员函数
{
	return area()*h;
}

Cylinder::display()				//派生类成员函数
{
	Circle::display();						//输出基类成员函数
	p.show_point();				//输出子对象
	cout<<"cylinder_height:"<<h<<endl;		//输出派生类的数据
	cout<<"cylinder_volume:"<<volume()<<endl;	
}

