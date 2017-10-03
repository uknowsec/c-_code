#ifndef _CYLINDER		//cylinder.h
#define _CYLINDER

#include "circle.h"
#include "point.h"

class Cylinder:public Circle
{
public:
	Cylinder(float,float,float,float);		//声明构造函数
	display();								//声明成员函数
	volume();

protected:
	Point p;								//定义子对象
	float h;								
};

#endif